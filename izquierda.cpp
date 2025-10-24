#include <winbgim.h>
#include "funciones.h"
void izquierda_f1(int x ,int y, int ancho,int alto){
		int azul, s_azul, rosa, gris, negro;
    color(azul, s_azul, rosa, gris, negro);

	//color bota xdxdddd :VVvv
	pixel_largo(x+(ancho*2), y + (ancho*-34),ancho*4, alto*4,gris);	
    pixel_largo(x+(ancho), y + (ancho*-34),ancho, alto,gris);
	//sombra botala xdx v:	
   pixel_largo(x+(ancho*4), y + (ancho*-34),ancho*2, alto,s_azul);
   pixel_largo(x+(ancho*5), y + (ancho*-33),ancho, alto,s_azul);
   pixel_largo(x+(ancho*2), y + (ancho*-33),ancho*2, alto,s_azul);
//color y jorge oreja dxdxxddd cara 
		pixel_largo(x+(ancho*1), y + (ancho*-14),ancho*3, alto, azul);	
  		pixel_largo(x+(ancho*-2), y + (ancho*-13),ancho*7, alto, azul);	
        pixel_largo(x+(ancho*-2), y + (ancho*-12),ancho*7, alto, azul);
        pixel_largo(x+(ancho*-3), y + (ancho*-11),ancho*7, alto, azul);
        pixel_largo(x+(ancho*-4), y + (ancho*-10),ancho*6, alto, azul);
        pixel_largo(x+(ancho*6), y + (ancho*-10),ancho, alto*3, azul);
        pixel_largo(x+(ancho*5), y + (ancho*-9),ancho, alto*2, azul);
// color hombrera 

pixel_largo(x+(ancho*4), y + (ancho*-18),ancho, alto*3, gris);
pixel_largo(x+(ancho*3), y + (ancho*-18),ancho, alto*2, gris);
pixel_largo(x+(ancho*5), y + (ancho*-19),ancho*3, alto, gris);
pixel_largo(x+(ancho*5), y + (ancho*-18),ancho*3, alto, gris);
//sombra hombrera 
pixel_largo(x+(ancho*4), y + (ancho*-15),ancho, alto, s_azul);
pixel_largo(x+(ancho*4), y + (ancho*-19),ancho, alto, s_azul);
pixel_largo(x+(ancho*3), y + (ancho*-16),ancho, alto, s_azul);
pixel_largo(x+(ancho*5), y + (ancho*-17),ancho*3, alto,s_azul);
pixel_largo(x+(ancho*8), y + (ancho*-21),ancho, alto*3, s_azul);
pixel_largo(x+(ancho*9), y + (ancho*-22),ancho, alto*2, s_azul);

//Color pechera 
pixel_largo(x, y + (ancho*-23),ancho*3, alto*6, gris);

//Sombra_pechera :VVV
pixel_largo(x, y + (ancho*-18),ancho*2, alto, s_azul);
pixel_largo(x, y + (ancho*-19),ancho, alto*2, s_azul);
pixel_largo(x+(ancho*3), y + (ancho*-21),ancho, alto,s_azul);

//guante color -- piel
pixel_largo(x+(ancho*5), y + (ancho*-22),ancho*3, alto*2,azul);
// sombra guante xd
pixel_largo(x+(ancho*4), y + (ancho*-28),ancho*4, alto*6,s_azul);
//blanco guante 

pixel_largo(x+(ancho*5), y + (ancho*-27),ancho, alto,gris);
pixel_largo(x+(ancho*4), y + (ancho*-26),ancho, alto,gris);
pixel_largo(x+(ancho*6), y + (ancho*-26),ancho, alto*2,gris);
pixel_largo(x+(ancho*5), y + (ancho*-25),ancho, alto,gris);
//sombra cara
        pixel_largo(x+(ancho*5), y + (ancho*-11),ancho, alto*2, s_azul);
        pixel_largo(x+(ancho*2), y + (ancho*-10),ancho, alto*4, s_azul);
        pixel_largo(x+(ancho*-2), y + (ancho*-9),ancho*5, alto, s_azul);
        pixel_largo(x+(ancho*-2), y + (ancho*-8),ancho*5, alto, s_azul);
//cabello
		pixel_largo(x, y ,ancho*8, alto, negro);
		pixel_largo(x+(ancho*8), y+ancho ,ancho, alto, negro);
		pixel_largo(x+(ancho*6), y+ancho ,ancho, alto, negro);
		pixel_largo(x+(ancho*-2), y +(ancho*-1),ancho*12, alto, negro);
		pixel_largo(x+(ancho*-3), y +(ancho*-2),ancho*14, alto, negro);
		pixel_largo(x+(ancho*-4), y +(ancho*-3),ancho*16, alto, negro);
		pixel_largo(x+(ancho*-4), y +(ancho*-4),ancho*16, alto, negro);
		pixel_largo(x+(ancho*-5), y +(ancho*-5),ancho*18, alto, negro);
		pixel_largo(x+(ancho*-5), y +(ancho*-6),ancho*18, alto, negro);
		pixel_largo(x+(ancho*-6), y +(ancho*-7),ancho*8, alto, negro);
		pixel_largo(x+(ancho*-4), y +(ancho*-8),ancho*3, alto, negro);
		pixel_largo(x+(ancho*-3), y +(ancho*-9),ancho, alto, negro);
		//cabello abajo
		pixel_largo(x, y + (ancho*-9),ancho, alto*10, negro);
		pixel_largo(x+(ancho), y + (ancho*-8),ancho, alto*9, negro);
		pixel_largo(x+(ancho*3), y + (ancho*-12),ancho, alto*10, negro);
		pixel_largo(x+(ancho*4), y + (ancho*-11),ancho, alto*10, negro);
		// cabello oreja
		pixel_largo(x+(ancho*5), y + (ancho*-7),ancho*8, alto, negro);
		pixel_largo(x+(ancho*7), y + (ancho*-8),ancho*6, alto, negro);
		pixel_largo(x+(ancho*7), y + (ancho*-9),ancho*6, alto, negro);
		pixel_largo(x+(ancho*7), y + (ancho*-10),ancho*6, alto, negro);
		pixel_largo(x+(ancho*6), y + (ancho*-11),ancho*7, alto, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-12),ancho*8, alto, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-13),ancho*8, alto, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-15),ancho*7, alto, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-16),ancho*6, alto, negro);
		pixel_largo(x+(ancho*6), y + (ancho*-17),ancho, alto, negro);
		pixel_largo(x+(ancho*9), y + (ancho*-17),ancho, alto, negro);
		
		//contorno cara
	    pixel_largo(x+(ancho*4), y + (ancho*-14),ancho*8, alto, negro);
		pixel_largo(x+(ancho*1), y + (ancho*-15),ancho*3, alto, negro);
		pixel_largo(x+(ancho*-2), y + (ancho*-14),ancho*5, alto, negro);
		pixel_largo(x+(ancho*-3), y + (ancho*-13),ancho, alto, negro);
		pixel_largo(x+(ancho*-4), y + (ancho*-12),ancho, alto*3, negro);
		pixel_largo(x+(ancho*-4), y + (ancho*-12),ancho*3, alto, negro);
		//contorno hombrera 
		
		pixel_largo(x+(ancho*2), y + (ancho*-19),ancho, alto*4, negro);
		pixel_largo(x+(ancho*3), y + (ancho*-19),ancho, alto, negro);
		pixel_largo(x+(ancho*3), y + (ancho*-20),ancho*5, alto, negro);
		pixel_largo(x+(ancho*7), y + (ancho*-21),ancho, alto, negro);
		pixel_largo(x+(ancho*9), y + (ancho*-23),ancho*3, alto, negro);
		pixel_largo(x+(ancho*10), y + (ancho*-23),ancho, alto*3, negro);
		pixel_largo(x+(ancho*9), y + (ancho*-20),ancho, alto*2, negro);
		pixel_largo(x+(ancho*8), y + (ancho*-18),ancho, alto*2, negro);
			
		//contorno guante xdxxxxdddd
		pixel_largo(x+(ancho*8), y + (ancho*-27),ancho, alto*6, negro);
		// contorno pecho
		pixel_largo(x, y + (ancho*-17),ancho*2, alto, negro);
		pixel_largo(x, y + (ancho*-17),ancho, alto*2, negro);	
		pixel_largo(x+(ancho*-1), y + (ancho*-22),ancho, alto*5, negro);	
		//color pantalon
		
		pixel_largo(x, y + (ancho*-25),ancho, alto*3, negro);			
		pixel_largo(x+(ancho), y + (ancho*-30),ancho, alto*7, negro);
		pixel_largo(x+(ancho*2), y + (ancho*-30),ancho, alto*8,negro);	
	    pixel_largo(x+(ancho*3), y + (ancho*-30),ancho, alto*9,negro);		
	    pixel_largo(x+(ancho*4), y + (ancho*-30),ancho, alto*4,negro);	
		pixel_largo(x+(ancho*5), y + (ancho*-30),ancho, alto*3,negro);	
		//Talon
		pixel_largo(x+(ancho*6), y + (ancho*-35),ancho, alto*8,negro);
		//fin talon
		pixel_largo(x+(ancho*4), y + (ancho*-24),ancho, alto*4,negro);	
		pixel_largo(x+(ancho*7), y + (ancho*-28),ancho, alto,negro);
		//botala si no la quieres la bota
		pixel_largo(x+(ancho*-1), y + (ancho*-35),ancho*8, alto,negro);
        pixel_largo(x, y + (ancho*-34),ancho, alto,negro);	
	    pixel_largo(x+(ancho), y + (ancho*-33),ancho, alto,negro);	
	    pixel_largo(x+(ancho*2), y + (ancho*-32),ancho, alto*2,negro);
	
		
		//color bufanda
		pixel_largo(x+(ancho), y + (ancho*-16),ancho, alto, rosa);	
		
		
}



