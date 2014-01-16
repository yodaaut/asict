/*
 * Name: ue6_1.c
 * Autor: s1330003007
 * Datum: 01.2014
 *
 * Beschreibung: Dieses Programm prueft, ob es sich bei dem eingegebenen String
 * um ein Palindrom handelt.
 */

#include <stdio.h>
#define ARRSIZE(x) (sizeof(x)/sizeof(char))

int check_palindrom(char* pal);
void initialize_array(char* array, int length);

int main(void){
  char pal[256];
  char stop;
  int i=0;
  
  initialize_array(pal, ARRSIZE(pal));
  while(1){
    printf("Geben Sie ein moegliches Palindrom ein:\n");
    while(1){
      scanf("%c", &pal[i]);
      if(pal[i]=='\n'){
        printf("Das eingegebene Palindrom ist: ");
        check_palindrom(pal) ? printf("WAHR\n"): printf("FALSCH\n");
        break;
      }
      i++;
    }
    printf("Nochmal? Abbruch mit \"n\" oder \"N\".");
    scanf("%c", &stop);
    switch(stop){
      case 'n':
      case 'N':
        return 0;
      default:
        initialize_array(pal, ARRSIZE(pal));
        i=0;
        break;
    }
  }

  return 0;
}

int check_palindrom(char* pal){
  int count=0;
  int tcount=0;
  int i;
  char temp[256];
  initialize_array(temp, ARRSIZE(temp));
  /*
     Suche nach der Laenge des Strings und entfernen von Leerzeichen fuer
     Satzpalindrome.
  */
  while(1){
    if(pal[count]!=' '){
      temp[tcount]=pal[count];
      tcount++;
    }
    if(pal[count]=='\n'){
      initialize_array(pal, ARRSIZE(pal));
      pal=temp;
      count=tcount-1;
      break;
    }
    count++;
  }
  for(i=0;i<=count;i++, count--){
    /*
       Sind Grossbuchstaben dabei, werden diese fuer den Vergleich auf
       Kleinbuchstaben ersetzt.
       Danach wird das erste Zeichen mit dem letzten Zeichen verglichen.
    */
    if(pal[i]>='A'&& pal[i]<='Z'){
      pal[i]+=32;
    }
    if(pal[count-1]>='A'&& pal[count-1]<='Z'){
      pal[count-1]+=32;
    }
    if(pal[i]!=pal[count-1]){
        return 0;
    }
  }
  return 1;
}

void initialize_array(char* array, int length){
  int i;
  for(i=0;i<length;i++){
    array[i]=0;
  }
}
