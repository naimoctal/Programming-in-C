#include <stdio.h>
#include <conio.h>

int main()
{
    float fahrenheit, celsius;
    printf("Enter the temperature in Fahrenheit scale: ");
    scanf("%f",&fahrenheit);
    celsius = ((fahrenheit-32)*5)/9;
    printf("\nThe temperature in Celsius scale =  %f.",celsius);

    getch();
}
