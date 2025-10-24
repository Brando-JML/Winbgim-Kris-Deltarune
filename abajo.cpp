#include <SDL_bgi.h>
#include "funciones.h"
void abajo_f1(int x , int y , int ancho , int alto){
	int azul, s_azul, rosa, gris, negro;
    color(azul, s_azul, rosa, gris, negro);
    //sombra cara
pixel_largo(x, y - (ancho*7),(ancho*5), alto,s_azul);
pixel_largo(x, y - (ancho*8),(ancho*6), alto,s_azul);
pixel_largo(x+(ancho*-1), y - (ancho*9),(ancho*8), alto,s_azul);
pixel_largo(x+(ancho*-1), y - (ancho*10),ancho, alto,s_azul);
pixel_largo(x+(ancho*9), y - (ancho*10),ancho, alto,s_azul);
pixel_largo(x+(ancho*1), y - (ancho*13),ancho, alto,s_azul);
pixel_largo(x+(ancho*7), y - (ancho*13),ancho, alto,s_azul);

    //cabello
	pixel_largo(x, y ,ancho*9, alto, negro);
    pixel_largo(x+(ancho*7),y+ancho,ancho,ancho,negro);
    pixel_largo(x+(ancho*9),y+ancho,ancho,ancho,negro);
pixel_largo(x+(ancho*-2), y - ancho, ancho + (ancho*12), alto, negro);
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
pixel_largo(x+(ancho*6), y - (ancho*14), ancho + (ancho*7), alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*15), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*12), y - (ancho*15), ancho, alto, negro);


//cara
pixel_largo(x, y - (ancho*10), (ancho*9), alto, azul);
pixel_largo(x+(ancho*-1), y - (ancho*11), (ancho*11), alto, azul);
pixel_largo(x, y - (ancho*12), (ancho*2), alto, azul);
pixel_largo(x+(ancho*2), y - (ancho*12), (ancho*4), alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*12), (ancho*3), alto, azul);
pixel_largo(x+(ancho*2), y - (ancho*13), (ancho*5), alto, azul);
pixel_largo(x+(ancho*4), y - (ancho*14), (ancho*2), alto, azul);

//contorno
pixel_largo(x+(ancho*-2), y - (ancho*17), ancho, alto, negro);
pixel_largo(x+(ancho*-3), y - (ancho*19), ancho, alto*2, negro);
pixel_largo(x+(ancho*-4), y - (ancho*21), ancho, alto*2, negro);
//guante izq
pixel_largo(x+(ancho*-3), y - (ancho*24), ancho, alto*3, negro);
pixel_largo(x+(ancho*-4), y - (ancho*26), ancho, alto*2, negro);
pixel_largo(x+(ancho*-3), y - (ancho*27), ancho, alto, negro);
pixel_largo(x+(ancho*-2), y - (ancho*28), ancho*3, alto, negro);
//bota izq
pixel_largo(x, y - (ancho*33), ancho, alto*3, negro);
pixel_largo(x+(ancho*-1), y - (ancho*35), ancho, alto*2, negro);
pixel_largo(x+(ancho*-1), y - (ancho*35), ancho*6, alto, negro);
pixel_largo(x+(ancho*4), y - (ancho*35), ancho, alto*4, negro);

//bota der
pixel_largo(x+(ancho*6), y - (ancho*35), ancho*5, alto, negro);
pixel_largo(x+(ancho*9), y - (ancho*33), ancho, alto*3, negro);
pixel_largo(x+(ancho*10), y - (ancho*34), ancho, alto, negro);

//color bota izq

pixel_largo(x, y - (ancho*34), ancho, alto,s_azul);
pixel_largo(x+ancho, y - (ancho*34), ancho, alto,gris);
pixel_largo(x+ancho, y - (ancho*33), ancho, alto,s_azul);
pixel_largo(x+(ancho*2), y - (ancho*34), ancho*2, alto,s_azul);
pixel_largo(x+(ancho*3), y - (ancho*34), ancho, alto*3,s_azul);
pixel_largo(x+(ancho*2), y - (ancho*33), ancho, alto*3,gris);
pixel_largo(x+(ancho*1), y - (ancho*32), ancho, alto*2,gris);

