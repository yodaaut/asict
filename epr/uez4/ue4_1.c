/*
 * Datei: ue4_1.c
 * Autor: s1330003007
 * Datum: 11.2013
 *
 * Beschreibung: Dieses Programm berechnet anhand der Bit-Operationen
*/

#include <stdio.h>

int main(void){
  unsigned char var1=16, var2=23, var3=4, var5=2, var6=12, var7=3;
  printf("1. 16 & 23 = %hhd\n", var1&var2);
  printf("1. 16 & 23 = %hhd\n", 16&23);

  printf("2. 16 | 23 = %hhd\n", var1|var2);
  printf("2. 16 | 23 = %hhd\n", 16|23);

  printf("3. 23 << 4 = %hhd\n", var2<<var3);
  printf("3. 23 << 4 = %hhd\n", 23<<4);
  
  printf("4. 16 >> 2 = %hhd\n", var1>>var5);
  printf("4. 16 >> 2 = %hhd\n", 16>>2);
  
  printf("5. 23 << (23 >> 3) = %hhd\n", var2<<(var2>>var7));
  printf("5. 23 << (23 >> 3) = %hhd\n", 23<<(23>>3));
  
  printf("6. (23 >> 2) & (16 | (~12)) = %hhd\n", (var2>>var5)&(var1|(~var6)));
  printf("6. (23 >> 2) & (16 | (~12)) = %hhd\n", (23>>2)&(16|(~12)));
	return 0;
}

