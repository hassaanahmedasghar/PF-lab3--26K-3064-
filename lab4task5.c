#include <stdio.stdio.h>

int main() {
    float orderAmount;
    int isPremium, isWithinCity;

    printf("Enter order amount (Rs.): ");
    scanf("%f", &orderAmount);

    printf("Is premium member? (1 for Yes, 0 for No): ");
    scanf("%d", &isPremium);

    printf("Is within city limits? (1 for Yes, 0 for No): ");
    scanf("%d", &isWithinCity);

    if (orderAmount > 3000 || isPremium == 1) {
        printf("Delivery Charge Status: Free Delivery\n");
    } else {
        printf("Delivery Charge Status: Delivery Charges Apply\n");
    }

    if (orderAmount < 50000 && isWithinCity == 1) {
        printf("COD Availability: Available\n");
    } else {
        printf("COD Availability: Not Available\n");
    }

    return 0;
}
