#include <winbgim.h>
#include "funciones.h"

void derecha_f1(int x , int y , int ancho , int alto){
	int azul, s_azul, rosa, gris, negro;
    color(azul, s_azul, rosa, gris, negro);
    
    
// pecho
pixel_largo(x, y +(ancho*-28),ancho*7,alto, negro);   
pixel_largo(x+(ancho*-1), y +(ancho*-27),ancho*8,alto*7, negro);     
pixel_largo(x+(ancho*7), y +(ancho*-25),ancho,alto*3, negro);  

// pierna xdddd
pixel_largo(x+ancho, y +(ancho*-30),ancho*6,alto*2, negro); 
//boota  
pixel_largo(x+ancho, y +(ancho*-35),ancho*5,alto*5, negro);
pixel_largo(x+ancho, y +(ancho*-35),ancho*8,alto, negro);
pixel_largo(x+ancho, y +(ancho*-34),ancho*7,alto, negro);
pixel_largo(x+ancho, y +(ancho*-33),ancho*6,alto, negro);      



// Cabello xd
pixel_largo(x, y ,ancho*8,alto, negro);
pixel_largo(x+(ancho*-1), y+(ancho) ,ancho,alto, negro);
pixel_largo(x+(ancho*1), y+(ancho) ,ancho,alto, negro);
pixel_largo(x+(ancho*-2), y +(ancho*-1),ancho*12,alto, negro);
pixel_largo(x+(ancho*-3), y +(ancho*-2),ancho*14,alto, negro);  
pixel_largo(x+(ancho*-4), y +(ancho*-4),ancho*16,alto*2, negro);  
pixel_largo(x+(ancho*-5), y +(ancho*-6),ancho*18,alto*2, negro); 
pixel_largo(x+(ancho*-5), y +(ancho*-7),ancho*19,alto, negro);
pixel_largo(x+(ancho*-5), y +(ancho*-8),ancho*17,alto, negro);   
pixel_largo(x+(ancho*-5), y +(ancho*-9),ancho*16,alto, negro); 
pixel_largo(x+(ancho*-5), y +(ancho*-12),ancho*17,alto*3, negro);  
pixel_largo(x+(ancho*-5), y +(ancho*-13),ancho*16,alto, negro);   
pixel_largo(x+(ancho*-4), y +(ancho*-14),ancho*14,alto, negro); 
pixel_largo(x+(ancho*-4), y +(ancho*-15),ancho*11,alto, negro); 
pixel_largo(x+(ancho*-3), y +(ancho*-16),ancho*11,alto, negro); 
pixel_largo(x+(ancho*-2), y +(ancho*-17),ancho*10,alto, negro); 
pixel_largo(x+(ancho*-5), y +(ancho*-12),ancho*7,alto*8, negro);   
//contorno de la bufanda 
pixel_largo(x+(ancho*-1), y +(ancho*-18),ancho,alto*2, negro);
pixel_largo(x+(ancho*-2), y +(ancho*-20),ancho,alto*2, negro);  
pixel_largo(x+(ancho*-3), y +(ancho*-22),ancho,alto*2, negro);  
pixel_largo(x+(ancho*-4), y +(ancho*-23),ancho*4,alto, negro);  
pixel_largo(x, y +(ancho*-22),ancho*2,alto, negro);  
pixel_largo(x+(ancho*2), y +(ancho*-21),ancho*4,alto, negro); 
pixel_largo(x+(ancho*6), y +(ancho*-20),ancho,alto, negro); 
pixel_largo(x+(ancho*7), y +(ancho*-19),ancho,alto, negro); 
pixel_largo(x+(ancho*8), y +(ancho*-19),ancho,alto*2, negro); 
//color bufanda 
pixel_largo(x+(ancho*4), y +(ancho*-19),ancho*3,alto*4, rosa); 
pixel_largo(x+(ancho*3), y +(ancho*-20),ancho*2,alto*4, rosa); 
pixel_largo(x+(ancho), y +(ancho*-20),ancho*4,alto*3, rosa); 
pixel_largo(x, y +(ancho*-21),ancho*2,alto*3, rosa); 
pixel_largo(x+(ancho*-2), y +(ancho*-21),ancho*2,alto, rosa); 
pixel_largo(x+(ancho*-1), y +(ancho*-20),ancho,alto, rosa); 
// sombra bufanda
pixel_largo(x+(ancho*-2), y +(ancho*-22),ancho*2,alto,s_azul); 
pixel_largo(x+(ancho*-1), y +(ancho*-19),ancho,alto,s_azul); 
pixel_largo(x, y +(ancho*-18),ancho,alto*2,s_azul); 
pixel_largo(x+(ancho*2), y +(ancho*-17),ancho,alto,s_azul); 
pixel_largo(x+(ancho*3), y +(ancho*-16),ancho,alto*2,s_azul);
 
pixel_largo(x+(ancho*7), y +(ancho*-18),ancho,alto,s_azul); 
pixel_largo(x+(ancho*5), y +(ancho*-20),ancho,alto,s_azul); 
// pecho contorno
pixel_largo(x+(ancho*8), y +(ancho*-22),ancho,alto*3, negro); 



//cara color xd 
pixel_largo(x+(ancho), y +(ancho*-10),ancho,alto*3, azul);   
pixel_largo(x+(ancho*2), y +(ancho*-9),ancho,alto*2, azul);   
pixel_largo(x+(ancho*3), y +(ancho*-13),ancho,alto*2, azul);   
pixel_largo(x+(ancho*4), y +(ancho*-14),ancho,alto*2, azul);   
pixel_largo(x+(ancho*3), y +(ancho*-13),ancho*7,alto, azul);   
pixel_largo(x+(ancho*6), y +(ancho*-10),ancho*5,alto, azul); 
pixel_largo(x+(ancho*5), y +(ancho*-11),ancho*6,alto, azul); 
pixel_largo(x+(ancho*5), y +(ancho*-12),ancho*4,alto, azul); 
//sombra cara xd
pixel_largo(x+(ancho*2), y +(ancho*-11),ancho,alto*2, s_azul);   
pixel_largo(x+(ancho*5), y +(ancho*-10),ancho,alto*4, s_azul);   
pixel_largo(x+(ancho*6), y +(ancho*-9),ancho,alto, s_azul);   
pixel_largo(x+(ancho*8), y +(ancho*-9),ancho*2,alto, s_azul); 
pixel_largo(x+(ancho*8), y +(ancho*-9),ancho,alto*2, s_azul);
// pecho color 
pixel_largo(x+(ancho*5), y +(ancho*-22),ancho*3,alto,gris);
pixel_largo(x+(ancho*6), y +(ancho*-23),ancho,alto,gris);
// chest sombra
pixel_largo(x+(ancho*6), y +(ancho*-21),ancho,alto,s_azul);
pixel_largo(x+(ancho*7), y +(ancho*-21),ancho,alto*2,s_azul);
// sombra manuela
pixel_largo(x, y +(ancho*-27),ancho*3,alto*5,s_azul);
pixel_largo(x+(ancho*3), y +(ancho*-25),ancho,alto,s_azul);
// color manueola
pixel_largo(x+(ancho*2), y +(ancho*-22),ancho,alto,azul);
pixel_largo(x+(ancho*3), y +(ancho*-26),ancho,alto,gris);
pixel_largo(x+(ancho*2), y +(ancho*-27),ancho,alto,gris);
pixel_largo(x+(ancho*1), y +(ancho*-26),ancho,alto*2,gris);
pixel_largo(x+(ancho*2), y +(ancho*-25),ancho,alto,gris);
// color bota 
pixel_largo(x+(ancho*2), y +(ancho*-34),ancho*3,alto*4,gris);
pixel_largo(x+(ancho*2), y +(ancho*-34),ancho*5,alto,gris);
// sombra boota
pixel_largo(x+(ancho*2), y +(ancho*-34),ancho*2,alto,s_azul);
pixel_largo(x+(ancho*2), y +(ancho*-34),ancho,alto*2,s_azul);
pixel_largo(x+(ancho*4), y +(ancho*-33),ancho*2,alto,s_azul);
}

