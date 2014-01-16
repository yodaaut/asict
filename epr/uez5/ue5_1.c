/*
 * Datei: ue5_1.c
 * Autor: 1330003007
 * Datum: 12.2013
 *
 * Beschreibung: Dieses Programm sortiert 3 Zahlen der Groesse nach. Also
 * Maximum zu Minimum.
 */

#define ARRSIZE(x) (sizeof(x)/sizeof(int))

#include <stdio.h>

int sort3(int* pInput, int length);

int main(void){
  int input[3];
  int i;
  int* pInput=input;
  printf("Bitte geben Sie 3 Zahlen an, "
         "um sie der Groesse nach zu sortieren.\n");
  for(i=0;i<ARRSIZE(input);i++){
    scanf("%d", &*(pInput+i));
  }
  /*
    Nachdem sizeof() bei Pointer nicht so funktioniert wie bei Arrays wird die
    Arraygroesse der Funktion mit uebergeben.
  */
  sort3(input,ARRSIZE(input));
  
  printf("\n\nIhre Zahlen in sortierter Reihenfolge:\n");
  for(i=0;i<ARRSIZE(input);i++){
    printf("%d\n", *(pInput+i));
  }
  

  return 0;
}

int sort3(int* pInput, int length){
  int i,h;
  int temp=0;
  /*
    Die erste Schleife garantiert, dass jede Stelle mit jeder Stelle getestet
    wird.
    Die zweite Schleife testet die jeweils rechts benachbarte Stelle.
    "length-1" daher, da die letzte Stelle keine benachbarte mehr hat.
    Wenn der linke Wert kleiner als der rechte ist, wird dieser in der
    temp-Variable zwischengespeichert und dann mit dem rechten Wert getauscht.
  */
  for(h=1;h<length;h++){
    for(i=0;i<(length-1);i++){
      if(pInput[i]<=pInput[1+i]){
        temp=pInput[i];
        pInput[i]=pInput[i+1];
        pInput[i+1]=temp;
      }
    }
  }
  return 0;
}
