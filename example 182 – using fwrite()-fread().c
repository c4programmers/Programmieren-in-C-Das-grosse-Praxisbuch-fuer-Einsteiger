/* example 182 – using fwrite()/fread() */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <errno.h>

#define NAME_LEN   50
#define LOC_LEN    100
#define DATA_FILE  "C:/CProgramming/mydata.dat" //forward slashes also work on Windows

typedef struct {
    char     name[NAME_LEN];
    char     location[LOC_LEN];
    uint32_t postcode;
} Address;

/* Removes the trailing '\n' if present */
static void trim_newline(char *s) {
    if (!s) return;
    size_t n = strlen(s);
    if (n && s[n - 1] == '\n') s[n - 1] = '\0';
}
/* Reads one line into buf and trims it; returns 0 on success, -1 on EOF/error */
static int prompt_line(const char *prompt, char *buf, size_t bufsz) {
    fputs(prompt, stdout);
    if (!fgets(buf, (int)bufsz, stdin)) return -1;
    trim_newline(buf);
    return 0;
}
/* Reads an unsigned integer (postcode) robustly from console input */
static int prompt_uint32(const char *prompt, uint32_t *out) {
    char line[64];
    if (prompt_line(prompt, line, sizeof line) == -1) return -1;

    errno = 0;
    char *end = NULL;
    unsigned long v = strtoul(line, &end, 10);
    if (errno || end == line || *end != '\0' || v > 0xFFFFFFFFUL) {
        fputs("Input error: please enter a valid number.\n", stderr);
        return -1;
    }
    *out = (uint32_t)v;
    return 0;
}

/* Appends one record to the binary data file */
static void writeDataToFile(void) {
    Address data;

    if (prompt_line("Name:\t\t", data.name, sizeof data.name) == -1) {
        fputs("Input error\n", stderr);
        return;
    }
    if (prompt_line("Location:\t", data.location, sizeof data.location) == -1) {
        fputs("Input error\n", stderr);
        return;
    }
    if (prompt_uint32("Postcode:\t", &data.postcode) == -1) {
        return;
    }
    FILE *fp = fopen(DATA_FILE, "ab");   /* append, binary */
    if (!fp) {
        perror("Error opening file for append");
        return;
    }
    size_t n = fwrite(&data, sizeof data, 1, fp);
    if (n != 1) {
        perror("Error writing record");
        /* fall through to close */
    }
    fclose(fp);
}

/* Reads all records from the binary data file and prints them */
static void readDataFromFile(void) {
    Address data;
    FILE *fp = fopen(DATA_FILE, "rb");   /* read, binary */
    if (!fp) {
        perror("Error opening file for read");
        return;
    }
    while (fread(&data, sizeof data, 1, fp) == 1) {
        printf("Name:\t\t%s\n", data.name);
        printf("Location:\t%s\n", data.location);
        printf("Postcode:\t%u\n\n", data.postcode);
    }
    if (!feof(fp)) {
        perror("Error reading record");
    }
    fclose(fp);
}
int main(void) {
    while (1) {
        puts("[1] New data");
        puts("[2] Output data");
        puts("[3] Exit program\n");
        fputs("Your selection : ", stdout);

        char line[32];
        if (!fgets(line, sizeof line, stdin)) {
            fputs("Input error\n", stderr);
            continue;
        }

        int choice = 0;
        if (sscanf(line, "%d", &choice) != 1) {
            fputs("Please enter 1, 2 or 3.\n", stderr);
            continue;
        }

        switch (choice) {
            case 1: writeDataToFile(); break;
            case 2: readDataFromFile(); break;
            case 3: return 0;
            default: fputs("Please enter 1, 2 or 3.\n", stderr); break;
        }
    }
}
