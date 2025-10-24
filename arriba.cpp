#include <winbgim.h>
#include "funciones.h"
void arriba_f1(int x , int y , int ancho , int alto){
int azul, s_azul, rosa, gris, negro;
color(azul, s_azul, rosa, gris, negro);
//callebo

	pixel_largo(x, y ,ancho*9, alto, negro);
    pixel_largo(x+(ancho*1),y+ancho,ancho,ancho,negro);
    pixel_largo(x+(ancho*-1),y+ancho,ancho,ancho,negro);
pixel_largo(x+(ancho*-2), y - ancho, ancho + (ancho*12), alto,negro);
pixel_largo(x+(ancho*-3), y - (ancho*2), ancho + (ancho*14), alto, negro);
pixel_largo(x+(ancho*-3), y - (ancho*3), ancho + (ancho*14), alto, negro);
pixel_largo(x+(ancho*-4), y - (ancho*4), ancho + (ancho*16), alto, negro);
pixel_largo(x+(ancho*-4), y - (ancho*5), ancho + (ancho*16), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*6), ancho + (ancho*18), alto, negro);
pixel_largo(x + ancho, y - (ancho*7),(ancho*2), alto, negro);
pixel_largo(x + (ancho*2), y - (ancho*8), ancho , alto, negro);
pixel_largo(x + (ancho*4), y - (ancho*7),(ancho*9), alto, negro);
pixel_largo(x + (ancho*5), y - (ancho*7),(ancho*9), alto, negro);
pixel_largo(x + (ancho*5), y - (ancho*8),(ancho*9), alto, negro);
pixel_largo(x+(ancho*7), y - (ancho*9),(ancho*7), alto,negro);
pixel_largo(x+(ancho*-5), y - (ancho*7), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*8), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*9), ancho + (ancho*3), alto, negro);


pixel_largo(x+(ancho*-5), y - (ancho*10), ancho + (ancho*3), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*11), ancho + (ancho*3), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*12), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*13), ancho + (ancho*5), alto, negro);
pixel_largo(x+(ancho*-4), y - (ancho*14), ancho + (ancho*7), alto, negro);
pixel_largo(x+(ancho*-4), y - (ancho*15), ancho , alto, negro);
pixel_largo(x+(ancho*-2), y - (ancho*15), ancho + (ancho*3), alto, negro);
pixel_largo(x+(ancho*-2), y - (ancho*16), ancho + (ancho*2), alto, negro);
pixel_largo(x+(ancho*3), y - (ancho*15), ancho + (ancho*3), alto, negro);

pixel_largo(x+(ancho*10), y - (ancho*10), ancho + (ancho*3), alto, negro);
pixel_largo(x+(ancho*10), y - (ancho*11), ancho + (ancho*3), alto, negro);
pixel_largo(x+(ancho*9), y - (ancho*12), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*8), y - (ancho*13), ancho + (ancho*5), alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*14), (ancho*7), alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*15), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*12), y - (ancho*15), ancho, alto, negro);

pixel_largo(x+(ancho*-1), y - (ancho*15), ancho*11, alto*9, negro);
pixel_largo(x+(ancho*-5), y - (ancho*14), ancho, alto, negro);
pixel_largo(x+(ancho*-2), y - (ancho*16), ancho*13, alto, negro);

// hombrera xdd
pixel_largo(x+(ancho*-3), y - (ancho*17), ancho*14, alto, negro);
pixel_largo(x+(ancho*-4), y - (ancho*18), ancho*16, alto, negro);
pixel_largo(x+(ancho*-3), y - (ancho*19), ancho*15, alto, negro);
// torsou
pixel_largo(x+(ancho*-3), y - (ancho*21), ancho*16, alto*2, negro);
pixel_largo(x+(ancho*-4), y - (ancho*23), ancho*18, alto*2, negro);
// manou
pixel_largo(x+(ancho*-5), y - (ancho*25), ancho*18, alto*2, negro);
pixel_largo(x+(ancho*-4), y - (ancho*27), ancho*16, alto*2, negro);
//manou izq
pixel_largo(x+(ancho*-3), y - (ancho*28), ancho*6, alto, negro);
// manoou der 
pixel_largo(x+(ancho*4), y - (ancho*28), ancho*7, alto, negro);

