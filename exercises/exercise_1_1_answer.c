// Exercise 1-1. Run the "hello, world" program on your system. Experiment with
// leaving out parts of the program, to see what error messages you get.

// In this example the newline character (\n) is missing. This leaves the cursor
// at the end of the line. #include <stdio.h>
//
// int main(void) {
//   printf("hello, world");
//   return 0;
// }

// In this example the semicolon is missing after printf(). Individual C
// statements are terminated by semicolons (page 10 K&R). The compiler should
// recognize that the semicolon is missing and print the appropriate message.
// #include <stdio.h>
//
// int main(void) {
//   printf("hello, world\n")
//   return 0;
// }

// In this example the double quote after the \n is mistyped as a single quote.
// The compiler should recognize this as an error and complain that a double
// quote is missing, that a right parenthesis is missing before a right brace,
// the string is too long, or that there is a newline character in a string.
// #include <stdio.h>
// int main(void) {
//   printf("hello, world\n');
//   return 0;
// }
