// array in c
#include <stdio.h>
int main(){
    int myArray[5]={22,25,30,32,35};
    // int myArray[5];
    int n = 0;

    // Initializing elements of array seperately
    for(n=0;n<sizeof(myArray)/sizeof(myArray[0]);n++)
    {
    myArray[n] = n; 
    }
}