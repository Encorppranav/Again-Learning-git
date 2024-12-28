#include <stdio.h>
// 3. Write a program to change the value of a variable to ten times of its current
// value.
void tenx_value(int*);
void tenx_value(int *j){
   *j=10*(*j);
}

int main()

{	int i;
     int*j=&i;
    printf("Enter a number\n");
    scanf("%d",&i);
    tenx_value(j);
    printf("The value is %d",i);

    return 0;

}