//color bota der
pixel_largo(x+(ancho*5), y - (ancho*35), ancho, alto*4, s_azul);
pixel_largo(x+(ancho*6), y - (ancho*34), ancho, alto, s_azul);
pixel_largo(x+(ancho*9), y - (ancho*34), ancho, alto, s_azul);
pixel_largo(x+(ancho*6), y - (ancho*33), ancho, alto*3, gris);
pixel_largo(x+(ancho*7), y - (ancho*34), ancho, alto*4, gris);
pixel_largo(x+(ancho*8), y - (ancho*34), ancho, alto*4, gris);
pixel_largo(x+(ancho*7), y - (ancho*33), ancho*2, alto, s_azul);
//guante izq color
pixel_largo(x+(ancho*-2), y - (ancho*22), ancho*2, alto, azul);
pixel_largo(x+(ancho*-2), y - (ancho*23), ancho*2, alto, s_azul);
pixel_largo(x+(ancho*-2), y - (ancho*24), ancho*2, alto, s_azul);
pixel_largo(x+(ancho*-2), y - (ancho*27), ancho*2, alto, s_azul);
pixel_largo(x+(ancho*-3), y - (ancho*25), ancho*2, alto, s_azul);
pixel_largo(x+(ancho*-3), y - (ancho*26), ancho, alto, s_azul);
pixel_largo(x, y - (ancho*26), ancho, alto, s_azul);
pixel_largo(x, y - (ancho*27), ancho, alto, gris);
pixel_largo(x+(ancho*-1), y - (ancho*25), ancho*2, alto,gris);
pixel_largo(x+(ancho*-2), y - (ancho*26), ancho*2, alto,gris);

//guante der contorno
pixel_largo(x+(ancho*11), y - (ancho*21), ancho, alto*3, negro);
pixel_largo(x+(ancho*9), y - (ancho*24), ancho, alto*6, negro);
pixel_largo(x+(ancho*12), y - (ancho*24), ancho, alto*3, negro);
pixel_largo(x+(ancho*13), y - (ancho*26), ancho, alto*2, negro);
pixel_largo(x+(ancho*12), y - (ancho*27), ancho, alto, negro);
pixel_largo(x+(ancho*9), y - (ancho*28), ancho*3, alto, negro);

//color guante der
pixel_largo(x+(ancho*10), y - (ancho*22), ancho*2, alto, azul);
pixel_largo(x+(ancho*10), y - (ancho*21), ancho, alto, azul);
pixel_largo(x+(ancho*10), y - (ancho*20), ancho, alto, s_azul);
pixel_largo(x+(ancho*10), y - (ancho*23), ancho*2, alto, s_azul);
pixel_largo(x+(ancho*10), y - (ancho*24), ancho*2, alto, s_azul);
pixel_largo(x+(ancho*10), y - (ancho*27), ancho*2, alto, s_azul);
pixel_largo(x+(ancho*11), y - (ancho*25), ancho*2, alto, s_azul);
pixel_largo(x+(ancho*12), y - (ancho*26), ancho, alto, s_azul);
pixel_largo(x+(ancho*9), y - (ancho*26), ancho, alto,s_azul);
pixel_largo(x+(ancho*9), y - (ancho*27), ancho, alto, gris);
pixel_largo(x+(ancho*9), y - (ancho*25), ancho*2, alto,gris);
pixel_largo(x+(ancho*10), y - (ancho*26), ancho*2, alto,gris);
// contorno hombrera
pixel_largo(x+(ancho*8), y - (ancho*19), ancho*4, alto, negro);
pixel_largo(x+(ancho*12), y - (ancho*18), ancho, alto, negro);
pixel_largo(x+(ancho*11), y - (ancho*17), ancho, alto, negro);
pixel_largo(x+(ancho*10), y - (ancho*16), ancho, alto, negro);
//color hombrera y pecho

pixel_largo(x+(ancho*8), y - (ancho*16), ancho*2, alto, gris);
pixel_largo(x+(ancho*9), y - (ancho*17), ancho*2, alto, gris);
pixel_largo(x+(ancho*8), y - (ancho*17), ancho, alto, s_azul);
pixel_largo(x+(ancho*10), y - (ancho*18), ancho*2, alto, gris);
pixel_largo(x+(ancho*9), y - (ancho*18), ancho, alto,s_azul);

