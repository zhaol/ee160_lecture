/*
things to run before running program:
gem install twitter -v 5.0.0.rc.1
*/

#include <stdio.h>
#include "tweeter_helpers.h"
#include "tweeter_helpers.c"

#define MAX_MESSAGE_SIZE 140
#define ARRAY_OFFSET -1

// This program posts your tweet to Twitter (https://twitter.com/ee160_uh_manoa)
int main() {
  char character;
  
  /* how much is each character worth: http://www.smh.com.au/comment/twitter-changing-the-world-with-140-characters-while-losing-millions-20131106-2x1lv.html
  http://www.bloomberg.com/news/2013-11-06/twitter-raises-1-82-billion-pricing-ipo-above-offering-range.html */
  char message[MAX_MESSAGE_SIZE];
  
  int message_count = 1;
  printf("Please enter in your tweet:\n");
  
  while (((character = getchar()) != '\n') && (message_count <= MAX_MESSAGE_SIZE)) {
    message[message_count+ARRAY_OFFSET] = character;
    message_count++;
  }
  message[message_count+ARRAY_OFFSET] = '\0';

  tweet(message);
  return 0;
}