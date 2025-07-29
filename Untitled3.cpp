#include <stdio.h>

void goodbye_message() {
    printf("goodbye to python programming\n");
}

int main() {
    // This main function is required for the C program to execute.
    // The question implies printing without *defining* a main,
    // which is not possible for a standalone C executable.
    // This is the standard way to call a function that prints.
    goodbye_message();
    return 0;
}
