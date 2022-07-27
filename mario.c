#include <cs50.h>
#include <stdio.h>

void daying(char c,int times);
int main(void)
{   
    int n = 0;
    while(n < 1 || n > 8)
    {
        n = get_int("Height:");
    }
    for (int i = 1; i <= n ;i++)
    {   
        int m = (n - i);
        daying(' ',m);
        daying('#',i);
        printf("\n");

    }
    
}

void daying(char c,int times)
{
    for(int i = 0;i < times;i++)
    {
    printf("%c",c);
    }
}
