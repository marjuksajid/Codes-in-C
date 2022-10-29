#include <stdio.h>
int main()
{
    /*Write a program to input two integers and display the sum of even numbers*/
    printf("Enter two integers\n");
    int num1, num2,sum=0;
    scanf("%d %d",&num1,&num2);
    if(num1%2==0){
        sum=num1;
    }
    if(num2%2==0){
        sum=sum+num2;
    }
    printf("%d",sum);
    return 0;
}
