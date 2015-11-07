#include <stdio.h>

int main()
{
  int i=-1,j;
  char buffer[256];
  do 
  {
    if (i==0)
      {
          printf("Please enter a valid entry\n");
      }
     if(i%1==0)
      {
          if(i>0)
          {
            for(j=0;j<=i;j++)
                 {
                  printf("counting: %d\n",j);
              }
          }
      }
      printf ("Please enter a number to count or 'q' to quit:\n");
      scanf(" %s",buffer);
      //fgets (buffer, 256, stdin);
      i = atoi (buffer);
    // if(buffer[0] == 'q')
    //   {
    //       return 0;
    //   }

     
  }while(buffer[0]!='q');
    printf("Quitting...\n");
}