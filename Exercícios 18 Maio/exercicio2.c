#include <stdio.h>

int main(){
    // Cálculo de Fahrenheit

    int fahrenheit;
    float celsius;

    printf("Fahrenheit || Celsius");

    for(fahrenheit = 50; fahrenheit <= 65;
    fahrenheit++){
        celsius = (fahrenheit - 32) * 5/9.0;
        printf("\n°F%3d || %1.2f°C\n", fahrenheit, celsius);
    }
return 0;

}

