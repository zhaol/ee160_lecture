void create_sound_file(char filename[]) {
  char command[150];
  snprintf(command, sizeof(command), "ruby wavefile_creator.rb %s", filename);
  system(command);
}