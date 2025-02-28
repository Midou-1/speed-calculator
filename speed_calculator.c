#include <stdio.h>

int main() {
    float distance, time, speed_kmh, speed_ms;

    printf("Enter the distance traveled (km): ");
    scanf("%f", &distance);

    printf("Enter the time taken (hours): ");
    scanf("%f", &time);

    speed_kmh = distance / time;
    speed_ms = (speed_kmh * 1000) / 3600;

    printf("\n--- Results ---\n");
    printf("Speed: %.2f km/h\n", speed_kmh);
    printf("Speed: %.2f m/s\n", speed_ms);

    return 0;
}