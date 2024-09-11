#include <stdio.h>

int main()
    {
    char day;
    printf("\n Enter the first letter of today's day: ");
    scanf("%c",&day);

    if((day == 'F') || (day == 'f')) {
        printf("\n Oh its Friday! You can sleep today!");
    }

    else {
        printf("\n Oh, no, I need to go to class now!");
    }

    return 0;
}
