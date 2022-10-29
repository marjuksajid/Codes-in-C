#include <stdio.h>

int main()
{
    /*print the numbers from 1 to 10 and
    their squares using while/do
    while /for Loop*/

    int i=1;
    printf("Using while:\n");
    while(i<=10){
        printf("Square of %d is",i);
        printf(" %d\n",i*i);
        i++;
    }
    printf("\nUsing do while:\n");
    i=1;
    do{
        printf("Square of %d is",i);
        printf(" %d\n",i*i);
        i++;
      }
      while(i<=10);
    printf("\nUsing for:\n");
    for(i=1;i<=10;i++){
        printf("Square of %d is",i);
        printf(" %d\n",i*i);
    }
    return 0;
}