void izquierda_f2(int x ,int y, int ancho,int alto){
		int azul, s_azul, rosa, gris, negro;
    color(azul, s_azul, rosa, gris, negro);
    

 //bota dder claro -- color  
        pixel_largo(x+(ancho*6), y + (ancho*-33),ancho*4, alto*5, gris);
        
      // botta derr claro -- sombra
	    pixel_largo(x+(ancho*8), y + (ancho*-33),ancho, alto, s_azul);
        pixel_largo(x+(ancho*7), y + (ancho*-32),ancho*3, alto, s_azul);
        pixel_largo(x+(ancho*6), y + (ancho*-31),ancho*2, alto, s_azul);
        pixel_largo(x+(ancho*8), y + (ancho*-29),ancho, alto, s_azul);
    //sombra cara
        pixel_largo(x+(ancho*5), y + (ancho*-11),ancho, alto*2, s_azul);
        pixel_largo(x+(ancho*2), y + (ancho*-10),ancho, alto*4, s_azul);
        pixel_largo(x+(ancho*-2), y + (ancho*-9),ancho*5, alto, s_azul);
        pixel_largo(x+(ancho*-2), y + (ancho*-8),ancho*5, alto, s_azul);
        
        //cabello
		pixel_largo(x, y ,ancho*8, alto, negro);
		pixel_largo(x+(ancho*8), y+ancho ,ancho, alto, negro);
		pixel_largo(x+(ancho*6), y+ancho ,ancho, alto, negro);
		pixel_largo(x+(ancho*-2), y +(ancho*-1),ancho*12, alto, negro);
		pixel_largo(x+(ancho*-3), y +(ancho*-2),ancho*14, alto, negro);
		pixel_largo(x+(ancho*-4), y +(ancho*-3),ancho*16, alto, negro);
		pixel_largo(x+(ancho*-4), y +(ancho*-4),ancho*16, alto, negro);
		pixel_largo(x+(ancho*-5), y +(ancho*-5),ancho*18, alto, negro);
		pixel_largo(x+(ancho*-5), y +(ancho*-6),ancho*18, alto, negro);
		pixel_largo(x+(ancho*-6), y +(ancho*-7),ancho*8, alto, negro);
		pixel_largo(x+(ancho*-4), y +(ancho*-8),ancho*3, alto, negro);
		pixel_largo(x+(ancho*-3), y +(ancho*-9),ancho, alto, negro);
		//cabello abajo
		pixel_largo(x, y + (ancho*-9),ancho, alto*10, negro);
		pixel_largo(x+(ancho), y + (ancho*-8),ancho, alto*9, negro);
		pixel_largo(x+(ancho*3), y + (ancho*-12),ancho, alto*10, negro);
		pixel_largo(x+(ancho*4), y + (ancho*-11),ancho, alto*10, negro);
		// cabello oreja
		pixel_largo(x+(ancho*5), y + (ancho*-7),ancho*8, alto, negro);
		pixel_largo(x+(ancho*7), y + (ancho*-8),ancho*6, alto, negro);
		pixel_largo(x+(ancho*7), y + (ancho*-9),ancho*6, alto, negro);
		pixel_largo(x+(ancho*7), y + (ancho*-10),ancho*6, alto, negro);
		pixel_largo(x+(ancho*6), y + (ancho*-11),ancho*7, alto, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-12),ancho*8, alto, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-13),ancho*8, alto, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-15),ancho*7, alto, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-16),ancho*6, alto, negro);
		pixel_largo(x+(ancho*6), y + (ancho*-17),ancho, alto, negro);
		pixel_largo(x+(ancho*9), y + (ancho*-17),ancho, alto, negro);
		
		//color y jorge oreja dxdxxddd cara 
		pixel_largo(x+(ancho*1), y + (ancho*-14),ancho*3, alto, azul);	
  		pixel_largo(x+(ancho*-2), y + (ancho*-13),ancho*7, alto, azul);	
        pixel_largo(x+(ancho*-2), y + (ancho*-12),ancho*7, alto, azul);
        pixel_largo(x+(ancho*-3), y + (ancho*-11),ancho*7, alto, azul);
        pixel_largo(x+(ancho*-4), y + (ancho*-10),ancho*6, alto, azul);
        pixel_largo(x+(ancho*6), y + (ancho*-10),ancho, alto*3, azul);
        pixel_largo(x+(ancho*5), y + (ancho*-9),ancho, alto*2, azul);
		
		
				
		//contorno cara
	    pixel_largo(x+(ancho*4), y + (ancho*-14),ancho*8, alto, negro);
		pixel_largo(x+(ancho*1), y + (ancho*-15),ancho*3, alto, negro);
		pixel_largo(x+(ancho*-2), y + (ancho*-14),ancho*5, alto, negro);
		pixel_largo(x+(ancho*-3), y + (ancho*-13),ancho, alto, negro);
		pixel_largo(x+(ancho*-4), y + (ancho*-12),ancho, alto*3, negro);
		pixel_largo(x+(ancho*-4), y + (ancho*-12),ancho*3, alto, negro);
    
    
    	// contorno pecho
		pixel_largo(x, y + (ancho*-17),ancho*2, alto, negro);
		pixel_largo(x, y + (ancho*-17),ancho, alto*2, negro);	
		pixel_largo(x+(ancho*-1), y + (ancho*-22),ancho, alto*5, negro);
		 
        pixel_largo(x, y + (ancho*-27),ancho*7, alto*5, negro);
        pixel_largo(x+(ancho*7), y + (ancho*-27),ancho, alto, negro);
        // pierna xdxx
        pixel_largo(x, y + (ancho*-28),ancho, alto*6, negro);
        
        pixel_largo(x+(ancho*-1), y + (ancho*-28),ancho*10, alto, negro);
        pixel_largo(x+(ancho*2), y + (ancho*-29),ancho*5, alto, negro);
        
        
    	// bota pas osc
    	
        pixel_largo(x+(ancho*-1), y + (ancho*-30),ancho, alto*2, negro);
		pixel_largo(x+(ancho*-4), y + (ancho*-30),ancho*4, alto, negro);
		pixel_largo(x+(ancho*-4), y + (ancho*-31),ancho, alto, negro);
		pixel_largo(x+(ancho*-3), y + (ancho*-32),ancho, alto, negro);
		pixel_largo(x+(ancho*-2), y + (ancho*-33),ancho*2, alto, negro);
		pixel_largo(x, y + (ancho*-34),ancho*2, alto, negro);
		pixel_largo(x+(ancho*2), y + (ancho*-33),ancho, alto*2, negro);
		pixel_largo(x+(ancho*3), y + (ancho*-31),ancho, alto*3, negro);
		pixel_largo(x+(ancho*2), y + (ancho*-29),ancho, alto, negro);
		
		
		// bota der clar 
		pixel_largo(x+(ancho*5), y + (ancho*-31),ancho, alto*3, negro);
		pixel_largo(x+(ancho*6), y + (ancho*-32),ancho, alto, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-34),ancho, alto*2, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-34),ancho*4, alto, negro);
		pixel_largo(x+(ancho*9), y + (ancho*-33),ancho, alto, negro);
		pixel_largo(x+(ancho*10), y + (ancho*-32),ancho, alto*2, negro);
		pixel_largo(x+(ancho*9), y + (ancho*-30),ancho, alto*2, negro);
		//contorno hombrera 
		
		pixel_largo(x+(ancho*2), y + (ancho*-22),ancho, alto*6,negro);
		pixel_largo(x+(ancho*3), y + (ancho*-19),ancho*3, alto, negro);
		pixel_largo(x+(ancho*3), y + (ancho*-20),ancho, alto, negro);
		pixel_largo(x+(ancho*6), y + (ancho*-20),ancho*2, alto, negro); 
		pixel_largo(x+(ancho*7), y + (ancho*-24),ancho, alto*4, negro); 
		
		pixel_largo(x+(ancho*8), y + (ancho*-23),ancho*3, alto, negro);
		
		pixel_largo(x+(ancho*10), y + (ancho*-23),ancho, alto*2,negro);
		
		pixel_largo(x+(ancho*9), y + (ancho*-21),ancho, alto*3,negro);
		pixel_largo(x+(ancho*8), y + (ancho*-18),ancho, alto*2,negro);
        // color braz0x
        pixel_largo(x+(ancho*4), y + (ancho*-21),ancho*2, alto*2,azul);
        pixel_largo(x+(ancho*3), y + (ancho*-22),ancho*2, alto*2,azul);
        pixel_largo(x+(ancho*5), y + (ancho*-22),ancho*2, alto*2,azul);
        pixel_largo(x+(ancho), y + (ancho*-26),ancho*3, alto*3,gris);
        // sombra brazo
        pixel_largo(x+(ancho), y + (ancho*-25),ancho, alto,s_azul);
        pixel_largo(x+(ancho*3), y + (ancho*-26),ancho, alto,s_azul);
        pixel_largo(x+(ancho*4), y + (ancho*-25),ancho, alto,s_azul);
        pixel_largo(x+(ancho*3), y + (ancho*-24),ancho*3, alto,s_azul);
        pixel_largo(x+(ancho*2), y + (ancho*-23),ancho*4, alto,s_azul);
        pixel_largo(x+(ancho*3), y + (ancho*-22),ancho*2, alto,s_azul);
        pixel_largo(x+(ancho*6), y + (ancho*-21),ancho, alto,s_azul);
        
        // color pecho
        pixel_largo(x, y + (ancho*-21),ancho*2, alto*3,gris);
        // sombra pecho xdddd
        pixel_largo(x, y + (ancho*-22),ancho, alto,s_azul);
        pixel_largo(x+(ancho), y + (ancho*-22),ancho, alto,negro);
        pixel_largo(x, y + (ancho*-18),ancho*2, alto,s_azul);
        pixel_largo(x, y + (ancho*-19),ancho, alto*2,s_azul);
        //color peche bufanda
        pixel_largo(x+(ancho), y + (ancho*-16),ancho, alto,rosa);
        pixel_largo(x+(ancho*4), y + (ancho*-16),ancho, alto,gris);
        pixel_largo(x+(ancho*3), y + (ancho*-18),ancho*3, alto*2,gris);
         pixel_largo(x+(ancho*6), y + (ancho*-19),ancho*2, alto*2,gris);
         
        //sombra peche bufanda 
        pixel_largo(x+(ancho*2), y + (ancho*-16),ancho*2, alto,s_azul);
        pixel_largo(x+(ancho*4), y + (ancho*-15),ancho, alto,s_azul);
        pixel_largo(x+(ancho*3), y + (ancho*-18),ancho, alto,s_azul);
        pixel_largo(x+(ancho*7), y + (ancho*-17),ancho, alto,s_azul);
        pixel_largo(x+(ancho*8), y + (ancho*-22),ancho, alto*4,s_azul);
        pixel_largo(x+(ancho*8), y + (ancho*-22),ancho*2, alto,s_azul);
        
        // bota izq osc
        
        pixel_largo(x+(ancho*2), y + (ancho*-31),ancho, alto*2, s_azul);       
        pixel_largo(x, y + (ancho*-33),ancho*2, alto*5, s_azul);
        pixel_largo(x+(ancho*-3), y + (ancho*-31),ancho*3, alto, s_azul); 
        pixel_largo(x+(ancho*-2), y + (ancho*-32),ancho*2, alto, s_azul); 
        
             pixel_largo(x+(ancho*3), y + (ancho*-12),ancho, alto*2,negro);
        
        
        
        
} 
void izquierda_f3(int x ,int y, int ancho,int alto){
		int azul, s_azul, rosa, gris, negro;
    color(azul, s_azul, rosa, gris, negro);
    
    
    
    //Color bota oscura cfff
    pixel_largo(x+(ancho*6), y + (ancho*-33),ancho*4, alto*5,s_azul);
    pixel_largo(x+(ancho*6), y + (ancho*-29),ancho*2, alto,negro);
    //color boots pas xd maybe 
    pixel_largo(x, y + (ancho*-33),ancho*3, alto*5,gris);
    pixel_largo(x+(ancho*-3), y + (ancho*-32),ancho*5, alto*2,gris);
    // sombra de la bota de arriba la que esta con sombra 
    pixel_largo(x+(ancho*-3), y + (ancho*-32),ancho*5, alto*2,gris);
    pixel_largo(x+(ancho*-1), y + (ancho*-32),ancho, alto*2,s_azul);
    pixel_largo(x, y + (ancho*-33),ancho*2, alto*2,s_azul);
    pixel_largo(x+(ancho*2), y + (ancho*-31),ancho, alto,s_azul); 
    pixel_largo(x+(ancho*1), y + (ancho*-29),ancho, alto,s_azul); 
    
        //color pecho
      	pixel_largo(x, y + (ancho*-22),ancho*3, alto*4, gris);
      	pixel_largo(x+(ancho), y + (ancho*-22),ancho, alto, gris);
      	//
     
            //sombra cara
        pixel_largo(x+(ancho*5), y + (ancho*-11),ancho, alto*2, s_azul);
        pixel_largo(x+(ancho*2), y + (ancho*-10),ancho, alto*4, s_azul);
        pixel_largo(x+(ancho*-2), y + (ancho*-9),ancho*5, alto, s_azul);
        pixel_largo(x+(ancho*-2), y + (ancho*-8),ancho*5, alto, s_azul);
    
         //color hombrefanda :V
         
        pixel_largo(x+(ancho*3), y + (ancho*-19),ancho*5, alto*4,gris);
        pixel_largo(x+(ancho*1), y + (ancho*-16),ancho, alto,rosa);
        
        // sombra hombrofanda :VVVVVVVVV
        pixel_largo(x+(ancho*2), y + (ancho*-16),ancho*2, alto,s_azul);
        pixel_largo(x+(ancho*4), y + (ancho*-15),ancho, alto,s_azul);
        pixel_largo(x+(ancho*3), y + (ancho*-19),ancho, alto,s_azul);
        pixel_largo(x+(ancho*7), y + (ancho*-19),ancho, alto,s_azul);
        pixel_largo(x+(ancho*8), y + (ancho*-20),ancho*2, alto,s_azul);
        pixel_largo(x+(ancho*9), y + (ancho*-21),ancho, alto,s_azul);
        pixel_largo(x+(ancho*10), y + (ancho*-22),ancho, alto,s_azul);
        //cabello
		pixel_largo(x, y ,ancho*8, alto, negro);
		pixel_largo(x+(ancho*8), y+ancho ,ancho, alto, negro);
		pixel_largo(x+(ancho*6), y+ancho ,ancho, alto, negro);
		pixel_largo(x+(ancho*-2), y +(ancho*-1),ancho*12, alto, negro);
		pixel_largo(x+(ancho*-3), y +(ancho*-2),ancho*14, alto, negro);
		pixel_largo(x+(ancho*-4), y +(ancho*-3),ancho*16, alto, negro);
		pixel_largo(x+(ancho*-4), y +(ancho*-4),ancho*16, alto, negro);
		pixel_largo(x+(ancho*-5), y +(ancho*-5),ancho*18, alto, negro);
		pixel_largo(x+(ancho*-5), y +(ancho*-6),ancho*18, alto, negro);
		pixel_largo(x+(ancho*-6), y +(ancho*-7),ancho*8, alto, negro);
		pixel_largo(x+(ancho*-4), y +(ancho*-8),ancho*3, alto, negro);
		pixel_largo(x+(ancho*-3), y +(ancho*-9),ancho, alto, negro);
		//cabello abajo
		pixel_largo(x, y + (ancho*-9),ancho, alto*10, negro);
		pixel_largo(x+(ancho), y + (ancho*-8),ancho, alto*9, negro);
		pixel_largo(x+(ancho*3), y + (ancho*-12),ancho, alto*10, negro);
		pixel_largo(x+(ancho*4), y + (ancho*-11),ancho, alto*10, negro);
		// cabello oreja
		pixel_largo(x+(ancho*5), y + (ancho*-7),ancho*8, alto, negro);
		pixel_largo(x+(ancho*7), y + (ancho*-8),ancho*6, alto, negro);
		pixel_largo(x+(ancho*7), y + (ancho*-9),ancho*6, alto, negro);
		pixel_largo(x+(ancho*7), y + (ancho*-10),ancho*6, alto, negro);
		pixel_largo(x+(ancho*6), y + (ancho*-11),ancho*7, alto, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-12),ancho*8, alto, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-13),ancho*8, alto, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-15),ancho*7, alto, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-16),ancho*6, alto, negro);
		pixel_largo(x+(ancho*6), y + (ancho*-17),ancho, alto, negro);
		pixel_largo(x+(ancho*9), y + (ancho*-17),ancho, alto, negro);
		pixel_largo(x+(ancho*6), y + (ancho*-17),ancho, alto,s_azul);
		//color y jorge oreja dxdxxddd cara 
		pixel_largo(x+(ancho*1), y + (ancho*-14),ancho*3, alto, azul);	
  		pixel_largo(x+(ancho*-2), y + (ancho*-13),ancho*7, alto, azul);	
        pixel_largo(x+(ancho*-2), y + (ancho*-12),ancho*7, alto, azul);
        pixel_largo(x+(ancho*-3), y + (ancho*-11),ancho*7, alto, azul);
        pixel_largo(x+(ancho*-4), y + (ancho*-10),ancho*6, alto, azul);
        pixel_largo(x+(ancho*6), y + (ancho*-10),ancho, alto*3, azul);
        pixel_largo(x+(ancho*5), y + (ancho*-9),ancho, alto*2, azul);
		
		
				
		//contorno cara
	    pixel_largo(x+(ancho*4), y + (ancho*-14),ancho*8, alto, negro);
		pixel_largo(x+(ancho*1), y + (ancho*-15),ancho*3, alto, negro);
		pixel_largo(x+(ancho*-2), y + (ancho*-14),ancho*5, alto, negro);
		pixel_largo(x+(ancho*-3), y + (ancho*-13),ancho, alto, negro);
		pixel_largo(x+(ancho*-4), y + (ancho*-12),ancho, alto*3, negro);
		pixel_largo(x+(ancho*-4), y + (ancho*-12),ancho*3, alto, negro);
   
     
    	// bota pas osc
    	
        pixel_largo(x+(ancho*-1), y + (ancho*-30),ancho, alto*2, negro);
		pixel_largo(x+(ancho*-4), y + (ancho*-30),ancho*4, alto, negro);
		pixel_largo(x+(ancho*-4), y + (ancho*-31),ancho, alto, negro);
		pixel_largo(x+(ancho*-3), y + (ancho*-32),ancho, alto, negro);
		pixel_largo(x+(ancho*-2), y + (ancho*-33),ancho*2, alto, negro);
		pixel_largo(x, y + (ancho*-34),ancho*2, alto, negro);
		pixel_largo(x+(ancho*2), y + (ancho*-33),ancho, alto*2, negro);
		pixel_largo(x+(ancho*3), y + (ancho*-31),ancho, alto*3, negro);
		pixel_largo(x+(ancho*2), y + (ancho*-29),ancho, alto, negro);
		
		
		// bota der clar 
		pixel_largo(x+(ancho*5), y + (ancho*-31),ancho, alto*3, negro);
		pixel_largo(x+(ancho*6), y + (ancho*-32),ancho, alto, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-34),ancho, alto*2, negro);
		pixel_largo(x+(ancho*5), y + (ancho*-34),ancho*4, alto, negro);
		pixel_largo(x+(ancho*9), y + (ancho*-33),ancho, alto, negro);
		pixel_largo(x+(ancho*10), y + (ancho*-32),ancho, alto*2, negro);
		pixel_largo(x+(ancho*9), y + (ancho*-30),ancho, alto*2, negro);
         
		 //contorno pecho
      	pixel_largo(x, y + (ancho*-17),ancho*2, alto, negro);
		pixel_largo(x, y + (ancho*-17),ancho, alto*2, negro);	
		pixel_largo(x+(ancho*-1), y + (ancho*-22),ancho, alto*5,negro);
		pixel_largo(x+(ancho), y + (ancho*-22),ancho, alto, gris);
		// pierna xd :V
		
		pixel_largo(x, y + (ancho*-25),ancho, alto*3,negro);
		pixel_largo(x+(ancho), y + (ancho*-28),ancho*8, alto*7,negro);
		pixel_largo(x, y + (ancho*-28),ancho, alto*2,negro);
		pixel_largo(x+(ancho*-1), y + (ancho*-28),ancho*2, alto,negro);
		pixel_largo(x+(ancho*4), y + (ancho*-30),ancho, alto*2,negro);
		//contorno hombrera 
		pixel_largo(x+(ancho*2), y + (ancho*-19),ancho, alto*3,negro);	
		pixel_largo(x+(ancho*3), y + (ancho*-20),ancho*5, alto, negro);
		pixel_largo(x+(ancho*7), y + (ancho*-20),ancho, alto, negro); 
		pixel_largo(x+(ancho*9), y + (ancho*-26),ancho, alto*5, negro); 
		pixel_largo(x+(ancho*8), y + (ancho*-21),ancho, alto,negro);
		pixel_largo(x+(ancho*10), y + (ancho*-23),ancho*2, alto,negro);
		pixel_largo(x+(ancho*8), y + (ancho*-19),ancho*2, alto,negro);
		pixel_largo(x+(ancho*10), y + (ancho*-21),ancho, alto*2,negro);
		pixel_largo(x+(ancho*11), y + (ancho*-22),ancho, alto,negro);
		pixel_largo(x+(ancho*8), y + (ancho*-18),ancho, alto*2,negro);
		pixel_largo(x+(ancho*7), y + (ancho*-17),ancho*2, alto,negro);
		pixel_largo(x+(ancho*5), y + (ancho*-17),ancho, alto,negro);
		//pech respl color sombra
		pixel_largo(x+(ancho), y + (ancho*-23),ancho, alto*2, gris);
        pixel_largo(x+(ancho*2), y + (ancho*-23),ancho, alto*2, gris);
        // sombra pecho 
        pixel_largo(x+(ancho*2), y + (ancho*-23),ancho, alto,s_azul);
        pixel_largo(x+(ancho*3), y + (ancho*-22),ancho, alto,s_azul);
        pixel_largo(x+(ancho*2), y + (ancho*-20),ancho, alto,s_azul);
        pixel_largo(x, y + (ancho*-18),ancho*2, alto,s_azul);
        pixel_largo(x, y + (ancho*-19),ancho, alto,s_azul);
        
        // arm brazo brazo color :VVV
        pixel_largo(x+(ancho*3), y + (ancho*-21),ancho, alto,negro);
        pixel_largo(x+(ancho*5), y + (ancho*-22),ancho*4, alto*2,azul);
        pixel_largo(x+(ancho*6), y + (ancho*-26),ancho*3, alto*3,gris);
        //sombra del brazo xd
        pixel_largo(x+(ancho*6), y + (ancho*-26),ancho*2, alto,s_azul);
        pixel_largo(x+(ancho*7), y + (ancho*-26),ancho, alto*2,s_azul);
        pixel_largo(x+(ancho*5), y + (ancho*-24),ancho, alto,s_azul);
        pixel_largo(x+(ancho*6), y + (ancho*-23),ancho*3, alto,s_azul);
        pixel_largo(x+(ancho*5), y + (ancho*-22),ancho, alto,s_azul);
        pixel_largo(x+(ancho*4), y + (ancho*-21),ancho, alto,s_azul);
        
        
        
        pixel_largo(x+(ancho*3), y + (ancho*-12),ancho, alto*2,negro);
        
}
