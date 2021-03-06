#ifndef OPERAZIONI_H_
#define OPERAZIONI_H_

#include<time.h>
#include "lettura_scrittura.h"
#include "interfaccia.h"

void Generare_parola(codice *codice_generato);
void Valutazione_parola(codice *codice_generato, codice *codice_utente, val *valutazione);
int Simbolo_presente(int valore, codice *codice_generato, int posizione_elemento);
int Controllo_parole_uguali(val *valutazione, int lunghezza);

#endif /* OPERAZIONI_H_ */
