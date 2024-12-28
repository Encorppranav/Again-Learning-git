// 2. Write a program having a variable 'i'. Print the address of 'i'. Pass this variable to
// a function and print its address. Are these addresses same? Why?

// 4. Write a function and pass the value by reference.
// 5. Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main().
// 6. Write a program to print the value of a variable i by using "pointer to pointer" type
// of variable.
// 7. Try problem 3 using call by value and verify that it does not change the value of
// the said variable.

#include <stdio.h>

int returning_5(int *ptr){
    printf("the value of ptr is %d\n",ptr);
    printf("the value at  ptr is %d\n",*ptr);
}

int main()

{	 int i=2;
    int *ptr=&i;
    printf("The value of address of i is %d\n",&i);
    returning_5(ptr);


    return 0;

}
