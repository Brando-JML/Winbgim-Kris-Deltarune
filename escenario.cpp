#include <winbgim.h>
#include "funciones.h"
void escenario(){
int azul, s_azul, rosa, gris, negro ;
color(azul, s_azul, rosa, gris, negro);

pixel_largo(-500, -300 ,1000,400 , COLOR(133,16,83));
pixel_largo(-100, 100 ,5,200 , gris);
pixel_largo(-100, 100 ,100,5, gris);
pixel_largo(5, 100 ,100,5, gris);
pixel_largo(5, 300 ,100,5, gris);
pixel_largo(-100, 300 ,100,5, gris);
pixel_largo(0, 105 ,5,195, gris);
pixel_largo(100, 100 ,5,200 , gris);

pixel_largo(-25,190 ,15,15, gris);
pixel_largo(20,190 ,15,15, gris);
for(int i = 0 ; i<=10;i++){
pixel_largo(50+ (i*-5),-50+(i*-5),10+(i*10),5,YELLOW);	
	
}

for(int i = 0 ; i<=10;i++){
pixel_largo(-50+ (i*-5),-50+(i*-5),10+(i*10),5,YELLOW);	
	
}

for(int i = 0 ; i<=10;i++){
pixel_largo(0+ (i*-5),0+(i*-5),10+(i*10),5,YELLOW);	
	
}



}
