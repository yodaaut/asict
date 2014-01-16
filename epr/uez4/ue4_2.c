/*
 * Datei: ue4_2.c
 * Autor: s1330003007
 * Datum: 11.2013
 *
 * Beschreibung: Dieses Programm gibt eine Liste von n Primzahlen aus und
 * berechnet diese.
*/

#include <stdio.h>
#include <math.h>

int is_prime(unsigned int num);

int main(void){
	int input=100000;
	unsigned int checkprime=2;
	int primemax=1;
/*
//	Dieser Block wurde kommentiert, da die Aufgabe darin bestand nur die
//	ersten 1000 Primzahlen zu finden.
	printf("Wieviele Primzahlen sollen berechnet werden?\n");
	scanf("%d", &input);
*/
	for(;;){
		if (is_prime(checkprime)){	//Pruefung ob aktuelle Zahl eine Primzahl ist.
			printf("%10d. Primzahl: %10u\n", primemax, checkprime);
			if ( input == primemax ){
				break;	//Wurde die "n"te Primzahl gefunden, brich die Schleife ab.
			}
			primemax++;	//Erhoehe den Schleifendurchlauf um 1.
		}
		checkprime++;	//Erhoehe die aktuell zu testende Zahl um 1.
	}
	return 0;
}

int is_prime(unsigned int num){
	int factor;
	int hop;	//Variable hop dient zum Ueberspringen jeder durch 5 teilbaren Zahl.
	int sqnum=sqrt(num);	//Es muss nur bis kleiner Wurzel(num) gerechnet werden.
	if ( num < 2 ){	//kleinere Zahlen als 2 koennen keine Primzahl sein.
		return 0;
	}
	if ( num == 2 || num == 5 ){	//2 oder 5 sind bereits bewiesene Primzahlen.
		return 1;
	}
//	if ( num % 2 == 0 || num % 5 == 0 ){
	if ( (num & 1) == 0 || num % 5 == 0 ){ //Aus Performance gruenden eingefuegt.
		return 0;	//Wenn durch 2 oder 5 teilbar, kann es keine Primzahl sein.
	}
/*
	Variable factor hat den Startwert 3, da "< 3" bereits zum Funktionsende
	gefuehrt haette.
	Variable hop hat den Startwert 4, dadurch wird nach dem ersten Durchlauf
	der Schleife die Berechnung n modulo 5 ausgelassen und gleich mit 7
	durchgefuehrt. Anschliessend wird hop um 1 erhoeht.
	Die Schleife wird solange durchgefuehrt bis die Wurzel von der zu pruefenden
	Zahl erreicht wurde.
	factor wird um 2 erhoeht, damit nur mit ungeraden Zahlen gerechnet wird.
*/
	for ( factor=3, hop=4; factor <= sqnum; factor+=2, hop++ ){
		if ( num % factor == 0 ){ //Wenn das Ergebnis 0 ist, dann...
				return 0;	//...keine Primzahl.
		}
		if ( hop == 4 ){
			factor+=2;	//Ueberspringe jeden 4. Durchgang der Schleife.
			hop=0;
		}
	}
	return 1;	//Die Zahl, die hier ankommt muss eine Primzahl sein.
}
