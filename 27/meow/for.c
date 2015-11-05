#include <stdio.h>

int main()
{
    int i,j;
    for(i=0,j=10;i<j+10;i++,j--)
    {
        
        printf("iteration: %d\ncounter1: %d\ncounter2: %d\n\n",i+1,i,j);
    }
}