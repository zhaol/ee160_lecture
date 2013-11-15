void tweet(char string[]) {
  char command[150];
  snprintf(command, sizeof(command), "ruby tweeter.rb %s", string);
  system(command);
}