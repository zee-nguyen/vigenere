#include <stdio.h>
#include <cs50.h>

int main(argc, argv[]) {
    if (argc !== 2 || (isalpha(argv[1]) === false)) {
        printf("./vigenere k\n");
        return 0;
    }
}