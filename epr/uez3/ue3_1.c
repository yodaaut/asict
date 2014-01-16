/*
 * Datei: ue3_1.c
 * Autor: s1330003007
 * Datum: 11.2013
 *
 * Beschreibung: Dieses Programm errechnet den Umfang und die Flaeche eines
 * Kreise unter Verwendung von Makros.
*/

#define R r=23.45
#define SCALE 2*r*pi
#define AREA pi*r*r
#define PI pi=3.14159265359

int main(void){
  double R;
  double PI;
  printf("Umfang eines Kreises: %f\n", SCALE);
  printf("Flaeche eines Kreises: %f\n", AREA);

  return 0;
}
