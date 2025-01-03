#include <stdio.h>
// 1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
// to the third element where ptr is a pointer pointing to the first element of the
// array.

int main()

{	int arry[10]={1,2,3,4,5,6,7,8,9};
    int *ptr=&arry;
    printf("%d\n",*ptr);
    ptr=ptr+2;
        printf("%d",*ptr);





    return 0;

}
