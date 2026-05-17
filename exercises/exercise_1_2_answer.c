// Exercise 1-2. Experiment to find out what happens when printf's argument
// string contains \c, where c is some character not listed above.
#include <stdio.h>

int main(void) {
  printf("hello, world\y");
  printf("hello, world\7");
  printf("hello, world\?");
  return 0;
}

// The Reference Manual (Appendix A, page 193 K&R) states:
// "If the character following the \ is not one of those specified, the behavior
// is undefined."
