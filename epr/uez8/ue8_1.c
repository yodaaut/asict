/*
 * Filename: ue8_1.c
 * Autor: s1330003007
 * Date: 01.2014
 *
 * Description: Pangram
 */


#include <stdio.h>
#include <stdlib.h>

int check_pangramm(char *s);

int main(int argc, char *argv[]){
  
  if(argc!=2){
    printf("Zu wenig oder zu viele Parameter uebergeben!\n");
    return 1;
  }
  check_pangramm(argv[1]) ? printf("WAHR\n"): printf("FALSCH\n");
  return 0;
}

int check_pangramm(char *s){
  int i;
  int *letters;
  letters=(int*) calloc(26, sizeof(int));
  for(i=0;*(s+i) != 0; i++){
    if(*(s+i)>='A'&&*(s+i)<='Z'){
      *(s+i)+=32;
    }

  }
  for(i=0;*(s+i) != 0; i++){
    if(!(*(s+i)>='a'&&*(s+i)<='z')){
      continue;
    }
    *(letters+(*(s+i)-97))=1;

  }
  for(i=0;i<26;i++){
    if(*(letters+i)!=1){
      return 0;
    }
  }
  free(letters);

  return 1;
}

