#include <stdio.h>
int main()
{
   int A,B ,temp;

   printf("Enter the 1st number : ");
   scanf("%d",&A);

   printf("Enter the 2nd number : ");
   scanf("%d",&B);

   printf("\n Before swapping:\n");
   printf(" A-%d \n B-%d",A,B);

   temp = A;
   A  = B;
   B = temp;

   printf("\n After swapping:\n");
   printf(" A-%d \n B-%d",A,B);

   return 0;
}
