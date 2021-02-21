//
// Created by user on 04/08/2018.
//

#include <stdio.h>


double raiseToPower(double base, double power)
{
    double result=1;
    int i;
    for (i=1; i<=power; i++)
    {
        result = result * base;
    }
    return result;
}


double sinCalculator(double input)
{
    const double BASE_CASE = 0.01;
    const double POWER_OF_3 = 3;

    if (input < BASE_CASE)
    {
        return input;
    }
    else
    {
        double third = (input/3);
        double thirdCalculated = sinCalculator(third);
        return ((3*thirdCalculated)-(4*(raiseToPower(thirdCalculated, POWER_OF_3))));
    }
}

main()
{
    double input;
    if (scanf("%lf", &input))
    {
        if (input>=0)
        {
            printf("%lf", sinCalculator(input));
        }
        else
        {
            printf("%lf", -sinCalculator(-input));
        }
    }
    else
    {
        fprintf(stderr,"%s","ERROR: Invalid argument.");
        return 1;
    }
}