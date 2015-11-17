#include <stdio.h>


#define MAX_ROWS 2
#define MAX_COLS 3
#define MAX_PAGES 2

/*  This program stores declares, initializes, and uses a 3D array */
int main() {
  int array[MAX_ROWS][MAX_COLS][MAX_PAGES] = 
                      { 
                      
                      {   {1, 2}, {1, 2}, {1, 2}  },
                      {   {1, 2}, {1, 2}, {1, 2}  } 
                        
                      };
 
    int i,j,k;
    for(i=0;i<MAX_ROWS;i++)
    {
        for(j=0;j<MAX_COLS;j++)
        {
          for(k=0;k<MAX_PAGES;k++)
          {
            if(k==0)
            {
                printf("[%d][%d][%d]: %d",i,j,k,array[i][j][k]);
            }
            else
            {
                printf(", [%d][%d][%d]: %d",i,j,k,array[i][j][k]);
            }
          }
        }
        printf("\n");
    }
}