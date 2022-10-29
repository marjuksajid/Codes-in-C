/*
1+3+5+....+nth term
First term, a=1
Common difference, d=2
Summation of n terms, sum=(n/2)(2a+(n-1)d)=(n/2)(2*1+(n-1)2)
Average of n terms, avg=(1/2)(2a+(n-1)d)=(1/2)(2*1+(n-1)2) */

#include <stdio.h>
int main()
{
    /*Write a program to calculate
    and display the sum and average
    of first n odd natural numbers*/
    printf("Enter the value of n\n");
    int n, a, sum, avg;
    scanf("%d",&n);
    sum=(n/2)*(2+(n-1)*2);
    avg=sum/n;       //(1/2)*(2+(n-1)*2);
    printf("Summation is %d\n",sum);
    printf("Average is %d\n",avg);
    return 0;
}
