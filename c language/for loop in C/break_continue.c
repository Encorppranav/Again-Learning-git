#include <stdio.h>

int main()

{	 int i;

    for ( i = 0; i < 20; i++)

    {
            if (i==11)
            {
                //break;IT EXITS THE LOOP
                continue;//it skips the condition for i==11
            }
            
            
            printf("%d\n",i);



}


    return 0;

}