pixel_largo(x+(ancho*5), y - (ancho*19), ancho*3, alto, s_azul);
pixel_largo(x+(ancho*3), y - (ancho*20), ancho*6, alto, s_azul);
pixel_largo(x+(ancho*2), y - (ancho*21), ancho, alto, s_azul);
pixel_largo(x+(ancho*3), y - (ancho*21), ancho*6, alto, gris);
pixel_largo(x+(ancho*2), y - (ancho*22), ancho*7, alto, gris);
pixel_largo(x+(ancho*3), y - (ancho*23), ancho, alto, s_azul);
pixel_largo(x+(ancho*4), y - (ancho*23), ancho*2, alto, gris);
pixel_largo(x+(ancho*6), y - (ancho*23), ancho, alto, s_azul);
//contorno pecho piernsajsjsjsjsjs
pixel_largo(x, y - (ancho*24), ancho, alto*4, negro);
pixel_largo(x+(ancho), y - (ancho*30), ancho, alto*10, negro);
pixel_largo(x+(ancho*2), y - (ancho*30), ancho, alto*8, negro);
pixel_largo(x+(ancho*3), y - (ancho*31), ancho, alto*8, negro);
pixel_largo(x+(ancho*3), y - (ancho*31), ancho*3, alto, negro);
pixel_largo(x+(ancho*4), y - (ancho*27), ancho, alto*4, negro);
pixel_largo(x+(ancho*5), y - (ancho*31), ancho, alto*8, negro);
pixel_largo(x+(ancho*6), y - (ancho*30), ancho, alto*7, negro);
pixel_largo(x+(ancho*7), y - (ancho*30), ancho, alto*8, negro);
pixel_largo(x+(ancho*8), y - (ancho*30), ancho, alto*10, negro);

//contorno_bufanda
pixel_largo(x+(ancho*-2), y - (ancho*21), ancho*2, alto, negro);
pixel_largo(x, y - (ancho*20), ancho*3, alto, negro);
pixel_largo(x+(ancho*2), y - (ancho*19), ancho*3, alto, negro);
pixel_largo(x+(ancho*5), y - (ancho*18), ancho*4, alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*17), ancho*2, alto, negro);
pixel_largo(x+(ancho*7), y - (ancho*17), ancho, alto*2, negro);
//sombra_bufanda
pixel_largo(x+(ancho*6), y - (ancho*16), ancho, alto, s_azul);
pixel_largo(x+ancho, y - (ancho*16), ancho, alto, s_azul);
pixel_largo(x+(ancho*2), y - (ancho*15), ancho, alto, s_azul);
pixel_largo(x+(ancho*-1), y - (ancho*17), ancho*2, alto, s_azul);
pixel_largo(x+(ancho*-2), y - (ancho*18), ancho, alto, s_azul);
pixel_largo(x+(ancho*4), y - (ancho*18), ancho, alto, s_azul);
pixel_largo(x+(ancho*5), y - (ancho*17), ancho, alto, s_azul);
//color_bufanda
pixel_largo(x+(ancho*2), y - (ancho*16), ancho*4, alto,rosa);
pixel_largo(x+(ancho), y - (ancho*17), ancho*4, alto,rosa);
pixel_largo(x+(ancho*-1), y - (ancho*18), ancho*5, alto,rosa);
pixel_largo(x+(ancho*-2), y - (ancho*19), ancho*4, alto,rosa);
pixel_largo(x+(ancho*-3), y - (ancho*20), ancho*3, alto,rosa);
pixel_largo(x+(ancho*-3), y - (ancho*21), ancho, alto,rosa);



}
void abajo_f2(int x , int y , int ancho , int alto){
	int azul, s_azul, rosa, gris, negro;
    color(azul, s_azul, rosa, gris, negro);
    
    //sombra cara
pixel_largo(x, y - (ancho*7),(ancho*5), alto,s_azul);
pixel_largo(x, y - (ancho*8),(ancho*6), alto,s_azul);
pixel_largo(x+(ancho*-1), y - (ancho*9),(ancho*8), alto,s_azul);
pixel_largo(x+(ancho*-1), y - (ancho*10),ancho, alto,s_azul);
pixel_largo(x+(ancho*9), y - (ancho*10),ancho, alto,s_azul);
pixel_largo(x+(ancho*1), y - (ancho*13),ancho, alto,s_azul);
pixel_largo(x+(ancho*7), y - (ancho*13),ancho, alto,s_azul);

    //cabello
	pixel_largo(x, y ,ancho*9, alto, negro);
    pixel_largo(x+(ancho*7),y+ancho,ancho,ancho,negro);
    pixel_largo(x+(ancho*9),y+ancho,ancho,ancho,negro);
pixel_largo(x+(ancho*-2), y - ancho, ancho + (ancho*12), alto, negro);
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
pixel_largo(x+(ancho*6), y - (ancho*14), ancho + (ancho*7), alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*15), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*12), y - (ancho*15), ancho, alto, negro);


