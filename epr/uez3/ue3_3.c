/*
 * Datei: ue3_3.c
 * Autor: s1330003007
 * Datum: 11.2013
 *
 * Beschreibung: Dieses Programm simuliert einen Halbaddierer.
*/

#include <stdio.h>

#define LINE1 printf("=======================\n");
#define LINE2 printf("-----------------------\n");

int get_res(int x, int y);
int get_carry(int x, int y);


int main(void){
  printf("HALF-ADDER\n\n");
  LINE1;
  printf("| x | y | res | carry |\n");
  LINE1;
  printf("| %d | %d |  %d  |   %d   |\n", 0, 0, get_res(0,0), get_carry(0,0));
  LINE2;
  printf("| %d | %d |  %d  |   %d   |\n", 0, 1, get_res(0,1), get_carry(0,1));
  LINE2;
  printf("| %d | %d |  %d  |   %d   |\n", 1, 0, get_res(1,0), get_carry(1,0));
  LINE2;
  printf("| %d | %d |  %d  |   %d   |\n", 1, 1, get_res(1,1), get_carry(1,1));
  LINE2;

  return 0;
}



int get_res(int x, int y){
  return (x||y)&&!get_carry(x,y);
}

int get_carry(int x, int y){
  return x&&y;
}
