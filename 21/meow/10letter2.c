#include <stdio.h>
//what were we supposed to do
main() {
    // declare
    char word[10]; 
    
    printf("Enter a word that is 10 letters or less:\n");
    scanf(" %s", word);
    printf("%s\n", word);
    
    int length = 0;
    while(length<=9) {
        printf("word[%d] = %c\n",length,word[length]);
        length++;
    }
}