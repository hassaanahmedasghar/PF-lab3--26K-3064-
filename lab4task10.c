#include <stdio.h>

int main() {
    int zone;
    float speed, limit = 0, fine = 0;

    printf("Select Zone Type (1 = School Zone, 2 = Highway, 3 = Residential Area): ");
    scanf("%d", &zone);

    printf("Enter driver speed (km/h): ");
    scanf("%f", &speed);

    switch (zone) {
        case 1:
            limit = 30;
            break;
        case 2:
            limit = 100;
            break;
        case 3:
            limit = 50;
            break;
        default:
            printf("Invalid zone type entered.\n");
            return 0;
    }

    if (speed > limit) {
        fine = 1000;
        if (speed - limit > 20) {
            fine *= 2;
        }
        printf("Speed limit exceeded! Final fine amount: Rs. %.2f\n", fine);
    } else {
        printf("No speed limit violation. Fine: Rs. 0\n");
    }

    return 0;
}
