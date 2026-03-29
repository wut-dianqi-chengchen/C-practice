#include <stdio.h>
int main() {
    int n;
    char c;
    char k;
    scanf("%c", &k);
    n %= 26;
    while (1) {
        scanf("%c", &c);
        if (c == '\n') break;
        if (c >= 'a' && c <= 'z')
            c = (c - 'a' + n) % 26 + 'a';
        else if (c >= 'A' && c <= 'Z')
            c = (c - 'A' + n) % 26 + 'A';
        printf("%c", c);
    }
    return 0;
}
