#include <stdio.h>
#include <string.h>

int main() {
    char username[101];
    scanf("%s", username);

    int count = 0;
    for (char c = 'a'; c <= 'z'; c++) {
        if (strchr(username, c) != NULL) {
            count++;
        }
    }

    if (count % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}
