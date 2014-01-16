/*
 * Datei: ue4_3.c
 * Autor: s1330003007
 * Datum: 11.2013
 *
 * Beschreibung: Dieses Programm gibt fuer den Bereich von 1 bis 100000
 * jeweils die berechneten PI Naeherungswerte aus.
*/


#include <stdio.h>

int get_pi(int precision);

int main(void){
  printf("%-11s Naehrungswert\n","Bruchanzahl");
  printf("==============================\n");
  get_pi(100000);
  return 0;

}

int get_pi(int precision){
  int k;
  int listbreak=10;
  double result=0;
  /* In der Schleife wird nach gewissen Schrittweisen eine Ausgabe
   * Da die erste Zahl bei 0 beginnt und gleichzeitig auch fuer die Ausgabe
   * herangenommen wird, wird "k" zum teil kuenstlich erhoeht. Dies ist vorallem
   * bei den Schrittweiten von 1,2,3,...,10,20,...,100,1000,...,100000 wichtig.
   * Die Schleifenvariable wird allerdings von 0-99999 benoetigt.
   */

  for(k=0;k<precision;k++){
    if(k&1){
      result=result-(1./(2*k+1));
    }else{
      result=result+(1./(2*k+1));
    }
    /*Schrittweite 1*/
    if((k+1)<10){
      printf("%-11d %.15f\n", k+1,result*4);
      continue;
    }
    /*Schrittweite 10*/
    if(listbreak<100){
      if((k+1) % listbreak==0){
        printf("%-11d %.15f\n", k+1,result*4);
        listbreak+=10;
        continue;
      }
      continue;
    }
    /*Schrittweite Faktor 10*/
    if((k+1)%listbreak==0){
      printf("%-11d %.15f\n", k+1,result*4);
      listbreak*=10;
    }
  }
  return 0;
}
