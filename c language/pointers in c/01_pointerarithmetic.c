#include <stdio.h>

int main()

{	 int a=5, b='A' ;
    int ptr1=&a,ptr2=&b;

    printf("The value of a is %u\n",ptr1);
    printf("The value of b is %u\n",ptr2);
    ptr1++,ptr2++;

       printf("The value of a is %u\n",ptr1);
    printf("The value of b is %u",ptr2);
    //so pointer incrementation ka mtlb hai ki us architecture mai wo datatype jitne byte occupy karta hai utne se increment ho jayega
    //jaise isme ye dono ek byte hi occupy kar rahe hai to ek se hi increment hue hai


    return 0;

}
