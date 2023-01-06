#include<stdio.h>
int main()
{
    int no,i;
    printf("enter the numbers =");
    scanf("%d",&no);
    for(i=2; i<=no; i++)
    {
        if(no%i==0)
        {
            break;

        }

    }
    if(no==i)
    {
        printf("\n prime number");
    }
    else
    {
        printf("\n not prime numner");
    }
    return 0;
}