/*
 * Filename: ue8_1.c
 * Autor: s1330003007
 * Date: 01.2014
 *
 * Description: Pangram
 */


#include <stdio.h>

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
  int letters[26];
  for(i=0;*(s+i) != 0; i++){
    if(*(s+i)>='A'&&*(s+i)<='Z'){
      *(s+i)+=32;
    }

  }
  for(i=0;*(s+i) != 0; i++){
    if(*(s+i)==' '){
      continue;
    }
    *(letters+(*(s+i)-97))=1;

  }
  for(i=0;i<26;i++){
    if(*(letters+i)!=1){
      return 0;
    }
  }


  return 1;
}

