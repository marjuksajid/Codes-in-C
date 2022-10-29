#include <stdio.h>
#include <stdlib.h>

int main()
{   /*Take an integer, find the
    factorial using while, do while,
    and for loop, then print it*/
    printf("Enter the number\n");
    int n, i=1, fact=1;
    scanf("%d",&n);
    while(i<=n){
        fact=fact*i;
        i++;
    }
    printf("\nFactorial using while loop is %d\n\n",fact);
    i=1,fact=1;
    do{
        fact=fact*i;
        i++;
    }
    while(i<=n);
    printf("Factorial using do while loop is %d\n\n",fact);
    for(i=1,fact=1; i<=n; i++){
        fact=fact*i;
    }
    printf("Factorial using for loop is %d\n\n",fact);
    return 0;
}
