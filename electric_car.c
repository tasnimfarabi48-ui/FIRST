#include <stdio.h>

int main() {
    int charge;
    char going_downhill;

    printf("Enter the amount of charge: ");
    scanf("%d", &charge);

    printf("Is it going downhill? (y/n): ");
    scanf(" %c", &going_downhill);


    if (charge < 5) {
        printf("STOP IMMEDIATELY!!\n");
    }

    else if (charge < 20 && going_downhill == 'n') {
        printf("Route to the nearest charging station\n");
    }
    else if (going_downhill == 'y') {
        printf("Brakes are recharging battery. Keep driving.\n");
    }
    else {
        printf("Keep driving.\n");
    }

    return 0;
}
