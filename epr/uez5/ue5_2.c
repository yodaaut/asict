/*
 * Name: ue5_2.c
 * Autor: s1330003007
 * Datum: 12.2013
 *
 * Beschreibung: Koenig Dodon laesst einige seiner 100 Gefangenen frei, aber
 * welche? Im ersten Durchgang oeffnet er alle Zellen, im zweiten jede 2. Zelle,
 * im dritten Durchgang jede 3. Zelle usw.
 */

#include <stdio.h>
#include <math.h>

int main(void){
  int i;

  printf("Koenig Dodon's Begnadigung sieht wie folgt aus:\n");
  for(i=1;i<=sqrt(100);i++){
    printf("Gefangener aus Zelle %d kommt frei!\n", i*i);
  }

  return 0;
}
