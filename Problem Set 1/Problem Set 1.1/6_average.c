/*
 Find average of three numbers
 */

#include<stdio.h>
int main()
{
    float num1, num2, num3;

    scanf("%f%f%f", &num1, &num2, &num3);

    float average = (num1+num2+num3)/3;

    printf("%f\n", average);

    return 0;
}