void derecha_f2(int x , int y , int ancho , int alto){
	int azul, s_azul, rosa, gris, negro;
    color(azul, s_azul, rosa, gris, negro);


// color bufandx

pixel_largo(x+(ancho*-2), y+(ancho*-22) ,ancho*3,alto,rosa);
pixel_largo(x+(ancho*-1), y+(ancho*-21) ,ancho*5,alto,rosa);
pixel_largo(x+(ancho*-1), y+(ancho*-20) ,ancho*7,alto,rosa);
pixel_largo(x+(ancho*-1), y+(ancho*-19) ,ancho*8,alto,rosa);
pixel_largo(x+(ancho*-1), y+(ancho*-18) ,ancho*9,alto,rosa);
pixel_largo(x+(ancho*2), y+(ancho*-17) ,ancho*4,alto,rosa);
// Cabello xd
pixel_largo(x, y ,ancho*8,alto, negro);
pixel_largo(x+(ancho*-1), y+(ancho) ,ancho,alto, negro);
pixel_largo(x+(ancho*1), y+(ancho) ,ancho,alto, negro);
pixel_largo(x+(ancho*-2), y +(ancho*-1),ancho*12,alto, negro);
pixel_largo(x+(ancho*-3), y +(ancho*-2),ancho*14,alto, negro);  
pixel_largo(x+(ancho*-4), y +(ancho*-4),ancho*16,alto*2, negro);  
pixel_largo(x+(ancho*-5), y +(ancho*-6),ancho*18,alto*2, negro); 
pixel_largo(x+(ancho*-5), y +(ancho*-7),ancho*19,alto, negro);
pixel_largo(x+(ancho*-5), y +(ancho*-8),ancho*17,alto, negro);   
pixel_largo(x+(ancho*-5), y +(ancho*-9),ancho*16,alto, negro); 
pixel_largo(x+(ancho*-5), y +(ancho*-12),ancho*17,alto*3, negro);  
pixel_largo(x+(ancho*-5), y +(ancho*-13),ancho*16,alto, negro);   
pixel_largo(x+(ancho*-4), y +(ancho*-14),ancho*14,alto, negro); 
pixel_largo(x+(ancho*-4), y +(ancho*-15),ancho*11,alto, negro); 
pixel_largo(x+(ancho*-3), y +(ancho*-16),ancho*11,alto, negro); 
pixel_largo(x+(ancho*-2), y +(ancho*-17),ancho*10,alto, negro); 
pixel_largo(x+(ancho*-5), y +(ancho*-12),ancho*7,alto*8, negro);   
// col  buf 
pixel_largo(x+(ancho*3), y+(ancho*-17) ,ancho*4,alto,rosa);
pixel_largo(x+(ancho*4), y+(ancho*-16) ,ancho*3,alto,rosa);
// shadow  bufandx
pixel_largo(x, y+(ancho*-22) ,ancho,alto,s_azul);
pixel_largo(x+(ancho*-1), y+(ancho*-19) ,ancho,alto,s_azul);
pixel_largo(x, y+(ancho*-18) ,ancho,alto*2,s_azul);
pixel_largo(x+(ancho*2), y+(ancho*-17) ,ancho,alto,s_azul);
pixel_largo(x+(ancho*3), y+(ancho*-16) ,ancho,alto*2,s_azul);
pixel_largo(x+(ancho*3), y+(ancho*-21) ,ancho,alto,s_azul);
pixel_largo(x+(ancho*5), y+(ancho*-20) ,ancho,alto,s_azul);
pixel_largo(x+(ancho*7), y+(ancho*-18) ,ancho,alto,s_azul);
//shadow pecho
pixel_largo(x+(ancho*7), y+(ancho*-21) ,ancho,alto*2,s_azul);
pixel_largo(x+(ancho*6), y+(ancho*-21) ,ancho,alto,s_azul);
pixel_largo(x+(ancho*7), y+(ancho*-22) ,ancho,alto,gris);
pixel_largo(x+(ancho*5), y+(ancho*-22) ,ancho*2,alto,negro);


//cara color xd 
pixel_largo(x+(ancho), y +(ancho*-10),ancho,alto*3, azul);   
pixel_largo(x+(ancho*2), y +(ancho*-9),ancho,alto*2, azul);   
pixel_largo(x+(ancho*3), y +(ancho*-13),ancho,alto*2, azul);   
pixel_largo(x+(ancho*4), y +(ancho*-14),ancho,alto*2, azul);   
pixel_largo(x+(ancho*3), y +(ancho*-13),ancho*7,alto, azul);   
pixel_largo(x+(ancho*6), y +(ancho*-10),ancho*5,alto, azul); 
pixel_largo(x+(ancho*5), y +(ancho*-11),ancho*6,alto, azul); 
pixel_largo(x+(ancho*5), y +(ancho*-12),ancho*4,alto, azul); 
//sombra cara xd
pixel_largo(x+(ancho*2), y +(ancho*-11),ancho,alto*2, s_azul);   
pixel_largo(x+(ancho*5), y +(ancho*-10),ancho,alto*4, s_azul);   
pixel_largo(x+(ancho*6), y +(ancho*-9),ancho,alto, s_azul);   
pixel_largo(x+(ancho*8), y +(ancho*-9),ancho*2,alto, s_azul); 
pixel_largo(x+(ancho*8), y +(ancho*-9),ancho,alto*2, s_azul);

//contorno bufanda 
pixel_largo(x+(ancho*-1), y +(ancho*-18),ancho,alto, negro);
pixel_largo(x+(ancho*-2), y +(ancho*-21),ancho,alto*3, negro);
pixel_largo(x+(ancho*-3), y +(ancho*-23),ancho,alto*2, negro);
pixel_largo(x+(ancho*-3), y +(ancho*-23),ancho*5,alto, negro);
pixel_largo(x+(ancho*1), y +(ancho*-22),ancho*3,alto, negro);
pixel_largo(x+(ancho*4), y +(ancho*-21),ancho*2,alto, negro);
pixel_largo(x+(ancho*6), y +(ancho*-20),ancho,alto, negro);
pixel_largo(x+(ancho*7), y +(ancho*-19),ancho,alto, negro);


    
//pecho
pixel_largo(x+(ancho*8), y +(ancho*-22),ancho,alto*5,negro);
//piernas xd
pixel_largo(x, y +(ancho*-24),ancho*8,alto*2,negro);
pixel_largo(x+(ancho*1), y +(ancho*-25),ancho*7,alto,negro);
pixel_largo(x+(ancho*1), y +(ancho*-26),ancho*6,alto,negro);
pixel_largo(x, y +(ancho*-27),ancho*8,alto,negro);

pixel_largo(x+(ancho*-1), y +(ancho*-28),ancho*10,alto,negro);

pixel_largo(x+(ancho*-2), y +(ancho*-29),ancho*11,alto,negro);


//color boot izquierda
pixel_largo(x+(ancho*-1), y +(ancho*-29),ancho*2,alto,gris);
pixel_largo(x+(ancho*-2), y +(ancho*-33),ancho*4,alto*4,gris);
pixel_largo(x+(ancho*2), y +(ancho*-30),ancho,alto,gris);
// sombra bota izq  
pixel_largo(x+(ancho*-2), y +(ancho*-33),ancho*2,alto*2,s_azul);
pixel_largo(x, y +(ancho*-32),ancho*2,alto*2,s_azul);
pixel_largo(x+(ancho*-1), y +(ancho*-29),ancho,alto,s_azul);

// bootala izq

pixel_largo(x+(ancho*-2), y +(ancho*-30),ancho,alto*2,negro);
pixel_largo(x+(ancho*-3), y +(ancho*-32),ancho,alto*2,negro);
pixel_largo(x+(ancho*-2), y +(ancho*-33),ancho,alto,negro);
pixel_largo(x+(ancho*-1), y +(ancho*-34),ancho*4,alto,negro);
pixel_largo(x+(ancho*2), y +(ancho*-34),ancho,alto*2,negro);
pixel_largo(x+(ancho*1), y +(ancho*-32),ancho,alto,negro);
pixel_largo(x+(ancho*2), y +(ancho*-31),ancho,alto*2,negro);
pixel_largo(x+(ancho*3), y +(ancho*-30),ancho,alto*2,negro);
pixel_largo(x+(ancho*1), y +(ancho*-30),ancho,alto,negro);
// boota der
pixel_largo(x+(ancho*4), y +(ancho*-31),ancho,alto*2,negro);
pixel_largo(x+(ancho*5), y +(ancho*-33),ancho,alto*2,negro);
pixel_largo(x+(ancho*6), y +(ancho*-34),ancho*2,alto,negro);
pixel_largo(x+(ancho*8), y +(ancho*-33),ancho*2,alto,negro);
pixel_largo(x+(ancho*10), y +(ancho*-32),ancho,alto,negro);
pixel_largo(x+(ancho*11), y +(ancho*-31),ancho,alto*2,negro);
pixel_largo(x+(ancho*8), y +(ancho*-30),ancho*4,alto,negro);
pixel_largo(x+(ancho*5), y +(ancho*-30),ancho,alto,negro);




// respuesto oota izq
pixel_largo(x+(ancho*1), y +(ancho*-30),ancho,alto,gris);

// sombra bota der

pixel_largo(x+(ancho*6), y +(ancho*-33),ancho*2,alto*5,s_azul);
pixel_largo(x+(ancho*5), y +(ancho*-31),ancho,alto*2,s_azul);
pixel_largo(x+(ancho*8), y +(ancho*-32),ancho*2,alto,s_azul);
pixel_largo(x+(ancho*8), y +(ancho*-31),ancho*3,alto,s_azul);

// brazou col
pixel_largo(x+(ancho*4), y+(ancho*-22) ,ancho,alto,azul);
pixel_largo(x+(ancho*2), y+(ancho*-23) ,ancho,alto,azul);
pixel_largo(x, y+(ancho*-24) ,ancho,alto,negro);
pixel_largo(x+(ancho*2), y+(ancho*-23) ,ancho,alto,azul);
pixel_largo(x+(ancho*4), y+(ancho*-26) ,ancho*3,alto*3,gris);
//shadow brazou
pixel_largo(x+(ancho*4), y+(ancho*-26) ,ancho,alto,s_azul);
pixel_largo(x+(ancho*6), y+(ancho*-25) ,ancho,alto,s_azul);
pixel_largo(x+(ancho*3), y+(ancho*-25) ,ancho,alto,s_azul);
pixel_largo(x+(ancho*2), y+(ancho*-24) ,ancho*3,alto,s_azul);
pixel_largo(x+(ancho*3), y+(ancho*-23) ,ancho*3,alto,s_azul);
}


