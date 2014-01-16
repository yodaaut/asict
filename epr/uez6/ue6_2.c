/*
 * Datei: ue6_2.c
 * Autor: 1330003007
 * Datum: 01.2014
 *
 * Beschreibung: Dieses Programm sortiert mehrere Felder und fuegt diese dann
 * sortiert zusammen.
 */

#define ARRSIZE(x) (sizeof(x)/sizeof(int))

#include <stdio.h>

void sort(int f1[], int f2[], int sortf[], int n, int m);
void print(int output[], int length);

int sort3(int* pInput, int length);

int main(void){
  int f1[]={1,5,37,45,123};
  int f2[]={3,7,12,18,78,354,1120};
  int f3[]={34,35,89,121,298,345};
  
  int f4[(ARRSIZE(f1)+ARRSIZE(f2))];
  int f5[(ARRSIZE(f1)+ARRSIZE(f3))];
  int f6[(ARRSIZE(f2)+ARRSIZE(f3))];
  

  printf("Feld f1: ");
  print(f1, ARRSIZE(f1));
  printf("Feld f2: ");
  print(f2, ARRSIZE(f2));
  printf("Feld f3: ");
  print(f3, ARRSIZE(f3));

  sort(f1, f2, f4, ARRSIZE(f1), ARRSIZE(f2));
  printf("f1 + f2 = ");
  print(f4, ARRSIZE(f4));

  sort(f1, f3, f5, ARRSIZE(f1), ARRSIZE(f3));
  printf("f1 + f3 = ");
  print(f5, ARRSIZE(f5));

  sort(f2, f3, f6, ARRSIZE(f2), ARRSIZE(f3));
  printf("f2 + f3 = ");
  print(f6, ARRSIZE(f6));

  return 0;
}

void sort(int f1[], int f2[], int sortf[], int n, int m){
  int i,h;
  int temp=0;
  for(i=0;i<n;i++){
    *(sortf+i)=*(f1+i);
  }
  for(;i<(n+m);i++){
    *(sortf+i)=*(f2+i-n);
  }
  for(h=1;h<(n+m);h++){
    for(i=0;i<(n+m-1);i++){
      if(*(sortf+i)>=*(sortf+1+i)){
        temp=*(sortf+i);
        *(sortf+i)=*(sortf+i+1);
        *(sortf+i+1)=temp;
      }
    }
  }

}

void print(int output[], int length){
  int i;
  for(i=0;i<length;i++){
    printf("%d ",*(output+i));
  }
  printf("\n");
}