//pierna izq ton
pixel_largo(x, y - (ancho*31), ancho*3, alto*3, negro);
// pierna der tob
pixel_largo(x+(ancho*4), y - (ancho*31), ancho*4, alto*3, negro);

// boota izq
pixel_largo(x+(ancho*-1), y - (ancho*33), ancho, alto*2, negro);
pixel_largo(x+(ancho*-2), y - (ancho*35), ancho, alto*2, negro);
pixel_largo(x+(ancho*-2), y - (ancho*35), ancho*6, alto, negro);
pixel_largo(x+(ancho*3), y - (ancho*35), ancho, alto*4, negro);
// bota der 
pixel_largo(x+(ancho*5), y - (ancho*35), ancho*5, alto, negro);
pixel_largo(x+(ancho*9), y - (ancho*35), ancho, alto*2, negro);
pixel_largo(x+(ancho*8), y - (ancho*33), ancho, alto*2, negro);
// color hombrera
pixel_largo(x+(ancho*-3), y - (ancho*18), ancho*2, alto,gris);
pixel_largo(x+(ancho*-2), y - (ancho*17), ancho*2, alto,gris);
pixel_largo(x+(ancho*-1), y - (ancho*16), ancho*2, alto,gris);
//shadow hombrera
pixel_largo(x+(ancho*1), y - (ancho*16), ancho, alto*2,s_azul);
pixel_largo(x+(ancho*2), y - (ancho*17), ancho*8, alto,s_azul);
pixel_largo(x+(ancho*3), y - (ancho*16), ancho*5, alto,s_azul);
pixel_largo(x+(ancho*6), y - (ancho*15), ancho, alto,s_azul);
pixel_largo(x+(ancho*7), y - (ancho*18), ancho*4, alto,s_azul);
pixel_largo(x+(ancho*9), y - (ancho*19), ancho*2, alto,s_azul);
pixel_largo(x+(ancho*10), y - (ancho*20), ancho, alto,s_azul);
pixel_largo(x+(ancho*11), y - (ancho*21), ancho, alto*2,s_azul);
pixel_largo(x+(ancho*12), y - (ancho*22), ancho, alto,s_azul);
// color pechera
pixel_largo(x+(ancho), y - (ancho*22), ancho*6, alto*4,gris);
pixel_largo(x, y - (ancho*20), ancho, alto,gris);
pixel_largo(x+(ancho*7), y - (ancho*20), ancho, alto,gris);



//sombra pecho
pixel_largo(x+(ancho*7), y - (ancho*21), ancho, alto,s_azul);
pixel_largo(x, y - (ancho*21), ancho, alto,s_azul);
pixel_largo(x, y - (ancho*19), ancho, alto,s_azul);
pixel_largo(x+(ancho*2), y - (ancho*22), ancho*4, alto,s_azul);
pixel_largo(x+(ancho*-3), y - (ancho*22), ancho, alto,s_azul);
// color guante izq
pixel_largo(x+(ancho*-4), y - (ancho*25), ancho*3, alto*2,gris);
 pixel_largo(x+(ancho*-3), y - (ancho*27), ancho*2, alto*4,gris);
// sombra guante izq
pixel_largo(x+(ancho*-3), y - (ancho*26), ancho*3, alto,s_azul);
pixel_largo(x+(ancho*-1), y - (ancho*25), ancho, alto,s_azul);
pixel_largo(x+(ancho*-2), y - (ancho*24), ancho, alto,s_azul);
pixel_largo(x+(ancho*-4), y - (ancho*24), ancho, alto,s_azul);
// color guante der
pixel_largo(x+(ancho*9), y - (ancho*27), ancho*2, alto*3,gris);
pixel_largo(x+(ancho*10), y - (ancho*25), ancho*2, alto*2,gris);
//sombra guante der
pixel_largo(x+(ancho*11), y - (ancho*24), ancho, alto,s_azul);
pixel_largo(x+(ancho*8), y - (ancho*25), ancho, alto,s_azul);
pixel_largo(x+(ancho*8), y - (ancho*26), ancho*3, alto,s_azul);


