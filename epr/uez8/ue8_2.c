/*
 * Filename: ue8_2.c
 * Autor: s1330003007
 * Date: 01.2014
 *
 * Description: frequency analysis
 */


#include <stdio.h>
#include <stdlib.h>

void frequency(char *s);
void print(int *output);

int main(int argc, char *argv[]){
  if(argc<=1){
    printf("Zu wenig Parameter uebergeben!\n");
    return 1;
  }
  frequency(argv[1]);
  return 0;
}

void frequency(char *s){
  int i;
  int *letters;
  letters = (int*) calloc(26, sizeof(int));
  if(letters==NULL){
    printf("Es konnte nicht genug Speicherplatz bereitgestellt werden!\n");
    return;
  }

  for(i=0;*(s+i) != 0; i++){
    if(*(s+i)>='A'&&*(s+i)<='Z'){
      *(s+i)+=32;
    }
  }
  for(i=0;*(s+i) != 0; i++){
    if(!(*(s+i)>='a'&&*(s+i)<='z')){
      continue;
    }
    *(letters+(*(s+i)-97))+=1;
  }
  print(letters);
  free(letters);
}

void print(int *output){
 int i, count=0;
 for(i=0;i<26;i++){
   count+=*(output+i);
 }
 printf("Character count: %d (100%c)\n", count, 37);
 printf("Detailled Frequence Analysis:\n");
 printf("  : count : percentage\n");
 printf("======================\n");
 for(i=0;i<26;i++){
   printf("%c :%6d :\t %5.2f\n", i+97, *(output+i), 100./count*output[i]);
 }

}
