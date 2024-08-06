#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    srand(time(0));
    int num;
    int a = rand();

    while (1)
    {
        printf("entera no.  ");
        scanf("%d", &num);
        if (a<num)
        {
            printf("lower no. please\n ");
            
        }
        else if (a>num)
        {
            printf("greater no. pleasee \n ");
            
        }
        else
        {
            printf("this is a correct no \n   ");
            break;
        }
    }

    return 0;
}
