#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int contador = 0;

    printf("Informe uma string: ");
    fgets(str, sizeof(str), stdin); // Ler a string com espaços

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            contador++;
        }
    }

    printf("A letra 'a' aparece %d vezes.\n", contador);
    return 0;
}

