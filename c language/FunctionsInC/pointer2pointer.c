#include <stdio.h>

int main()

{	int i=6;
    int *j=&i;
    int **k=&j;

    printf("The value of i is %d\n",i);
    printf("The value of i is %p\n",*(&i));
    printf("The value of i is %p\n",*j);
    printf("The value of i is %p\n",**(&j));// this will be equal to **(&&i) and for remembering
                                            // * and & will cancel each other

    return 0;

}
