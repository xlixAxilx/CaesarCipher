A Caesar cipher is a simple cryptographic technique in which each letter in the original message is shifted to a different letter which is located at a uniform offset in alphabetical order.
For example, the message “Hello World!” and offset 3 would result in an encrypted message “Khoor Zruog!” 
The message “Dogs and Cats” and offset -2 (which is equivalent to an offset of 24) would result in an encrypted message “Bmeq ylb Ayrq”
Only alphabetic characters are shifted, and that the case of the letter is preserved.
The offset must be between -25 and 25
Command of use:

<pathname> <input_file> <output_file> <offset>

If the input file doesn’t exist, or if the output file cannot be created (perhaps because directories in its path do not exist, or because you don’t have permission to create files in the given location), or if the offset is out of range, the program prints an error message to standard error and immediately ends.
