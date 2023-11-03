#include "caesar.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Main function that manages file I/O
 * and calls the Caesar cipher function.
 *
 * @param argc Number of command line arguments.
 * @param argv Array of command line arguments.
 * @return int Returns 0 on success and 1 on error.
 */
int main(int argc, char *argv[]) {
  if (argc != 4) {
    fprintf(stderr, "Proper Format: %s <input_file> <output_file> <offset>\n",
            argv[0]);
    return 1;
  }

  // Convert the offset from string to integer
  // And validate offset is within range
  int offset = atoi(argv[3]);
  if (offset < -25 || offset > 25) {
    fprintf(stderr, "Error: Offset is not between -25 and 25\n");
    return 1;
  }

  // Open the input file
  // And check if it was opened succesfully
  FILE *inFile = fopen(argv[1], "r");
  if (!inFile) {
    fprintf(stderr, "Error: Unable to open input file\n");
    return 1;
  }

  // Open the output file
  // And check if it was opened succesfully
  FILE *outFile = fopen(argv[2], "w");
  if (!outFile) {
    fclose(inFile);
    fprintf(stderr, "Error: Unable to create output file\n");
    return 1;
  }

  // Create an encoded output file
  // by shifting the characters with the offset
  for (char ch = fgetc(inFile); ch != EOF; ch = fgetc(inFile)) {
    fputc(caesar(ch, offset), outFile);
  }

  fclose(inFile);
  fclose(outFile);

  return 0;
}
