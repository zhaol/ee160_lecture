#include <stdio.h>

#define MAX_LIST_SIZE 5
#define ARRAY_OFFSET -1

int main() {
    int list_of_values[MAX_LIST_SIZE];

    int index=1;
    while(index <= MAX_LIST_SIZE) {
        printf("please enter a number\n");
        scanf(" %d", &list_of_values[index+ARRAY_OFFSET]);
        //list_of_values[index + ARRAY_OFFSET] = index * 10;
        index++; // index is 4
    }

    index = 1;
    while(index <= MAX_LIST_SIZE) {
        printf("%d\n", list_of_values[index + ARRAY_OFFSET]);
        index++;
    }
}

/*
1->0
2->1
3->2
*/