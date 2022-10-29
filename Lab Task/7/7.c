#include <stdio.h>

int main()
{
    /*Emulate the pow() using while loop
    after taking the inputs for base and power*/
    printf("Enter the base and power\n");
    int base, power, i=1, value=1;
    scanf("%d %d",&base, &power);
    while(i<=power){
        value=value*base;
        i++;
    }
    printf("%d",value);

    return 0;
}