//color boot izq

pixel_largo(x, y - (ancho*34), ancho*3, alto*3,gris);
//sombra boot izq
pixel_largo(x+(ancho*-1), y - (ancho*34), ancho, alto,s_azul);
pixel_largo(x+(ancho*2), y - (ancho*34), ancho, alto,s_azul);
// color boot der 
pixel_largo(x+(ancho*6), y - (ancho*34), ancho*2, alto*3,gris);
// sombra boota der
pixel_largo(x+(ancho*4), y - (ancho*35), ancho, alto*4,s_azul);
pixel_largo(x+(ancho*5), y - (ancho*34), ancho, alto*3,s_azul);
pixel_largo(x+(ancho*6), y - (ancho*34), ancho, alto,s_azul);
pixel_largo(x+(ancho*8), y - (ancho*34), ancho, alto,s_azul);
}


void arriba_f2(int x , int y , int ancho , int alto){
int azul, s_azul, rosa, gris, negro;
color(azul, s_azul, rosa, gris, negro);



//color bota izq
pixel_largo(x, y - (ancho*34), ancho*3, alto*3, gris);

//sombra bota izq
pixel_largo(x+(ancho*-1), y - (ancho*34), ancho*2, alto,s_azul);
pixel_largo(x+(ancho*1), y - (ancho*31), ancho*2, alto,s_azul);
pixel_largo(x+(ancho*3), y - (ancho*35), ancho, alto*4,s_azul);
// color bota der
pixel_largo(x+(ancho*6), y - (ancho*33), ancho*2, alto*3,gris);
//sombra bota der
pixel_largo(x+(ancho*5), y - (ancho*33), ancho*2, alto,s_azul);
pixel_largo(x+(ancho*5), y - (ancho*33), ancho, alto*2,s_azul);
pixel_largo(x+(ancho*8), y - (ancho*32), ancho, alto,s_azul);
//cabello


	pixel_largo(x, y ,ancho*9, alto, negro);
    pixel_largo(x+(ancho*1),y+ancho,ancho,ancho,negro);
    pixel_largo(x+(ancho*-1),y+ancho,ancho,ancho,negro);
pixel_largo(x+(ancho*-2), y - ancho, ancho + (ancho*12), alto,negro);
pixel_largo(x+(ancho*-3), y - (ancho*2), ancho + (ancho*14), alto, negro);
pixel_largo(x+(ancho*-3), y - (ancho*3), ancho + (ancho*14), alto, negro);
pixel_largo(x+(ancho*-4), y - (ancho*4), ancho + (ancho*16), alto, negro);
pixel_largo(x+(ancho*-4), y - (ancho*5), ancho + (ancho*16), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*6), ancho + (ancho*18), alto, negro);
pixel_largo(x + ancho, y - (ancho*7),(ancho*2), alto, negro);
pixel_largo(x + (ancho*2), y - (ancho*8), ancho , alto, negro);
pixel_largo(x + (ancho*4), y - (ancho*7),(ancho*9), alto, negro);
pixel_largo(x + (ancho*5), y - (ancho*7),(ancho*9), alto, negro);
pixel_largo(x + (ancho*5), y - (ancho*8),(ancho*9), alto, negro);
pixel_largo(x+(ancho*7), y - (ancho*9),(ancho*7), alto,negro);
pixel_largo(x+(ancho*-5), y - (ancho*7), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*8), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*9), ancho + (ancho*3), alto, negro);


