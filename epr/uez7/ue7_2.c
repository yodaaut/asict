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
  printf("Die Zeichenkette \"%s\" wird codiert...\n", argv[1]);
  printf("Codierung ist nun um \"%.0f%\" kuerzer.\n",
      encode_runlength(argv[1]));
  printf("Codierung \"%s\"\n", argv[1]);
  printf("Die Zeichenkette \"%s\" wird nun decodiert...\n", argv[1]);
  decode_runlength(argv[1]);
  printf("Decodierung abgeschlossen: \"%s\"\n", argv[1]);
  return 0;
}


double encode_runlength(char *s){
  int i,j;
  int count=1;
  int pos=0;
  double length=0;

  for(i=0,j=1;*(s+i)!=0;i++,j++){
    if(*(s+i)==*(s+j)){
      count++;
    }else{
      if(count<2){
        *(s+pos)=*(s+i);
        pos++;
      }
      if(count>1){
        *(s+pos)=*(s+i);
        *(s+pos+1)=count+48;
        count=1;
        pos+=2;
      }
    }
  }

  length=100.-((100./i) * pos);
  *(s+pos)=0;
  return length;
}

int decode_runlength(char *s){
  int length=0;
  int i,repeat;

  for(i=0;*(s+i) !=0 ; i++){
    if((*(s+i)>49)&&*(s+i)<58){
      length+= *(s+i)-49;
    }else{
      length++;
    }
  }
  
  for(length--,i--;length>=0;i--){
    if((*(s+i)>49)&&*(s+i)<58){
      for(repeat= (*(s+i)-49);repeat>0;repeat--,length--){
        *(s+length)=*(s+i-1);
      }
    }else{
      *(s+length)=*(s+i);
      length--;
    }
  }
    
  
  return 0;
}
