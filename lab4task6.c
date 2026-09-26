#include <stdio.h>

int main() {
    float temp, pressure;

    printf("Enter temperature: ");
    scanf("%f", &temp);

    printf("Enter pressure: ");
    scanf("%f", &pressure);

    if (temp > 100 || pressure > 250) {
        printf("Operating Status: Shutdown\n");
    } else if ((temp >= 85 && temp <= 100) && (pressure >= 200 && pressure <= 250)) {
        printf("Operating Status: Warning Mode\n");
    } else {
        printf("Operating Status: Normal\n");
    }

    return 0;
}
