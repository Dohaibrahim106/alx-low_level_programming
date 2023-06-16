#include <stdio.h>

int main() {
    char c = 'a'; // start with the letter a
    while (c <= 'z') { // loop until the letter z
        putchar(c); // print the current letter
        c++; // move to the next letter
    }
    putchar('\n'); // print a newline character at the end
    return 0;
}
