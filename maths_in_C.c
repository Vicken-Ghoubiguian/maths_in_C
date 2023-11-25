#include <stdio.h>
#include <stdlib.h>

// Recursive function to calculate GCD of 2 int which are 'a' and 'b'
int recursive_GCD(int a, int b)
{
    //
    int r = a % b;

    //
    if(r == 0)
    {
        //
        return b;
    }
    //
    else
    {
        //
        return recursive_GCD(b, r);
    }
}

// Iterative function to calculate GCD of 2 int which are 'a' and 'b'
int iterative_GCD(int a, int b)
{
    //
    int r = a % b;

    //
    if(r == 0)
    {
        //
        return b;
    }
    //
    else
    {
        //
        while(r != 0)
        {
            //
            a = b;

            //
            b = r;

            //
            r = a % b;
        }

        //
        return b;
    }
}

//
long long int recursive_factorial(long long int number)
{
    //
    if(number <= 0)
    {
        //
        return 1;
    }
    //
    else
    {
        //
        return number * recursive_factorial(number - 1);
    }
}

//
long long int iterative_factorial(long long int number)
{
    //
    if(number <= 0)
    {
        //
        return 1;
    }
    //
    else
    {
        //
        long long int reverse_iteration = number;

        //
        long long int returned_number = number;

        //
        do {

            //
            reverse_iteration--;

            //
            returned_number = returned_number * reverse_iteration;

        //
        } while(reverse_iteration > 1);

        //
        return returned_number;
    }
}

//
float get_sqrt_by_Heron_x(float sqrt_by_Heron_a)
{
    //
    return 0.0;
}

//
float recursive_sqrt_by_Heron(int a, int x)
{
    //
    return 0.0;
}

//
float iterative_sqrt_by_Heron(int a, int x)
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
        return sqrt_by_Heron_x;
    
    //
    } else {

        //
        return 0.0;
    }
}

//
int main()
{
    //
    printf("%.20f\n", iterative_sqrt_by_Heron(3.0, 1.0));

    //
    printf("%lld\n", iterative_factorial(9));

    //
    printf("%lld\n", recursive_factorial(9));

    //
    printf("%d\n", iterative_GCD(15, 10));

    //
    printf("%d\n", recursive_GCD(15, 10));

    //
    return 0;
}