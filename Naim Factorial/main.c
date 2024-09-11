/* Summary: n!=n*(n-1)*(n-2)*(n-3)......3*2*1. and zero factorial 0!=1. */
/* Example: 5! = 5*4*3*2*1 = 120. */
#include <stdio.h>

int main()
    {
    long int i,n,fact=1;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d",&n);

    for (i = 1; i<=n; i++)
    fact = fact*i;
    printf("\n Factorial of %d = %ld",n,fact);

 return 0;
}

