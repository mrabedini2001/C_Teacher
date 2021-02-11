//  function in c
#include<stdio.h>

/* function declaration */int addition();

int main()
{   
    /* local variable definition */    int answer;
    
    /* calling a function to get addition value */    answer = addition();

    printf("The addition of the two numbers is: %d\n",answer);
    return 0;
}

/* function returning the addition of two numbers */int addition()
{
    /* local variable definition */    int num1 = 10, num2 = 5;
    return num1+num2;
}