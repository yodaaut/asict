/*
 * Datei: ue3_2.c
 * Autor: s1330003007
 * Datum: 11.2013
 *
 * Beschreibung: Dieses Programm berechnet das Volumen, die Mantelflaeche und
 * die Oberflaeche eines Zylinders.
*/

#include <stdio.h>

#define PI 3.14159265
#define DIAMETER 12.42
#define HEIGHT 42.21
#define RADIUS (HEIGHT/2)

float get_surface(float radius);
float get_volume(float radius, float height);
float get_lateral_surface(float radius, float height);


int main(void){
  float volume,surface,lsurface;
  volume=get_volume(RADIUS, HEIGHT);
  lsurface=get_lateral_surface(RADIUS, HEIGHT);
  surface=get_surface(RADIUS);

  printf("Berechnung eines Zylinders:\n\n");

  printf("    %.2fcm\n", DIAMETER);
  printf("    |<-d->|\n");
  printf("     ____ \n");
  printf("    /    \\ _ _\n");
  printf("    \\____/  ^\n");
  printf("    |    |   |\n");
  printf("    |    |   |h=%.2fcm\n", HEIGHT );
  printf("    |    |   |\n");
  printf("    |    |  _v_\n");
  printf("    \\____/\n\n");

  printf("%-15s: %8.2fcm^3\n", "Volumen", volume);
  printf("%-15s: %8.2fcm^2\n", "Mantelflaeche", lsurface);
  printf("%-15s: %8.2fcm^2\n","Oberflaeche", surface);

  return 0;
}

/*Grundflaeche*/
float get_surface(float radius){
  float surface;
  surface=radius*radius*PI;
  return surface;
}

/*Volumen*/
float get_volume(float radius, float height){
  float volume;
  volume=get_surface(radius)*height;
  return volume;
}

/*Mantelflaeche*/
float get_lateral_surface(float radius, float height){
  float lsurface;
  lsurface=2*(get_volume(radius, height))/radius;
  return lsurface;
}