pixel_largo(x+(ancho*-5), y - (ancho*10), ancho + (ancho*3), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*11), ancho + (ancho*3), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*12), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*13), ancho + (ancho*5), alto, negro);
pixel_largo(x+(ancho*-4), y - (ancho*14), ancho + (ancho*7), alto, negro);
pixel_largo(x+(ancho*-4), y - (ancho*15), ancho , alto, negro);
pixel_largo(x+(ancho*-2), y - (ancho*15), ancho + (ancho*3), alto, negro);
pixel_largo(x+(ancho*-2), y - (ancho*16), ancho + (ancho*2), alto, negro);
pixel_largo(x+(ancho*3), y - (ancho*15), ancho + (ancho*3), alto, negro);

pixel_largo(x+(ancho*10), y - (ancho*10), ancho + (ancho*3), alto, negro);
pixel_largo(x+(ancho*10), y - (ancho*11), ancho + (ancho*3), alto, negro);
pixel_largo(x+(ancho*9), y - (ancho*12), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*8), y - (ancho*13), ancho + (ancho*5), alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*14), (ancho*7), alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*15), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*12), y - (ancho*15), ancho, alto, negro);

pixel_largo(x+(ancho*-1), y - (ancho*15), ancho*11, alto*9, negro);
pixel_largo(x+(ancho*-5), y - (ancho*14), ancho, alto, negro);
pixel_largo(x+(ancho*-2), y - (ancho*16), ancho*13, alto, negro);
// hombrera
pixel_largo(x+(ancho*-2), y - (ancho*16), ancho*13, alto, negro);
pixel_largo(x+(ancho*-3), y - (ancho*17), ancho*14, alto, negro);
pixel_largo(x+(ancho*-4), y - (ancho*18), ancho*16, alto, negro);
pixel_largo(x+(ancho*-3), y - (ancho*20), ancho*16, alto*2, negro);
pixel_largo(x+(ancho*-3), y - (ancho*23), ancho*17, alto*3, negro);
pixel_largo(x+(ancho*-4), y - (ancho*25), ancho*16, alto*3, negro);

pixel_largo(x+(ancho*-3), y - (ancho*27), ancho*14, alto*2, negro);
// piernauw
pixel_largo(x+(ancho*-2), y - (ancho*28), ancho*6, alto, negro);
pixel_largo(x+(ancho*5), y - (ancho*28), ancho*5, alto, negro);

pixel_largo(x, y - (ancho*30), ancho*4, alto*2, negro);
pixel_largo(x+(ancho*5), y - (ancho*30), ancho*3, alto*2, negro);
// piernaw izquierda
pixel_largo(x, y - (ancho*31), ancho, alto, negro);
pixel_largo(x+(ancho*-1), y - (ancho*33), ancho, alto*2, negro);
pixel_largo(x+(ancho*-2), y - (ancho*35), ancho, alto*2, negro);
pixel_largo(x+(ancho*-2), y - (ancho*35), ancho*5, alto, negro);
pixel_largo(x+(ancho*4), y - (ancho*35), ancho, alto*5, negro);
pixel_largo(x+(ancho*3), y - (ancho*31), ancho, alto, negro);
// piernaw der 
pixel_largo(x+(ancho*5), y - (ancho*34), ancho*3, alto, negro);
pixel_largo(x+(ancho*5), y - (ancho*31), ancho*2, alto, negro);
pixel_largo(x+(ancho*8), y - (ancho*31), ancho, alto, negro);
pixel_largo(x+(ancho*9), y - (ancho*32), ancho, alto, negro);
pixel_largo(x+(ancho*8), y - (ancho*33), ancho*2, alto, negro);


//guante  sombra__izquierda
pixel_largo(x+(ancho*-2), y - (ancho*27), ancho*2, alto*3,s_azul);
pixel_largo(x+(ancho*-3), y - (ancho*25), ancho*2, alto*2,s_azul);
//color guante izquierda
pixel_largo(x+(ancho*-3), y - (ancho*24), ancho, alto,gris);