//cara
pixel_largo(x, y - (ancho*10), (ancho*9), alto, azul);
pixel_largo(x+(ancho*-1), y - (ancho*11), (ancho*11), alto, azul);
pixel_largo(x, y - (ancho*12), (ancho*2), alto, azul);
pixel_largo(x+(ancho*2), y - (ancho*12), (ancho*4), alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*12), (ancho*3), alto, azul);
pixel_largo(x+(ancho*2), y - (ancho*13), (ancho*5), alto, azul);
pixel_largo(x+(ancho*4), y - (ancho*14), (ancho*2), alto, azul);

//contorno
pixel_largo(x+(ancho*-2), y - (ancho*17), ancho, alto, negro);
pixel_largo(x+(ancho*-3), y - (ancho*19), ancho, alto*2, negro);
pixel_largo(x+(ancho*-4), y - (ancho*21), ancho, alto*2, negro);

// contorno hombrera
pixel_largo(x+(ancho*8), y - (ancho*19), ancho*4, alto, negro);
pixel_largo(x+(ancho*12), y - (ancho*18), ancho, alto, negro);
pixel_largo(x+(ancho*11), y - (ancho*17), ancho, alto, negro);
pixel_largo(x+(ancho*10), y - (ancho*16), ancho, alto, negro);
//color hombrera y pecho

pixel_largo(x+(ancho*8), y - (ancho*16), ancho*2, alto, gris);
pixel_largo(x+(ancho*9), y - (ancho*17), ancho*2, alto, gris);
pixel_largo(x+(ancho*8), y - (ancho*17), ancho, alto, s_azul);
pixel_largo(x+(ancho*10), y - (ancho*18), ancho*2, alto, gris);
pixel_largo(x+(ancho*9), y - (ancho*18), ancho, alto,s_azul);

pixel_largo(x+(ancho*5), y - (ancho*19), ancho*3, alto, s_azul);
pixel_largo(x+(ancho*3), y - (ancho*20), ancho*6, alto, s_azul);
pixel_largo(x+(ancho*2), y - (ancho*21), ancho, alto, s_azul);
pixel_largo(x+(ancho*3), y - (ancho*21), ancho*6, alto, gris);
pixel_largo(x+(ancho*2), y - (ancho*22), ancho*7, alto, gris);
pixel_largo(x+(ancho*3), y - (ancho*23), ancho, alto, s_azul);
pixel_largo(x+(ancho*4), y - (ancho*23), ancho*2, alto, gris);
pixel_largo(x+(ancho*6), y - (ancho*23), ancho, alto, s_azul);


//contorno pecho piernsajsjsjsjsjs


pixel_largo(x, y - (ancho*24), ancho, alto*4, negro);
pixel_largo(x+(ancho), y - (ancho*30), ancho, alto*10, negro);
pixel_largo(x+(ancho*2), y - (ancho*30), ancho, alto*8, negro);
pixel_largo(x+(ancho*3), y - (ancho*31), ancho, alto*8, negro);

pixel_largo(x+(ancho*4), y - (ancho*30), ancho, alto*7, negro);
pixel_largo(x+(ancho*5), y - (ancho*27), ancho, alto*4, negro);
pixel_largo(x+(ancho*5), y - (ancho*30), ancho, alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*30), ancho, alto*7, negro);
pixel_largo(x+(ancho*7), y - (ancho*30), ancho, alto*8, negro);
pixel_largo(x+(ancho*8), y - (ancho*30), ancho, alto*10, negro);


//pierna izquierda paso
pixel_largo(x, y - (ancho*32), ancho, alto*2, negro);
pixel_largo(x+(ancho*-1), y - (ancho*33), ancho*4, alto, negro);
pixel_largo(x+(ancho*-1), y - (ancho*34), ancho*4, alto, negro);
pixel_largo(x+(ancho*1), y - (ancho*35), ancho*4, alto, negro);
pixel_largo(x+(ancho*4), y - (ancho*35), ancho, alto*5, negro);
//pierna der
pixel_largo(x+(ancho*5), y - (ancho*34), ancho, alto*4, negro);
pixel_largo(x+(ancho*5), y - (ancho*34), ancho*5, alto, negro);
pixel_largo(x+(ancho*9), y - (ancho*34), ancho, alto*2, negro);
pixel_largo(x+(ancho*8), y - (ancho*32), ancho, alto*2, negro);

