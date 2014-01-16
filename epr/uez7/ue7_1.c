/*
 * Filename: ue7_1.c
 * Autor: s1330003007
 * Date: 01.2014
 *
 * Description: Playing around with pointer
 */


#include <stdio.h>

void f1(int input);
void f2(int *input);

int main(void){
  /*
   * Step 1:
   * Define an integer variable x.
   */
  int x=42;
  /*
   * Step 2:
   * Define a pointer variable p and let it point to variable x.
   */
  int *p=&x;
  /*
   * Step 3:
   * Change the value at the address of p.
   */
  *p=21;
  printf("Step  3: %d\n", *p);
  /*
   * Step 4:
   * Set a new value for x.
   */
  x=84;
  /*
   * Step 5:
   * Print the value at the address of p.
   */
  printf("Step  5: %d\n", *p);
  /* Der Wert hat sich geaendert. Begruendung: ....
   *
   */

  /*
   * Step 7:
   *
   */
  f1(*p);

  /*
   * Step 8:
   *
   */
  printf("Step  8: %d\n", *p);

  /*
   * Step 10:
   *
   */
  f2(p);

  /*
   * Step 11:
   *
   */
  printf("Step 11: %d\n", *p);
  /*
   * Begruendung
   */
  
  return 0;
}

  /*
   * Step 6:
   *
   */
void f1(int input){
  input=42;
  printf("Step  6: %d\n", input);
}

  /*
   * Step 9:
   *
   */
void f2(int *input){
  *input=21;
  printf("Step  9: %d\n", *input);
}
