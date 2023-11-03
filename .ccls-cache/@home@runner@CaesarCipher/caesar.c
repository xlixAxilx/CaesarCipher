#include "caesar.h"

/**
 * @brief Shifts a character using the Caesar cipher.
 *
 * @param s Character to be shifted.
 * @param n Offset for the Caesar cipher.
 * @return char The shifted character.
 */
char caesar(char s, int n) {
  if (s >= 'A' && s <= 'Z') {
    return 'A' + (s - 'A' + n % 26 + 26) % 26;
  } else if (s >= 'a' && s <= 'z') {
    return 'a' + (s - 'a' + n % 26 + 26) % 26;
  } else {
    return s;
  }
}
