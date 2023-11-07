#include <stdio.h>
#include <stdlib.h>



//
float get_sqrt_by_Heron_x(float sqrt_by_Heron_a)
{
    //
    return 0.0;
}

//
float sqrt_by_Heron(int a, int x)
{
    //
    float sqrt_by_Heron_a = (float) a;
    float sqrt_by_Heron_x = (float) x;
    float last_iter_value = 0.0;

    //
    if(0 < a)
    {
        //
        sqrt_by_Heron_x = (sqrt_by_Heron_x + (sqrt_by_Heron_a / sqrt_by_Heron_x)) / 2.0;

        //
        do {

            //
            last_iter_value = sqrt_by_Heron_x;
            sqrt_by_Heron_x = (sqrt_by_Heron_x + (sqrt_by_Heron_a / sqrt_by_Heron_x)) / 2.0;

        //
        } while(last_iter_value != sqrt_by_Heron_x);
    
    //
    } else {

        //
        
    }

    //
    return sqrt_by_Heron_x;
}

//
int main()
{
    //
    printf("%.14f", sqrt_by_Heron(9.0, 3.0));

    //
    return 0;
}