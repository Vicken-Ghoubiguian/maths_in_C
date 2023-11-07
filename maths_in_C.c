#include <stdio.h>
#include <stdlib.h>

float sqrt_by_Heron(int a, int x)
{
    float sqrt_by_Heron_a = (float) a;
    float sqrt_by_Heron_x = (float) x;
    float last_iter_value = 0.0;

    float sqrt_by_Heron_x = (sqrt_by_Heron_x + (sqrt_by_Heron_a / sqrt_by_Heron_x)) / 2;

    do {

        last_iter_value = sqrt_by_Heron_x;
        sqrt_by_Heron_x = (sqrt_by_Heron_x + (sqrt_by_Heron_a / sqrt_by_Heron_x)) / 2;

    } while(last_iter_value != sqrt_by_Heron_x);

    return 0.0;
}

int main()
{
    return 0;
}