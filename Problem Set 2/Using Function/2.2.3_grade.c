#include<stdio.h>

int num;

void grade(int num);

int main() {
    scanf("%d", &num);

    grade(num);
    return 0;
}

void grade(int num) {
    if(num>=80 && num<=100)
    {
        printf("A+\n");
    }
    else if(num>=70 && num<80)
    {
        printf("A\n");
    }
    else if(num>=60 && num<70)
    {
        printf("A-\n");
    }
    else if(num>=50 && num<60)
    {
        printf("B\n");
    }
    else if(num>=40 && num<50)
    {
        printf("C\n");
    }
    else if(num>=33 && num<40)
    {
        printf("D\n");
    }
    else if(num>=0 && num<33)
    {
        printf("F\n");
    }
    else
    {
        printf("Invalid Input\n");
    }
}