//sombra guante der
pixel_largo(x+(ancho*7), y - (ancho*27), ancho*3, alto*2,s_azul);
pixel_largo(x+(ancho*8), y - (ancho*25), ancho*3, alto*2,s_azul);
pixel_largo(x+(ancho*8), y - (ancho*25), ancho, alto*3,s_azul);

//color guante der
pixel_largo(x+(ancho*9), y - (ancho*22), ancho, alto,azul);
pixel_largo(x+(ancho*8), y - (ancho*24), ancho*2, alto,gris);
pixel_largo(x+(ancho*9), y - (ancho*25), ancho*2, alto,gris);
pixel_largo(x+(ancho*8), y - (ancho*27), ancho*2, alto,gris);
//color pecho

pixel_largo(x+(ancho*1), y - (ancho*22), ancho*6, alto*3,gris);

pixel_largo(x+(ancho*1), y - (ancho*19), ancho*4, alto,gris);

pixel_largo(x, y - (ancho*20), ancho*8, alto,gris);
pixel_largo(x, y - (ancho*21), ancho, alto,s_azul);
pixel_largo(x, y - (ancho*19), ancho, alto,s_azul);
pixel_largo(x+(ancho*5), y - (ancho*19), ancho, alto,s_azul);
pixel_largo(x+(ancho*7), y - (ancho*21), ancho, alto,s_azul);
pixel_largo(x+(ancho*2), y - (ancho*22), ancho*4, alto,s_azul);
// color hombrera 
pixel_largo(x+(ancho*-3), y - (ancho*18), ancho*2, alto,gris);
pixel_largo(x+(ancho*-2), y - (ancho*17), ancho*2, alto,gris);
pixel_largo(x+(ancho*-1), y - (ancho*16), ancho*2, alto,gris);

// sombra hombrera
pixel_largo(x+(ancho*6), y - (ancho*15), ancho, alto,s_azul);
pixel_largo(x+(ancho*1), y - (ancho*16), ancho, alto*2,s_azul);
pixel_largo(x+(ancho*3), y - (ancho*16), ancho*5, alto,s_azul);
pixel_largo(x+(ancho*2), y - (ancho*17), ancho*8, alto,s_azul);
pixel_largo(x+(ancho*6), y - (ancho*18), ancho*5, alto,s_azul);
pixel_largo(x+(ancho*8), y - (ancho*19), ancho*4, alto,s_azul);
pixel_largo(x+(ancho*9), y - (ancho*20), ancho*3, alto,s_azul);
pixel_largo(x+(ancho*10), y - (ancho*21), ancho*3, alto,s_azul);
pixel_largo(x+(ancho*12), y - (ancho*22), ancho, alto,s_azul);
}


void arriba_f3(int x , int y , int ancho , int alto){
int azul, s_azul, rosa, gris, negro;
color(azul, s_azul, rosa, gris, negro);
// color bota izq
pixel_largo(x, y - (ancho*33), ancho*2, alto*3, gris);
// sombra bota izq
pixel_largo(x+(ancho*-1), y - (ancho*32), ancho, alto,s_azul);
pixel_largo(x+(ancho*2), y - (ancho*33), ancho, alto*2,s_azul);
pixel_largo(x+(ancho*1), y - (ancho*33), ancho, alto,s_azul);
// boot der col
pixel_largo(x+(ancho*5), y - (ancho*34), ancho*3, alto*3,gris);
//sombra boota
pixel_largo(x+(ancho*4), y - (ancho*35), ancho, alto*4,s_azul);
pixel_largo(x+(ancho*7), y - (ancho*34), ancho*2, alto,s_azul);
pixel_largo(x+(ancho*5), y - (ancho*31), ancho*2, alto,s_azul);

//cabello
	pixel_largo(x, y ,ancho*9, alto, negro);
    pixel_largo(x+(ancho*1),y+ancho,ancho,ancho,negro);
    pixel_largo(x+(ancho*-1),y+ancho,ancho,ancho,negro);
pixel_largo(x+(ancho*-2), y - ancho, ancho + (ancho*12), alto,negro);
pixel_largo(x+(ancho*-3), y - (ancho*2), ancho + (ancho*14), alto, negro);
pixel_largo(x+(ancho*-3), y - (ancho*3), ancho + (ancho*14), alto, negro);
pixel_largo(x+(ancho*-4), y - (ancho*4), ancho + (ancho*16), alto, negro);
pixel_largo(x+(ancho*-4), y - (ancho*5), ancho + (ancho*16), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*6), ancho + (ancho*18), alto, negro);
pixel_largo(x + ancho, y - (ancho*7),(ancho*2), alto, negro);
pixel_largo(x + (ancho*2), y - (ancho*8), ancho , alto, negro);
pixel_largo(x + (ancho*4), y - (ancho*7),(ancho*9), alto, negro);
pixel_largo(x + (ancho*5), y - (ancho*7),(ancho*9), alto, negro);
pixel_largo(x + (ancho*5), y - (ancho*8),(ancho*9), alto, negro);
pixel_largo(x+(ancho*7), y - (ancho*9),(ancho*7), alto,negro);
pixel_largo(x+(ancho*-5), y - (ancho*7), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*8), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*9), ancho + (ancho*3), alto, negro);


