#include <stdio.h>
#include <conio.h>

int main() {
    int num;
    printf("\n Enter the number: ");
    scanf("%d", &num);

    if (num==0) {
        printf("\n Zero is not a real number.");
    }

    else if (num%2==0) {
        printf("\n It is even number.");
    }

    else {
        printf("\n It is odd number.");
    }
 getch();
}
