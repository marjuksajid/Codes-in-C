#include<stdio.h>
#include<math.h>
int main(){
    /*Result of 5 – 11 + 17 -
    ... (up to 15 th term )*/
    int sum=5, magnitude=5, sign;

    for(int i=1; i<=15-1; i++){
        sign=pow(-1,i);
        magnitude=magnitude+6;
        sum=sum+sign*magnitude;
    }
    printf("Summation is %d",sum);
}
