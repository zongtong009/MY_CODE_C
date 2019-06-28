#include <stdio.h>
int max() { return 0; }

int main() {
fuck:
    printf("Hello World!\n ");
    static int fucktion = 0;

    if (fucktion < 1000) {
        ++fucktion;
        goto fuck;
    }

    for (int i = 0; i < 10; i++) {
        ;
    }
    printf("Hello World!\n ");
    char s = getchar();
    printf("%c", s);
    getchar();

    return 0;
}
