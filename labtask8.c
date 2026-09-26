#include <stdio.h>

int main() {
    float cgpa, income;

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter monthly family income (Rs.): ");
    scanf("%f", &income);

    if (cgpa > 3.7 && income < 50000) {
        printf("Scholarship Category: Full Scholarship\n");
    } else if (cgpa > 3.3 && income < 100000) {
        printf("Scholarship Category: Half Scholarship\n");
    } else {
        printf("Scholarship Category: No Scholarship\n");
    }

    return 0;
}
