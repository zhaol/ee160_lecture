#include <stdio.h>
//with this library we have more string manipulation functions
#include <string.h>

int main()
{
    //initialize a string with a length of 11 to handle a word of 10 characters
 char word[10];   
 //initialize a loop counter and place to store the length of the word
 int i,length;
 //prompt for input
 printf("Enter a word, 10 letters or less.\n ");
    scanf("\n%s",word); //can you just have a space in front of the %s here?
    // yes, a space has not failed me yet
    //store length of string
    length = strlen(word);
    //loop for the number of iterations the string is long
    for(i=0;i<length;i++)
    {
        printf("word[%d] = %c\n",i,word[i]);
    }
}    