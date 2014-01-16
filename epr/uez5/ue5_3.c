/*
 * Name: ue5_3.c
 * Autor: s1330003007
 * Datum: 01.2014
 *
 * Beschreibung: Dieses Programm rechnet die Fakultaet mit Hilfe der Rekursion
 * aus.
 */

#include <stdio.h>

int get_faculty(int faculty);

int main(void){
  int i;
  for(i=0;i<11;i++){
    printf("%2d! = %7d\n", i, get_faculty(i));
  }

  return 0;
}

int get_faculty(int faculty){
  if(faculty == 0){
    return 1;
  }
  return faculty * get_faculty(faculty-1);
}
