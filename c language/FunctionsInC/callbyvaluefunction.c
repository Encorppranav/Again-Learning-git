#include <stdio.h>

int sum(int,int);
int sum(int a,int b){
    a=6;//sum function cannot change the value of x using a as copy of x or value of x is provided in a
    return a+b;
}

int main()

{	 int x=1,y=6;
    printf("The sum is %d",sum(x,y));

    return 0;

}
