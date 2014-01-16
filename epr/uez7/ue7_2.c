/*
 * Filename: ue7_2.c
 * Autor: s1330003007
 * Date: 01.2014
 *
 * Description: Run-length encoding
 */
 
#include <stdio.h>

double encode_runlength(char *s); //AAAABBBCCCCCCCCDEABBBBDDDDDDDD
int decode_runlength(char *s);    //A4B3C8DEAB4D8

int main(int argc, char *argv[]){
  if(argc!=2){
    printf("Kein oder zuviele Parameter angegeben!\n");
    return 1;
  }
  encode_runlength(argv[1]);
  printf("%s\n", argv[1]);
  return 0;
}


double encode_runlength(char *s){
  printf("%s\n", s);
  *s="bar";
  
  return 0.;
}

int decode_runlength(char *s){
  
  
  return 0;
}
