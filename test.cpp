#include <iostream>

int main() {
    int a, b, *p1, *p2, *p;
    scanf("%d%d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b) {
        p = p1;
        p1 = p2;  // p1指向b
        p2 = p;   // p2指向a
    }
    printf("a=%d,b=%d", a, b);
    printf("max=%d,min=%d", *p1, *p2);
    system("pause");
}