//color pierna izq


pixel_largo(x+(ancho*3), y - (ancho*34), ancho, alto*3, s_azul);
pixel_largo(x+(ancho*2), y - (ancho*31), ancho, alto, s_azul);
pixel_largo(x+(ancho), y - (ancho*31), ancho, alto, gris);
pixel_largo(x+(ancho), y - (ancho*32), ancho*2, alto, gris);
//color pierna der
pixel_largo(x+(ancho*7), y - (ancho*32), ancho, alto*2, s_azul);
pixel_largo(x+(ancho*6), y - (ancho*32), ancho, alto*2, s_azul);
pixel_largo(x+(ancho*6), y - (ancho*33), ancho*2, alto, gris);
pixel_largo(x+(ancho*8), y - (ancho*33), ancho, alto, s_azul);
//contorno_bufanda
pixel_largo(x+(ancho*-2), y - (ancho*21), ancho*2, alto, negro);
pixel_largo(x, y - (ancho*20), ancho*3, alto, negro);
pixel_largo(x+(ancho*3), y - (ancho*19), ancho*2, alto, negro);
pixel_largo(x+(ancho*5), y - (ancho*18), ancho*4, alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*17), ancho*2, alto, negro);
pixel_largo(x+(ancho*7), y - (ancho*17), ancho, alto*2, negro);
//sombra_bufanda
pixel_largo(x+(ancho*6), y - (ancho*16), ancho, alto, s_azul);
pixel_largo(x+ancho, y - (ancho*16), ancho, alto, s_azul);
pixel_largo(x+(ancho*2), y - (ancho*15), ancho, alto, s_azul);
pixel_largo(x+(ancho*-1), y - (ancho*17), ancho*2, alto, s_azul);
pixel_largo(x+(ancho*-2), y - (ancho*18), ancho, alto, s_azul);
pixel_largo(x+(ancho*4), y - (ancho*18), ancho, alto, s_azul);
pixel_largo(x+(ancho*5), y - (ancho*17), ancho, alto, s_azul);
//color_bufanda
pixel_largo(x+(ancho*2), y - (ancho*16), ancho*4, alto,rosa);
pixel_largo(x+(ancho), y - (ancho*17), ancho*4, alto,rosa);
pixel_largo(x+(ancho*-1), y - (ancho*18), ancho*5, alto,rosa);
pixel_largo(x+(ancho*-2), y - (ancho*19), ancho*5, alto,rosa);
pixel_largo(x+(ancho*-3), y - (ancho*20), ancho*4, alto,rosa);
pixel_largo(x+(ancho*-3), y - (ancho*21), ancho*2, alto,rosa);
//contorno brazo izq atras
pixel_largo(x+(ancho*-3), y - (ancho*22), ancho*2, alto,negro);
pixel_largo(x+(ancho*-3), y - (ancho*25), ancho, alto*3,negro);
pixel_largo(x+(ancho*-2), y - (ancho*27), ancho, alto*2,negro);
pixel_largo(x+(ancho*-1), y - (ancho*28), ancho*2, alto,negro);
//color brazo izq 
pixel_largo(x+(ancho*-1), y - (ancho*27), ancho*2, alto,s_azul);
pixel_largo(x, y - (ancho*26), ancho, alto,s_azul);
pixel_largo(x, y - (ancho*25), ancho, alto,gris);
pixel_largo(x+(ancho*-1), y - (ancho*26), ancho, alto,gris);
pixel_largo(x+(ancho*-1), y - (ancho*25), ancho, alto*3,s_azul);
pixel_largo(x+(ancho*-2), y - (ancho*25), ancho, alto*3,s_azul);
pixel_largo(x+(ancho*-1), y - (ancho*22), ancho, alto,azul);
//brazo der contorno
pixel_largo(x+(ancho*9), y - (ancho*28), ancho*2, alto,negro);
pixel_largo(x+(ancho*11), y - (ancho*27), ancho, alto*2,negro);
pixel_largo(x+(ancho*12), y - (ancho*26), ancho, alto*4,negro);
pixel_largo(x+(ancho*11), y - (ancho*22), ancho, alto*3,negro);
pixel_largo(x+(ancho*9), y - (ancho*21), ancho, alto*2,negro);
//color brazo der
pixel_largo(x+(ancho*8), y - (ancho*27), ancho, alto,s_azul);
pixel_largo(x+(ancho*9), y - (ancho*27), ancho*2, alto,gris);
pixel_largo(x+(ancho*8), y - (ancho*26), ancho*3, alto,gris);
pixel_largo(x+(ancho*8), y - (ancho*25), ancho*2, alto,gris);
pixel_largo(x+(ancho*10), y - (ancho*25), ancho*2, alto,s_azul);
pixel_largo(x+(ancho*9), y - (ancho*24), ancho*3, alto,s_azul);
pixel_largo(x+(ancho*9), y - (ancho*23), ancho*3, alto,s_azul);
pixel_largo(x+(ancho*9), y - (ancho*22), ancho*2, alto,azul);
pixel_largo(x+(ancho*10), y - (ancho*21), ancho, alto,azul);
pixel_largo(x+(ancho*10), y - (ancho*20), ancho, alto,s_azul);
}
void abajo_f3(int x , int y , int ancho , int alto){
	int azul, s_azul, rosa, gris, negro;
    color(azul, s_azul, rosa, gris, negro);
    
       
    //sombra cara
pixel_largo(x, y - (ancho*7),(ancho*5), alto,s_azul);
pixel_largo(x, y - (ancho*8),(ancho*6), alto,s_azul);
pixel_largo(x+(ancho*-1), y - (ancho*9),(ancho*8), alto,s_azul);
pixel_largo(x+(ancho*-1), y - (ancho*10),ancho, alto,s_azul);
pixel_largo(x+(ancho*9), y - (ancho*10),ancho, alto,s_azul);
pixel_largo(x+(ancho*1), y - (ancho*13),ancho, alto,s_azul);
pixel_largo(x+(ancho*7), y - (ancho*13),ancho, alto,s_azul);

    //cabello
	pixel_largo(x, y ,ancho*9, alto, negro);
    pixel_largo(x+(ancho*7),y+ancho,ancho,ancho,negro);
    pixel_largo(x+(ancho*9),y+ancho,ancho,ancho,negro);
pixel_largo(x+(ancho*-2), y - ancho, ancho + (ancho*12), alto, negro);
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
pixel_largo(x+(ancho*6), y - (ancho*14), ancho + (ancho*7), alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*15), ancho + (ancho*4), alto, negro);
pixel_largo(x+(ancho*12), y - (ancho*15), ancho, alto, negro);


