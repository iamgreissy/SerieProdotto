# SerieProdotto
## Esercizio Serie prodotto
In questo programma, l'utente inserisce una stringa di cifre e la lunghezza n della sottostringa per cui si vuole trovare il prodotto più grande. Il programma usa due cicli for annidati per scorrere tutte le possibili sottostringhe di lunghezza n nella stringa di input, e calcola il prodotto di ogni sottostringa. Se il prodotto di una sottostringa è maggiore del massimo trovato finora, il programma aggiorna il valore del massimo. Infine, il programma stampa il prodotto più grande trovato e i numeri utilizzati per il prodotto.
```C
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; // definizione della stringa di input
    int n, i, j, massimo = 0; // definizione delle variabili per il prodotto
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
        if (curr > max) { // se il prodotto è maggiore del massimo trovato finora
            max = curr; // aggiorno il massimo
            massimo = i; // e salvo la posizione di inizio della sottostringa
        }
    }
    printf("Il prodotto piu' grande di una sottostringa di %d cifre e' %lld, usando i numeri:\n", n, max);
    for (i = massimo; i < massimo + n; i++) {
        printf("%c ", str[i]); // stampo i numeri usati per il prodotto
    }
    printf("\n");
    return 0;
}
```
