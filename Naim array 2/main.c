#include <stdio.h>

int main(){
int n;
double avg;
printf("Enter the no's you want to calculate their sum: ");
scanf("%d",&n);
int number[n];
int sum = 0;
int i;


for(i = 0;i < n;i++){
    printf("\n Enter %d no number: ",i+1);
    scanf("\n %d",&number[i]);

    sum+=number[i];
    avg = sum/n;
    }
    printf("\n Summation of these numbers = %d. \n Average of these numbers = %f.",sum,avg);
 return 0;
}
