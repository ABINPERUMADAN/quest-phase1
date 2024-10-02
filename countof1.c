/*
program header
1. C code to check number of 1’s in the binary equivalent of a given number.
2. --revisions--
3. 2/10/2024
4.Abin Anto
*/

#include <stdio.h>

static int count;

int divide(int a)     // for counting the number of 1's
{
    int b;
    if(a==0)
        return(0);
    b=a%2;
    if(b==1)
        count++;
    
    divide(a/2);    // call the function itself untill quotient is 0
    
}

int main() {

    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    divide(a);
    printf("Number of one's in binary equalent of %d is : %d",a,count);


}