pixel_largo(x+(ancho*-5), y - (ancho*10), ancho + (ancho*3), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*11), ancho + (ancho*3), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*12), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*-5), y - (ancho*13), ancho + (ancho*5), alto, negro);
pixel_largo(x+(ancho*-4), y - (ancho*14), ancho + (ancho*7), alto, negro);
pixel_largo(x+(ancho*-4), y - (ancho*15), ancho , alto, negro);
pixel_largo(x+(ancho*-2), y - (ancho*15), ancho + (ancho*3), alto, negro);
pixel_largo(x+(ancho*-2), y - (ancho*16), ancho + (ancho*2), alto, negro);
pixel_largo(x+(ancho*3), y - (ancho*15), ancho + (ancho*3), alto, negro);

pixel_largo(x+(ancho*10), y - (ancho*10), ancho + (ancho*3), alto, negro);
pixel_largo(x+(ancho*10), y - (ancho*11), ancho + (ancho*3), alto, negro);
pixel_largo(x+(ancho*9), y - (ancho*12), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*8), y - (ancho*13), ancho + (ancho*5), alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*14), (ancho*7), alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*15), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*12), y - (ancho*15), ancho, alto, negro);

pixel_largo(x+(ancho*-1), y - (ancho*15), ancho*11, alto*9, negro);
pixel_largo(x+(ancho*-5), y - (ancho*14), ancho, alto, negro);
pixel_largo(x+(ancho*-2), y - (ancho*16), ancho*13, alto, negro);
//hombrera y manou

pixel_largo(x+(ancho*-3), y - (ancho*17), ancho*14, alto, negro);
pixel_largo(x+(ancho*-4), y - (ancho*18), ancho*16, alto, negro);
pixel_largo(x+(ancho*-3), y - (ancho*19), ancho*15, alto, negro);
pixel_largo(x+(ancho*-3), y - (ancho*21), ancho*16, alto*2, negro);
pixel_largo(x+(ancho*-4), y - (ancho*23), ancho*18, alto*2, negro);
pixel_largo(x+(ancho*-4), y - (ancho*25), ancho*16, alto*2, negro);
pixel_largo(x+(ancho*-3), y - (ancho*27), ancho*14, alto*2, negro);
pixel_largo(x+(ancho*-2), y - (ancho*28), ancho*5, alto, negro);
pixel_largo(x+(ancho*4), y - (ancho*28), ancho*6, alto, negro);
// piernas
pixel_largo(x, y - (ancho*30), ancho*3, alto*2, negro);
pixel_largo(x+(ancho*4), y - (ancho*30), ancho*4, alto*2, negro);


