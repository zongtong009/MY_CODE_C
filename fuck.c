#include <stdio.h>

int main()
{
    int fucktion = 0;
fuck:
    printf("Hello World!%d\n ", fucktion);
    if (fucktion < 1000) {
        ++fucktion;
        goto fuck;
    }
    printf("Hello World!\n ");
    char s = getchar();
    printf("%c", s);
    getchar();

    return 0;
}
