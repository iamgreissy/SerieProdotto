#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; 
    int n, i, j, massimo = 0;
    long long max = 0, curr = 1; 
    printf("Inserisci la stringa di cifre: ");
    scanf("%s", str);
    printf("Inserisci la lunghezza della sottostringa: ");
    scanf("%d", &n);
    for (i = 0; i <= strlen(str) - n; i++) {
        curr = 1;
        for (j = 0; j < n; j++) {
            curr *= str[i+j] - '0'; // calcolo del prodotto della sottostringa
        }
        if (curr > max) { 
            max = curr; 
            massimo = i; // salvo la posizione di inizio della sottostringa
        }
    }
    printf("Il prodotto piu' grande di una sottostringa di %d cifre e' %lld, usando i numeri:\n", n, max);
    for (i = massimo; i < massimo + n; i++) {
        printf("%c ", str[i]); // stampo i numeri usati per il prodotto
    }
    printf("\n");
    return 0;
}
