#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int FtoC(int f)
{
    int celsius;
    celsius = (5.0 / 9.0) * (f - 32.0);
    return celsius;
}

int main(void)
{
    float fahr, celsius;

    printf("Fahrenheit\tCelsius\n\n");
    fahr = LOWER;
    while (fahr <= UPPER)
    {
        celsius = FtoC(fahr);
        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
    return 0;
}
