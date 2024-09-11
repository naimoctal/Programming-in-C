#include <stdio.h>

int main()
{
char letter;
printf("Enter the letter: \n");
scanf("%c",&letter);

switch (letter) {
    case 'A':
    case 'a':
    printf("You entered vowel.");
    break;

    case 'E':
    case 'e':
    printf("You entered vowel.");
    break;

    case 'I':
    case 'i':
    printf("You entered vowel.");
    break;

    case 'O':
    case 'o':
    printf("You entered vowel.");
    break;

    case 'U':
    case 'u':
    printf("You entered vowel.");
    break;

    default:
    printf("You entered consonant.");
    break;

    }
    return 0;
}