void derecha_f3(int x , int y , int ancho , int alto){
	int azul, s_azul, rosa, gris, negro;
    color(azul, s_azul, rosa, gris, negro);
//color bota izq
pixel_largo(x+(ancho*-2), y +(ancho*-33),ancho*4,alto*5,s_azul);

//color bota der
pixel_largo(x+(ancho*5), y +(ancho*-33),ancho*4,alto*5,s_azul);
pixel_largo(x+(ancho*5), y +(ancho*-30),ancho*3,alto,gris);
pixel_largo(x+(ancho*6), y +(ancho*-31),ancho*2,alto,gris);
pixel_largo(x+(ancho*7), y +(ancho*-29),ancho,alto,gris);
pixel_largo(x+(ancho*9), y +(ancho*-31),ancho*2,alto,gris);
pixel_largo(x+(ancho*9), y +(ancho*-32),ancho,alto,gris);



// Cabello xd
pixel_largo(x, y ,ancho*8,alto, negro);
pixel_largo(x+(ancho*-1), y+(ancho) ,ancho,alto, negro);
pixel_largo(x+(ancho*1), y+(ancho) ,ancho,alto, negro);
pixel_largo(x+(ancho*-2), y +(ancho*-1),ancho*12,alto, negro);
pixel_largo(x+(ancho*-3), y +(ancho*-2),ancho*14,alto, negro);  
pixel_largo(x+(ancho*-4), y +(ancho*-4),ancho*16,alto*2, negro);  
pixel_largo(x+(ancho*-5), y +(ancho*-6),ancho*18,alto*2, negro); 
pixel_largo(x+(ancho*-5), y +(ancho*-7),ancho*19,alto, negro);
pixel_largo(x+(ancho*-5), y +(ancho*-8),ancho*17,alto, negro);   
pixel_largo(x+(ancho*-5), y +(ancho*-9),ancho*16,alto, negro); 
pixel_largo(x+(ancho*-5), y +(ancho*-12),ancho*17,alto*3, negro);  
pixel_largo(x+(ancho*-5), y +(ancho*-13),ancho*16,alto, negro);   
pixel_largo(x+(ancho*-4), y +(ancho*-14),ancho*14,alto, negro); 
pixel_largo(x+(ancho*-4), y +(ancho*-15),ancho*11,alto, negro); 
pixel_largo(x+(ancho*-3), y +(ancho*-16),ancho*11,alto, negro); 
pixel_largo(x+(ancho*-2), y +(ancho*-17),ancho*10,alto, negro); 
pixel_largo(x+(ancho*-5), y +(ancho*-12),ancho*7,alto*8, negro);  

//cara color xd 
pixel_largo(x+(ancho), y +(ancho*-10),ancho,alto*3, azul);   
pixel_largo(x+(ancho*2), y +(ancho*-9),ancho,alto*2, azul);   
pixel_largo(x+(ancho*3), y +(ancho*-13),ancho,alto*2, azul);   
pixel_largo(x+(ancho*4), y +(ancho*-14),ancho,alto*2, azul);   
pixel_largo(x+(ancho*3), y +(ancho*-13),ancho*7,alto, azul);   
pixel_largo(x+(ancho*6), y +(ancho*-10),ancho*5,alto, azul); 
pixel_largo(x+(ancho*5), y +(ancho*-11),ancho*6,alto, azul); 
pixel_largo(x+(ancho*5), y +(ancho*-12),ancho*4,alto, azul); 
//sombra cara xd
pixel_largo(x+(ancho*2), y +(ancho*-11),ancho,alto*2, s_azul);   
pixel_largo(x+(ancho*5), y +(ancho*-10),ancho,alto*4, s_azul);   
pixel_largo(x+(ancho*6), y +(ancho*-9),ancho,alto, s_azul);   
pixel_largo(x+(ancho*8), y +(ancho*-9),ancho*2,alto, s_azul); 
pixel_largo(x+(ancho*8), y +(ancho*-9),ancho,alto*2, s_azul);
// xd
pixel_largo(x+(ancho*1), y +(ancho*-23),ancho*6,alto*2,negro);


// bootala izq

pixel_largo(x+(ancho*-2), y +(ancho*-30),ancho,alto*2,negro);
pixel_largo(x+(ancho*-3), y +(ancho*-32),ancho,alto*2,negro);
pixel_largo(x+(ancho*-2), y +(ancho*-33),ancho,alto,negro);
pixel_largo(x+(ancho*-1), y +(ancho*-34),ancho*4,alto,negro);
pixel_largo(x+(ancho*2), y +(ancho*-34),ancho,alto*2,negro);
pixel_largo(x+(ancho*1), y +(ancho*-32),ancho,alto,negro);
pixel_largo(x+(ancho*2), y +(ancho*-31),ancho,alto*2,negro);
pixel_largo(x+(ancho*3), y +(ancho*-30),ancho,alto*2,negro);
pixel_largo(x, y +(ancho*-29),ancho*3,alto,negro);
// boota der
pixel_largo(x+(ancho*4), y +(ancho*-31),ancho,alto*2,negro);
pixel_largo(x+(ancho*5), y +(ancho*-33),ancho,alto*2,negro);
pixel_largo(x+(ancho*6), y +(ancho*-34),ancho*2,alto,negro);
pixel_largo(x+(ancho*8), y +(ancho*-33),ancho*2,alto,negro);
pixel_largo(x+(ancho*10), y +(ancho*-32),ancho,alto,negro);
pixel_largo(x+(ancho*11), y +(ancho*-31),ancho,alto*2,negro);
pixel_largo(x+(ancho*8), y +(ancho*-30),ancho*4,alto,negro);
pixel_largo(x+(ancho*4), y +(ancho*-29),ancho*2,alto,negro);
pixel_largo(x+(ancho*8), y +(ancho*-29),ancho,alto*2,negro);

//pecho
pixel_largo(x+(ancho*8), y +(ancho*-22),ancho,alto*5,negro);
pixel_largo(x+(ancho*7), y +(ancho*-25),ancho,alto*3,negro);
//bufanda xdddddfd
pixel_largo(x+(ancho*-1), y +(ancho*-18),ancho,alto,negro);
pixel_largo(x+(ancho*-2), y +(ancho*-19),ancho,alto,negro);
pixel_largo(x+(ancho*-3), y +(ancho*-21),ancho,alto*2,negro);
pixel_largo(x+(ancho*-4), y +(ancho*-23),ancho,alto*2,negro);
pixel_largo(x+(ancho*-4), y +(ancho*-23),ancho*4,alto,negro);
pixel_largo(x+(ancho*-1), y +(ancho*-22),ancho*2,alto,negro);
pixel_largo(x+(ancho*1), y +(ancho*-21),ancho*4,alto,negro);
pixel_largo(x+(ancho*4), y +(ancho*-20),ancho*3,alto,negro);
pixel_largo(x+(ancho*6), y +(ancho*-19),ancho*2,alto,negro);

// pierna  xddd
pixel_largo(x+(ancho*-2), y +(ancho*-26),ancho*9,alto*3,negro);
pixel_largo(x+(ancho*-1), y +(ancho*-28),ancho*9,alto*2,negro);

//mano brazo etc color
pixel_largo(x+(ancho*1), y +(ancho*-22),ancho*2,alto,azul);
pixel_largo(x+(ancho*-1), y +(ancho*-26),ancho*3,alto*3,gris);
//sombra brazo xd
pixel_largo(x, y +(ancho*-23),ancho*2,alto,s_azul);
pixel_largo(x+(ancho*2), y +(ancho*-24),ancho,alto,s_azul);
pixel_largo(x+(ancho*1), y +(ancho*-26),ancho,alto,s_azul);
pixel_largo(x, y +(ancho*-26),ancho,alto*2,s_azul);
// pecho color 
pixel_largo(x+(ancho*5), y +(ancho*-22),ancho*3,alto,gris);
pixel_largo(x+(ancho*6), y +(ancho*-23),ancho,alto,gris);
//sombra pecho
pixel_largo(x+(ancho*5), y +(ancho*-21),ancho*3,alto,s_azul);
pixel_largo(x+(ancho*7), y +(ancho*-20),ancho,alto,s_azul);

// bufanda color 
pixel_largo(x+(ancho*-2), y +(ancho*-21),ancho*3,alto*2,rosa);
pixel_largo(x, y +(ancho*-20),ancho*4,alto*2,rosa);
pixel_largo(x+(ancho*1), y +(ancho*-20),ancho*3,alto*3,rosa);
pixel_largo(x+(ancho*3), y +(ancho*-19),ancho*3,alto*3,rosa);
pixel_largo(x+(ancho*4), y +(ancho*-18),ancho*3,alto*3,rosa);
// sombra de bufanda 
pixel_largo(x+(ancho*-3), y +(ancho*-22),ancho*2,alto,s_azul);
pixel_largo(x+(ancho*-1), y +(ancho*-19),ancho,alto,s_azul);
pixel_largo(x, y +(ancho*-18),ancho,alto*2,s_azul);
pixel_largo(x+(ancho*2), y +(ancho*-17),ancho,alto,s_azul);
pixel_largo(x+(ancho*3), y +(ancho*-16),ancho,alto*2,s_azul);
pixel_largo(x+(ancho*7), y +(ancho*-18),ancho,alto,s_azul);



}





