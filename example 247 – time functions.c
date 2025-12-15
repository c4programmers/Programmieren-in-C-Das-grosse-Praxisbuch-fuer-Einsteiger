/* example 247 – time functions */
#include <stdio.h>
#include <time.h>

int main()
{
    time_t now = time(NULL);
    struct tm *local = localtime(&now);

    char buffer[100]; // Ausgabepuffer

    // Format: Tag.Monat.Jahr – Stunde:Minute Uhr
    strftime(buffer, sizeof(buffer), "%d.%m.%Y - %H:%M Uhr", local);

    printf("Aktuelle Uhrzeit: %s\n", buffer);

    return 0;
}
