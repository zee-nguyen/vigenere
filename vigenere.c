#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) {
    // check if user includes keyword
    if (argc != 2) {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    //check if keyword is alphabetic
    string k = argv[1];
    for (int a = 0, b = strlen(k); a < b; a++) {
        if (!isalpha(k[a])) {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }

    // if all is well, prompt user for plaintext
    printf("plaintext: ");
    string p = get_string();

    //encipher!
    if (p != NULL) {
        printf("ciphertext: ");
        int shift;
        for (int i = 0, n = strlen(p), j = 0, m = strlen(k); i < n && j < m; i++) {
            if (isalpha(p[i])) {
                if (isupper(p[i])) {
                    int textpos = p[i] - 'A';

                    if (isupper(k[j])) {
                        shift = k[j] - 'A';
                    } else {
                        shift = k[j] - 'a';
                    }

                    int cipherpos = (textpos + shift) % 26;
                    int c = cipherpos + 'A';
                    printf("%c", (char) c);
                    j = (j + 1) % m;
                }
                //if lowercase
                if (islower(p[i])) {
                    int textpos = p[i] - 'a';

                    if (isupper(k[j])) {
                        shift = k[j] - 'A';
                    } else {
                        shift = k[j] - 'a';
                    }

                    int cipherpos = (textpos + shift) % 26;
                    int c = cipherpos + 'a';
                    printf("%c", (char) c);
                    j = (j + 1) % m;
                }
            } else {
                printf("%c", p[i]);
            }
        }
    }
    printf("\n");
    return 0;
}