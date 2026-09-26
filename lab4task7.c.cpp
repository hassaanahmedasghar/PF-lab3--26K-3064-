#include <stdio.h>

int main() {
    int plan, minutes;
    float totalBill = 0;

    printf("Select Plan (1-4): ");
    scanf("%d", &plan);

    switch (plan) {
        case 1:
            printf("Enter minutes used: ");
            scanf("%d", &minutes);
            totalBill = 500;
            if (minutes > 1000) {
                totalBill += (minutes - 1000) * 2;
            }
            printf("Total Bill: Rs. %.2f\n", totalBill);
            break;

        case 2:
            printf("Enter minutes used: ");
            scanf("%d", &minutes);
            totalBill = 800;
            if (minutes > 2000) {
                totalBill += (minutes - 2000) * 2;
            }
            printf("Total Bill: Rs. %.2f\n", totalBill);
            break;

        case 3:
            totalBill = 1200;
            printf("Total Bill: Rs. %.2f\n", totalBill);
            break;

        case 4:
            printf("Enter minutes used: ");
            scanf("%d", &minutes);
            totalBill = minutes * 1;
            printf("Total Bill: Rs. %.2f\n", totalBill);
            break;

        default:
            printf("Invalid plan selected.\n");
            break;
    }

    return 0;
}
