#include <stdio.h>

int main() {
    char a, b, c;
    float c1, c2, c3;
    char type;
    float promien, wysokosc;
    a = 'a';
    b = 'b';
    c = 'c';
    printf("Czego objetosc chcesz obliczyc?\nStozek: a\nKula: b\nWalec: c\n");
    scanf("%c", &type);
    if (type == a) {
        printf("Podaj wysokosc twojego stozka");
        scanf("%f", &wysokosc);
        printf("Podaj promien podstawy twojego stozka ");
        scanf("%f", &promien);
        c1 = promien * promien;
        c2 = c1 * wysokosc;
        c3 = (c2 / 3.0) * (1.04);
        printf("Objetosc twojego stozka w wynosi %f", c3);
    } else if (type == b) {
        printf("Podaj promien twojej kuli\n");
        scanf("%f", &promien);
        c1 = promien * promien;
        c2 = c1 * promien;
        c3 = (4.19) * c2;
        printf("Objetosc twojej kuli w wynosi %f\n", c3);
    } else if (type == c) {
        printf("Podaj wysokosc twojego walca\n");
        scanf("%f", &wysokosc);
        printf("Podaj promien podstawy swojego walca\n");
        scanf("%f", &promien);
        c1 = promien * promien;
        c2 = (3.14) * c1;
        c3 = c2 * wysokosc;
        printf("Objetosc twojego walca wynosi %f\n\r", c3);
    }
    return 0;
}