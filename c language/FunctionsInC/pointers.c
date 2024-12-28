#include <stdio.h>
    //pointer is a variable that stores the memory address of another variable
int main()

{	 int i=72;
    int*j=&i;// *=value of operator,it means value of j is equal to address of i

    char n='A';
    char *m=&n; 

    printf("The address of i is %p\n",&i);
    printf("The address of i is %u\n",&i);//it is the value of i in digits
    printf("The address of i is %p\n",j);//j is a pointer pointing to i
    printf("The address of n is %p\n",m);
    printf("The address of n is %u\n",&n);

    return 0;

}
