#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    srand(time(0));
    const char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$^&*<>?";
    const int num_chars = sizeof(characters) - 1; 
    char hidden_str[] = "retroCTF{u_4r3_4EHU32_gR3p_m45t3R}";
    int n = strlen(hidden_str);
    int pos = rand() % (1000000 - n); // to have a random pos from 0 to 999,900

    for (int i = 0; i < 1000000; i++) {
        char c;
        if (i == pos) {
            for (int j = 0; j < n; j++) {
                c = hidden_str[j];
                putchar(c);
            }
            i += n-1;
        } else {
            c = characters[rand() % num_chars];
            putchar(c);
        }
    }
    return 0;
}
