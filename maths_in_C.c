#include <stdio.h>
#include <stdlib.h>

float sqrt_by_Heron(int a, int x)
{
    float sqrt_by_Heron_a = (float) a;
    float sqrt_by_Heron_x = (float) x;

    printf("\n");
    printf("%.6f", sqrt_by_Heron_a);
    printf("\n");
    printf("%.6f", sqrt_by_Heron_x);

    float last_iter_value = 0.0;

    sqrt_by_Heron_x = (sqrt_by_Heron_x + (sqrt_by_Heron_a / sqrt_by_Heron_x)) / 2.0;

    printf("%.6f", sqrt_by_Heron_x);

    do {

        last_iter_value = sqrt_by_Heron_x;
        sqrt_by_Heron_x = (sqrt_by_Heron_x + (sqrt_by_Heron_a / sqrt_by_Heron_x)) / 2.0;

    } while(last_iter_value != sqrt_by_Heron_x);

    printf("\n");
    printf("%.6f", sqrt_by_Heron_x);

    return 0.0;
}

int main()
{
    printf("\n\n");
    printf("%.6f", sqrt_by_Heron(3.0, 1.0));
    return 0;
}