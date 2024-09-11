#include <stdio.h>

 int main()

 {
    float temperature;
    printf("\n Enter the value of current temperature: ");
    scanf("%f",&temperature);

    if (temperature >= 35) {
        printf("\n The temperature is too hot");
    }

    if (temperature < 35 && temperature > 20 ) {
        printf("\n The temperature is normal");
    }

    if (temperature <= 20){
        printf("\n The temperature is too cold");
    }
return 0;
}
