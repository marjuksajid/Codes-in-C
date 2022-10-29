#include <stdio.h>
int main()
{
    /*display Fibonacci series of last term up to 300*/
    int t1=0,t2=1,nextTerm;
    printf("%d  %d  ",t1,t2);
    for(;t1+t2<=300;){
        nextTerm=t1+t2;
        printf("%d  ",nextTerm);
        t1=t2;
        t2=nextTerm;
    }
    return 0;
}
