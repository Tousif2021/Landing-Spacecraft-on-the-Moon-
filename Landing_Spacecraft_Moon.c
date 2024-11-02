#include <stdio.h>

int main(void) {
    double Height = 250;
    double Velocity = -25;
    int throttle = 0;
    int time = 0;

    printf("Time\tHeight\t\tVelocity\tThrottle?\n");

    while (Height>0)
    {
        printf("%-5d\t%-7.2f\t\t%-9.2f\t", time, Height, Velocity);
        scanf("%d", &throttle);

        double accelaration = 0.1*throttle-1.5;
        Height+=Velocity+accelaration/2;
        Velocity+=accelaration;
        time++;
        
    }
                if (Velocity<-2.0)
            {
                printf("\nCrash landing! The spacecraft crashed with the velocity of %.2f (m/s).\n", Velocity);
            }else
            {
                printf("\nSuccessful landing! The spacecraft has successfully landed with the velocity of %.2f (m/s).\n", Velocity);
            }
    return 0;
}