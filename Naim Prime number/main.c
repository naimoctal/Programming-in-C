#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, num, p = 0;
    printf("Please enter a number: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
        p++;
        }
    }

    if(p==2) {
        printf("It is a prime number.");
    }

    else {
        printf("It is not a prime number.");
    }
    return 0;
}
