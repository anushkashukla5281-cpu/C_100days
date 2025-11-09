#include <stdio.h>
#include <string.h>

int main() {
    char date[20], newDate[30];
    char month[4];

    printf("Enter date (dd/mm/yyyy): ");
    gets(date);  // or use fgets(date, sizeof(date), stdin)

    // Extract month part
    if (date[3] == '0' && date[4] == '1') strcpy(month, "Jan");
    else if (date[3] == '0' && date[4] == '2') strcpy(month, "Feb");
    else if (date[3] == '0' && date[4] == '3') strcpy(month, "Mar");
    else if (date[3] == '0' && date[4] == '4') strcpy(month, "Apr");
    else if (date[3] == '0' && date[4] == '5') strcpy(month, "May");
    else if (date[3] == '0' && date[4] == '6') strcpy(month, "Jun");
    else if (date[3] == '0' && date[4] == '7') strcpy(month, "Jul");
    else if (date[3] == '0' && date[4] == '8') strcpy(month, "Aug");
    else if (date[3] == '0' && date[4] == '9') strcpy(month, "Sep");
    else if (date[3] == '1' && date[4] == '0') strcpy(month, "Oct");
    else if (date[3] == '1' && date[4] == '1') strcpy(month, "Nov");
    else if (date[3] == '1' && date[4] == '2') strcpy(month, "Dec");
    else strcpy(month, "Invalid");

    // Print in new format
    printf("New format: %.2s-%s-%s", date, month, date + 6);

    return 0;
}