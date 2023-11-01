#include <stdio.h>
#include <string.h>

int main() {
    char s[101], t[101];
    scanf("%s %s", s, t);
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] != t[i]) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}
