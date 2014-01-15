/*
 * Filename: ue7_1.c
 * Autor: yodaaut
 * Date: 01.2014
 *
 * Description: Playing around with pointer
 */


#include <stdio.h>

//main
int main(void){
  /*
   * Step 1:
   * Define an integer variable x
   */
  int x=42;
  /*
   * Step 2:
   * Define a pointer variable p and let it point to x
   */
  int *p=x;
  /*
   * Step 3:
   *
   */
  p=21;
  printf("%d", *p);
  
  return 0;
}
