/* example 185 – error handling */
#include <stdio.h>
#include <string.h>   // needed for strerror()
#include <errno.h>    // needed for errno

int main(void)
{
    FILE *fp;

    // try to open a file which does not exist
    fp = fopen("C:\\CProgramming\\newfile.txt", "r");

    if (fp == NULL) {
        // print the numeric errno value
        printf("Value of errno = %d\n", errno);

        // print the textual error message with strerror()
        printf("Error message (strerror): %s\n", strerror(errno));

        // print error message using perror()
        perror("Error using perror");
    } else {
        fclose(fp);  // only in case the file exists
    }

    return 0;
}