//cara
pixel_largo(x, y - (ancho*10), (ancho*9), alto, azul);
pixel_largo(x+(ancho*-1), y - (ancho*11), (ancho*11), alto, azul);
pixel_largo(x, y - (ancho*12), (ancho*2), alto, azul);
pixel_largo(x+(ancho*2), y - (ancho*12), (ancho*4), alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*12), (ancho*3), alto, azul);
pixel_largo(x+(ancho*2), y - (ancho*13), (ancho*5), alto, azul);
pixel_largo(x+(ancho*4), y - (ancho*14), (ancho*2), alto, azul);
    
    //contorno pecho piernsajsjsjsjsjs
pixel_largo(x, y - (ancho*24), ancho, alto*4, negro);
pixel_largo(x+(ancho), y - (ancho*30), ancho, alto*10, negro);
pixel_largo(x+(ancho*2), y - (ancho*30), ancho, alto*8, negro);
pixel_largo(x+(ancho*3), y - (ancho*31), ancho, alto*8, negro);
pixel_largo(x+(ancho*3), y - (ancho*31), ancho*3, alto, negro);
pixel_largo(x+(ancho*4), y - (ancho*27), ancho, alto*4, negro);
pixel_largo(x+(ancho*5), y - (ancho*31), ancho, alto*8, negro);
pixel_largo(x+(ancho*6), y - (ancho*30), ancho, alto*7, negro);
pixel_largo(x+(ancho*7), y - (ancho*30), ancho, alto*8, negro);
pixel_largo(x+(ancho*8), y - (ancho*30), ancho, alto*10, negro);


