#include <stdio.h>
#include "sound_macros.h"
#include "sound_helpers.h"
#include "sound_helpers.c"

// This program creates a file of audio data that represents a lower volume
int main() {
  char input_filename[MAX_FILENAME_LENGTH] = "original.data";
  char output_filename[MAX_FILENAME_LENGTH] = "reversed.data";
  FILE *input_file_pointer = fopen(input_filename, "r");
  FILE *output_file_pointer = fopen(output_filename, "w");
  int audio_data[MAX_AUDIO_DATA_SIZE];
  
  if ((input_file_pointer == NULL) || (output_file_pointer == NULL)) {
    printf("Error opening files\n");
  } else {
    printf("Successfully opened files\n");
    
    int counter = 1;
    // store audio data into an array
    while(fscanf(input_file_pointer, "%d", &audio_data[counter+ARRAY_OFFSET]) != EOF) {
      counter++;
    }
    
    int total_audio_datapoints = counter;  
    // write audo data from array into file in reverse order
    for(counter = total_audio_datapoints; counter >= 1; counter--) {
      fprintf(output_file_pointer, "%d\n", audio_data[counter+ARRAY_OFFSET]);
    }
    
    fclose(input_file_pointer);
    fclose(output_file_pointer);
  }
  
  create_sound_file(output_filename);
}