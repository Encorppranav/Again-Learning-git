#include <stdio.h>

int main()

{	 int marks[]={50,68,79,24};
    int *ptr=&marks;//or int *ptr=&marks[0] are same syntax,by default these two means that we are pointing the first element of array
    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %d\n",i,marks[i]);
        printf("The marks at index %d is %d\n",i,*ptr);
        ptr++;
    }
    

    return 0;

}