//sombra_bufanda
pixel_largo(x+(ancho*6), y - (ancho*16), ancho, alto, s_azul);
pixel_largo(x+ancho, y - (ancho*16), ancho, alto, s_azul);
pixel_largo(x+(ancho*2), y - (ancho*15), ancho, alto, s_azul);
pixel_largo(x+(ancho*-1), y - (ancho*17), ancho*2, alto, s_azul);
pixel_largo(x+(ancho*-2), y - (ancho*18), ancho, alto, s_azul);
pixel_largo(x+(ancho*4), y - (ancho*18), ancho, alto, s_azul);
pixel_largo(x+(ancho*5), y - (ancho*17), ancho, alto, s_azul);
//color_bufanda
pixel_largo(x+(ancho*2), y - (ancho*16), ancho*4, alto,rosa);
pixel_largo(x+(ancho), y - (ancho*17), ancho*4, alto,rosa);
pixel_largo(x+(ancho*-1), y - (ancho*18), ancho*5, alto,rosa);
pixel_largo(x+(ancho*-2), y - (ancho*19), ancho*4, alto,rosa);
pixel_largo(x+(ancho*-3), y - (ancho*20), ancho*3, alto,rosa);
pixel_largo(x+(ancho*-3), y - (ancho*21), ancho, alto,s_azul);


//contorno_bufanda
pixel_largo(x+(ancho*-2), y - (ancho*21), ancho*2, alto, negro);
pixel_largo(x, y - (ancho*20), ancho*3, alto, negro);
pixel_largo(x+(ancho*1), y - (ancho*19), ancho*4, alto, negro);
pixel_largo(x+(ancho*-1), y - (ancho*20), ancho*4, alto, negro);
pixel_largo(x+(ancho*5), y - (ancho*18), ancho*4, alto, negro);
pixel_largo(x+(ancho*6), y - (ancho*17), ancho*2, alto, negro);
pixel_largo(x+(ancho*7), y - (ancho*17), ancho, alto*2, negro);


    //contorno
pixel_largo(x+(ancho*-2), y - (ancho*17), ancho, alto, negro);
pixel_largo(x+(ancho*-3), y - (ancho*19), ancho, alto*2, negro);
pixel_largo(x+(ancho*-4), y - (ancho*21), ancho, alto*2, negro);

// contorno hombrera
pixel_largo(x+(ancho*8), y - (ancho*19), ancho*4, alto, negro);
pixel_largo(x+(ancho*12), y - (ancho*18), ancho, alto, negro);
pixel_largo(x+(ancho*11), y - (ancho*17), ancho, alto, negro);
pixel_largo(x+(ancho*10), y - (ancho*16), ancho, alto, negro);
//color hombrera y pecho

pixel_largo(x+(ancho*8), y - (ancho*16), ancho*2, alto, gris);
pixel_largo(x+(ancho*9), y - (ancho*17), ancho*2, alto, gris);
pixel_largo(x+(ancho*8), y - (ancho*17), ancho, alto, s_azul);
pixel_largo(x+(ancho*10), y - (ancho*18), ancho*2, alto, gris);
pixel_largo(x+(ancho*9), y - (ancho*18), ancho, alto,s_azul);

pixel_largo(x+(ancho*5), y - (ancho*19), ancho*3, alto, s_azul);
pixel_largo(x+(ancho*3), y - (ancho*20), ancho*6, alto, s_azul);
pixel_largo(x+(ancho*2), y - (ancho*21), ancho, alto, s_azul);
pixel_largo(x+(ancho*3), y - (ancho*21), ancho*6, alto, gris);
pixel_largo(x+(ancho*2), y - (ancho*22), ancho*7, alto, gris);
pixel_largo(x+(ancho*3), y - (ancho*23), ancho, alto, s_azul);
pixel_largo(x+(ancho*4), y - (ancho*23), ancho*2, alto, gris);
pixel_largo(x+(ancho*6), y - (ancho*23), ancho, alto, s_azul);

    
//pierna der paso
pixel_largo(x+(ancho*9), y - (ancho*32), ancho, alto*2, negro);
pixel_largo(x+(ancho*7), y - (ancho*33), ancho*4, alto, negro);
pixel_largo(x+(ancho*7), y - (ancho*34), ancho*4, alto, negro);
pixel_largo(x+(ancho*5), y - (ancho*35), ancho*4, alto, negro);
pixel_largo(x+(ancho*5), y - (ancho*35), ancho, alto*5,negro);

