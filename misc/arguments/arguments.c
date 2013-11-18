#include <stdio.h>

// http://stackoverflow.com/questions/498320/pass-arguments-into-c-program-from-command-line
int main(int argc, char *argv[]) {
  int i;
  for (i = 0; i < argc; i++) {
      printf("argv[%d] = %s\n", i, argv[i]);
  }
  return 0;
}

/*
// if you want to use environment variables
//http://msdn.microsoft.com/en-us/library/a1y7w461.aspx
int main( int argc, // Number of strings in array argv
 char *argv[],      // Array of command-line argument strings
 char **envp )      // Array of environment variable strings
{
  int count;

  // Display each command-line argument.
  printf( "\nCommand-line arguments:\n" );
  for( count = 0; count < argc; count++ )
    printf( "  argv[%d]   %s\n", count, argv[count] );

  // Display each environment variable.
  printf( "\nEnvironment variables:\n" );
  while( *envp != NULL )
    printf( "  %s\n", *(envp++) );

  return;
}
*/