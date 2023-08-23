#include <stdio.h>

int main() {
    int inputedDistance; // in kilometre
    int distanceInMetre;
    int distanceInCentiMetre;

    printf("Masukan jarak dalam KM dan tekan enter: \n");
    scanf("%d", &inputedDistance);

    distanceInMetre = inputedDistance*1000; // 1 km = 1000m
    distanceInCentiMetre = inputedDistance*100000; // 1km = 100000m

    printf("%d km = %d m = %d cm\n", inputedDistance, distanceInMetre, distanceInCentiMetre);
    return 0;
}
