#include <stdio.h>
#include <stdlib.h>

int main() {
    int punteggio = 0;
    int numero_domanda = 0;
    int scelta;
    int risposta;
    int ultima_scelta;
    
    printf("Benvenuto! Questo è un quiz a punti. Rispondi correttamente a più domande possibili per incrementare il tuo punteggio!\n\nInserisci 1 per iniziare una nuova partita\nInserisci 0 per uscire\n");
    scanf("%d", &scelta);
    while(scelta > 1){
        printf("Scelta errata, inserisci il valore corretto\nInserisci 1 per una nuova partita\nInserisci 0 per uscire\n");
        scanf("%d",&scelta);
        
    }

    do {

    if(scelta == 0) {
        exit;}
    if(scelta == 1) {
        printf("/ / / LET'S GET IT ON! / / /\n"
        "\nInserisci il numero corrispondente alla risposta che ritieni corretta!\n");
        printf("\nDomanda 1: Di che colore era il cavallo bianco di Napoleone?\n\n 1) Blu\n 2) Bianco\n 3) Era un unicorno\n");
        scanf("%d", &risposta);

        if (risposta != 2) {
            printf("Risposta Errata\n");
        }
        else {
            printf("Corretto!\n");
            punteggio = punteggio +1;}
        
        printf("\nDomanda 2: Quanti MB ci sono in un GB?\n\n 1) 1024\n 2) 124\n 3) 100\n");
        scanf("%d", &risposta);
        if (risposta != 1){
            printf("Risposta Errata\n");
        }
        else {
            printf("Corretto!\n");
            punteggio = punteggio +1;}
        
        printf("\nDomanda 3: Quale di questi 3 pianeti è il più lontano dal sole?\n\n 1) Marte\n 2) Nettuno\n 3) Giove\n");
        scanf("%d", &risposta);
        if(risposta != 2){
            printf("Risposta Errata\n");
            
        }
        else {
            printf("Corretto!\n");
            punteggio = punteggio +1;}
        }
         
        printf("\nIl quiz è terminato! Hai totalizzato %d punti", punteggio);
        printf("\n\nVuoi giocare ancora?\n\nDigita 1 per iniziare una nuova partita\nDigita 0 per uscire\n");
        scanf("%d",&ultima_scelta);

        switch (ultima_scelta) {
                case 0:
                printf ("K bye");
                break;
                case 1:
                printf ("Ok! Ricominciamo\n\n");
                break;
                }

        if (ultima_scelta > 1) {
                printf ("Non sai leggere, pazienza. Adieu");
        }

        }

    while(ultima_scelta == 1);

}    
