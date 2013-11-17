#include <stdio.h>
#include "sound_macros.h"
#include "sound_helpers.h"
#include "sound_helpers.c"

// This program creates a file of audio data that represents a lower volume
int main() {
  char input_filename[MAX_FILENAME_LENGTH] = "original.data";
  char output_filename[MAX_FILENAME_LENGTH] = "reduced_volume.data";
  FILE *input_file_pointer = fopen(input_filename, "r");
  FILE *output_file_pointer = fopen(output_filename, "w");
  
  if ((input_file_pointer == NULL) || (output_file_pointer == NULL)) {
    printf("Error opening files\n");
  } else {
    printf("Successfully opened files\n");
    
    int sound_value;
    // read in audio data and write modified audio data to file
    while(fscanf(input_file_pointer, "%d", &sound_value) != EOF) {
      fprintf(output_file_pointer, "%d\n", (int)(sound_value * VOLUME_REDUCTION_FACTOR));
    }
    
    fclose(input_file_pointer);
    fclose(output_file_pointer);
  }
  
  create_sound_file(output_filename);
}