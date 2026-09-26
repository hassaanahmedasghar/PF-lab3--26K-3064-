#include <stdio.h>

int main() {
    int people;
    float weight;

    printf("Enter number of people: ");
    scanf("%d", &people);

    printf("Enter total combined weight (kg): ");
    scanf("%f", &weight);

    if (people <= 10 && weight <= 1000) {
        printf("Elevator status: Normal Operation\n");
    } else if (people > 10 && weight > 1000) {
        printf("Elevator status: Denied entry (Exceeds people limit and overweight)\n");
    } else if (people > 10) {
        printf("Elevator status: Denied entry (Exceeds people limit)\n");
    } else {
        printf("Elevator status: Denied entry (Overweight)\n");
    }

    return 0;
}
