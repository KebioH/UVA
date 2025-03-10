#include <stdio.h>
#include <string.h>

int main() {
    char str[20]; //字串要多開一點 好奇怪
    int index = 0;
    while (fgets(str, sizeof(str), stdin)) {
        index++;
        str[strcspn(str, "\n")] = '\0';
        if (strcmp(str, "HELLO") == 0) {
            printf("Case %d: ENGLISH", index);
        } else if (strcmp(str, "HOLA") == 0) {
            printf("Case %d: SPANISH", index);
        } else if (strcmp(str, "HALLO") == 0) {
            printf("Case %d: GERMAN", index);
        } else if (strcmp(str, "BONJOUR") == 0) {
            printf("Case %d: FRENCH", index);
        } else if (strcmp(str, "CIAO") == 0) {
            printf("Case %d: ITALIAN", index);
        } else if (strcmp(str, "ZDRAVSTVUJTE") == 0) {
            printf("Case %d: RUSSIAN", index);
        } else if (str[0] == '#') {
            break;
        } else {
            printf("Case %d: UNKNOWN", index);
        }
        printf("\n");
    }
}
