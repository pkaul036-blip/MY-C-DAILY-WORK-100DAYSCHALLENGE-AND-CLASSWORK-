#include <stdio.h>

int countWords(const char* s) {
    int inWord = 0, words = 0;
    while (*s) {
        if (*s != ' ' && *s != '\t' && *s != '\n' && *s != '\r' && *s != '\f' && *s != '\v') {
            if (!inWord) { inWord = 1; words++; }
        } else {
            inWord = 0;
        }
        ++s;
    }
    return words;
}

int main(void) {
    char s[1001];
    if (fgets(s, sizeof(s), stdin)) {
        for (char* p = s; *p; ++p) {
            if (*p == '\n') { *p = '\0'; break; }
        }
        printf("%d\n", countWords(s));
    }
    return 0;
}
