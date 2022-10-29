#include <stdio.h>
int main()
{
    /*GCD and LCM of two numbers */
    printf("Enter the two numbers\n");
    int num1,num2,i,GCD,LCM;
    scanf("%d %d",&num1,&num2);
    for(i=1;i<=num1 && i<=num2; i++){
        if(num1%i==0 && num2%i==0){
            GCD=i;
        }
    }
    LCM=num1*num2/GCD;
    printf("GCD is %d\n",GCD);
    printf("LCM is %d\n",LCM);
    return 0;
}