//pierna izq

pixel_largo(x+(ancho*4), y - (ancho*34), ancho, alto*4, negro);
pixel_largo(x+(ancho*1), y - (ancho*34), ancho*5, alto, negro);
pixel_largo(x, y - (ancho*34), ancho, alto*2, negro);
pixel_largo(x+(ancho*1), y - (ancho*32), ancho, alto*2, negro);    
    pixel_largo(x+(ancho*1), y - (ancho*30), ancho*8, alto, negro);
    //pierna izq color
    pixel_largo(x+(ancho*2), y - (ancho*32), ancho, alto*2,s_azul);    
       pixel_largo(x+(ancho*3), y - (ancho*32), ancho, alto*2,s_azul); 
        pixel_largo(x+(ancho*1), y - (ancho*33), ancho, alto,s_azul); 
           pixel_largo(x+(ancho*2), y - (ancho*33), ancho*2, alto,gris); 
       //color pierna der    
           pixel_largo(x+(ancho*8), y - (ancho*32), ancho, alto*2, gris);
            pixel_largo(x+(ancho*7), y - (ancho*31), ancho, alto, s_azul);
             pixel_largo(x+(ancho*7), y - (ancho*32), ancho, alto, gris);
             pixel_largo(x+(ancho*6), y - (ancho*31), ancho, alto,negro);
               pixel_largo(x+(ancho*6), y - (ancho*34), ancho, alto*3,s_azul);
          //brazo derecho adelante contorno xddd

pixel_largo(x+(ancho*12), y - (ancho*25), ancho, alto*3,negro);
pixel_largo(x+(ancho*9), y - (ancho*24), ancho, alto*5,negro);
pixel_largo(x+(ancho*8), y - (ancho*24), ancho, alto*4,negro);
pixel_largo(x+(ancho*11), y - (ancho*22), ancho, alto*3,negro);
pixel_largo(x+(ancho*11), y - (ancho*27), ancho, alto*2,negro);
pixel_largo(x+(ancho*9), y - (ancho*28), ancho*2, alto,negro); 


//Color brazo der

pixel_largo(x+(ancho*10), y - (ancho*22), ancho, alto*2,azul);
pixel_largo(x+(ancho*10), y - (ancho*20), ancho, alto,s_azul);
pixel_largo(x+(ancho*10), y - (ancho*25), ancho, alto*3,s_azul);
pixel_largo(x+(ancho*11), y - (ancho*25), ancho, alto*3,s_azul);
pixel_largo(x+(ancho*9), y - (ancho*25), ancho, alto,gris);
pixel_largo(x+(ancho*10), y - (ancho*26), ancho, alto,gris);
pixel_largo(x+(ancho*9), y - (ancho*26), ancho, alto,s_azul);
pixel_largo(x+(ancho*9), y - (ancho*27), ancho*2, alto,s_azul);

//contorno brazo izq
pixel_largo(x+(ancho*-1), y - (ancho*28), ancho*3, alto,negro);
pixel_largo(x+(ancho*-2), y - (ancho*27), ancho, alto*2,negro);
pixel_largo(x+(ancho*-3), y - (ancho*26), ancho, alto*5,negro);
pixel_largo(x+(ancho*-2), y - (ancho*21), ancho, alto,negro);
pixel_largo(x+(ancho*-2), y - (ancho*22), ancho, alto,negro);

//color brazo izq

pixel_largo(x+(ancho*-2), y - (ancho*25), ancho*2, alto,s_azul);
pixel_largo(x+(ancho*-2), y - (ancho*24), ancho*3, alto,s_azul);
pixel_largo(x+(ancho*-2), y - (ancho*23), ancho*3, alto,s_azul);
pixel_largo(x+(ancho*-1), y - (ancho*22), ancho*2, alto,azul);
pixel_largo(x+(ancho*-1), y - (ancho*21), ancho, alto,s_azul);
pixel_largo(x, y - (ancho*21), ancho, alto,azul);
pixel_largo(x+ancho, y - (ancho*27), ancho, alto,s_azul);
pixel_largo(x+(ancho*-1), y - (ancho*27), ancho*2, alto,gris);
pixel_largo(x+(ancho*-1), y - (ancho*26), ancho*3, alto,gris);
pixel_largo(x, y - (ancho*25), ancho*2, alto,gris);


}





