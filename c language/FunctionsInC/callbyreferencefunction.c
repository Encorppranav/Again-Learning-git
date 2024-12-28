#include <stdio.h>

int sum(int *,int *);
int sum(int *a,int *b){
    *a=6;
    return (*a+ *b);//yaha par x ki value change ho gayi kyoki hamne uske address par jake uski value change kar di
}

int main()

{	 int x=1,y=6;
    printf("The sum is %d\n",sum(&x,&y));
    printf("The value of x is %d",x);
    return 0;

}

