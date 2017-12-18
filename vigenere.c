#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(argc, argv[]) {
    // check condition of user's input
    if (argc !== 2 || (isalpha(argv[1]) === false)) {
        printf("./vigenere k\n");
        return 1;
    }

    string k = argv[1];
    // prompt user for plaintext
    printf("plaintext: ");
    string p = get_string();

    if(p != NULL) {
        for(var i = 0, n = strlen(p); i < n; i++) {
            // check if p[i] is alphabetic
            //if not, print unchanged
            if (isalpha(p[i]) != true) {
                printf("%c", p[i]);
            } else {
                //encipher!
            }

        }
    }


    printf("\n");
    return 0;
}