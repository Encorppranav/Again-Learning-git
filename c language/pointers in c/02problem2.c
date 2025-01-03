#include <stdio.h>
// 3. Write a program to create an array of 10 integers and store multiplication table of
// 5 in it.
// 4. Repeat problem 3 for a general input provided by the user using scanf.
int main()

{	 int ary[10];
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    for (int i = 1; i <=10; i++)
    {
        ary[i]=n*i;
    }

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\t",ary[i]);
    }
    
    

    return 0;

}
