#include <stdio.h>
#include <unistd.h>
#include <string.h>

void print_welcome_no_printf() {
    // Method 1: Using puts
    puts("welcome to OS");

    // Method 2: Using write (low-level system call)
    const char *message = "welcome to OS\n";
    write(STDOUT_FILENO, message, strlen(message));
}

int main() {
    print_welcome_no_printf();
    return 0;
}