// color pechera
pixel_largo(x+(ancho), y - (ancho*22), ancho*6, alto*4,gris);
pixel_largo(x, y - (ancho*20), ancho, alto,gris);
pixel_largo(x+(ancho*7), y - (ancho*20), ancho, alto,gris);



//sombra pecho
pixel_largo(x+(ancho*7), y - (ancho*21), ancho, alto,s_azul);
pixel_largo(x, y - (ancho*21), ancho, alto,s_azul);
pixel_largo(x, y - (ancho*19), ancho, alto,s_azul);
pixel_largo(x+(ancho*2), y - (ancho*22), ancho*4, alto,s_azul);

// bota der
pixel_largo(x+(ancho*-1), y - (ancho*31), ancho, alto, negro);
pixel_largo(x+(ancho*-2), y - (ancho*33), ancho, alto*2, negro);
pixel_largo(x+(ancho*-2), y - (ancho*33), ancho*2, alto, negro);
pixel_largo(x, y - (ancho*34), ancho*3, alto, negro);
pixel_largo(x+(ancho*3), y - (ancho*35), ancho, alto*5, negro);
pixel_largo(x+(ancho*1), y - (ancho*31), ancho*4, alto, negro);
// bota izq

pixel_largo(x+(ancho*5), y - (ancho*35), ancho*5, alto, negro);
pixel_largo(x+(ancho*9), y - (ancho*35), ancho, alto*2, negro);
pixel_largo(x+(ancho*8), y - (ancho*33), ancho, alto*2, negro);
pixel_largo(x+(ancho*7), y - (ancho*31), ancho, alto, negro);

// color blanco izq
pixel_largo(x+(ancho*-2), y - (ancho*22), ancho, alto*2,azul);
pixel_largo(x+(ancho*-2), y - (ancho*27), ancho*2, alto*4,gris);
pixel_largo(x+(ancho*-3), y - (ancho*25), ancho, alto,gris);
//sombra manow izq
pixel_largo(x+(ancho*-3), y - (ancho*24), ancho, alto,s_azul);
pixel_largo(x+(ancho*-1), y - (ancho*23), ancho, alto,s_azul);
pixel_largo(x+(ancho*-1), y - (ancho*25), ancho, alto,s_azul);
pixel_largo(x+(ancho*-2), y - (ancho*26), ancho*3, alto,s_azul);
pixel_largo(x, y - (ancho*27), ancho, alto,s_azul);
pixel_largo(x+(ancho*-2), y - (ancho*20), ancho, alto,s_azul);
//sombra mano der
pixel_largo(x+(ancho*8), y - (ancho*27), ancho, alto*3,s_azul);
pixel_largo(x+(ancho*9), y - (ancho*27), ancho, alto*4,s_azul);
pixel_largo(x+(ancho*10), y - (ancho*25), ancho, alto,s_azul);
pixel_largo(x+(ancho*10), y - (ancho*24), ancho, alto,gris);
// color hombrera 
pixel_largo(x+(ancho*-3), y - (ancho*18), ancho*2, alto,gris);
pixel_largo(x+(ancho*-2), y - (ancho*17), ancho*2, alto,gris);
pixel_largo(x+(ancho*-1), y - (ancho*16), ancho*2, alto,gris);
//sombra hombrera
pixel_largo(x+(ancho*1), y - (ancho*16), ancho, alto*2,s_azul);
pixel_largo(x+(ancho*2), y - (ancho*17), ancho*8, alto,s_azul);
pixel_largo(x+(ancho*3), y - (ancho*16), ancho*5, alto,s_azul);
pixel_largo(x+(ancho*6), y - (ancho*15), ancho, alto,s_azul);
pixel_largo(x+(ancho*8), y - (ancho*18), ancho*3, alto,s_azul);
pixel_largo(x+(ancho*10), y - (ancho*19), ancho, alto,s_azul);
pixel_largo(x+(ancho*11), y - (ancho*20), ancho, alto,s_azul);
pixel_largo(x+(ancho*12), y - (ancho*22), ancho, alto,s_azul);


}
