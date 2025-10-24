// funciones.cpp
#include <winbgim.h>
#include "funciones.h"

extern int coordx0, coordy0;



void pixel_largo(int x, int y, int ancho, int alto, int color) {
    setfillstyle(SOLID_FILL, color);
    setcolor(color);
    bar(x + coordx0, coordy0 - y - alto, x + coordx0 + ancho, coordy0 - y);
}

void color(int& azul, int& s_azul, int& rosa, int& gris, int& negro) {
    azul = COLOR(116, 252, 255);
    s_azul = COLOR(103, 121, 193);
    rosa = COLOR(234, 0, 141);
    gris = COLOR(195, 222, 249);
    negro = COLOR(10, 11, 59);
}

void transicion_direcciones() {
     escenario();
	bool running = true;
    int x = 300, y = 200; // Coordenadas iniciales
    int sequence_index = 0; // Índice para alternar entre funciones en la secuencia
    int escala = 4, del = 130;
    abajo_f1(x,y,escala,escala);
    while (running) {
    
        if (GetAsyncKeyState('S') & 0x8000) { 
	  
		cleardevice();
	    escenario();
		    // Movimiento hacia abajo
            // Secuencia para la tecla S
            switch (sequence_index) {
                case 0:
                    abajo_f1(x, y, escala,escala);
                    break;
                case 1:
                    abajo_f2(x, y, escala,escala);
                    break;
                case 2:
                    abajo_f1(x, y, escala, escala);
                    break;
                case 3:
                    abajo_f3(x, y, escala, escala);
                    break;
            }

            y -= 10; // Incrementa la posición en Y
            sequence_index = (sequence_index + 1) % 4; // Avanza en la secuencia
            delay(del); // Controla la velocidad del movimiento
        }
        else if (GetAsyncKeyState('A') & 0x8000) { 
		    
		cleardevice();	
		escenario(); 
			// Movimiento hacia la izquierda
            // Secuencia para la tecla A
            switch (sequence_index) {
                case 0:
                    izquierda_f1(x, y, escala, escala);
                    break;
                case 1:
                    izquierda_f2(x, y, escala, escala);
                    break;
                case 2:
                    izquierda_f1(x, y, escala, escala);
                    break;
                case 3:
                    izquierda_f3(x, y, escala, escala);
                    break;
            }

            x -= 10; // Decrementa la posición en X
            sequence_index = (sequence_index + 1) % 4; // Avanza en la secuencia
            delay(del); // Controla la velocidad del movimiento
        }
        else if (GetAsyncKeyState(VK_ESCAPE) & 0x8000) { // Salir del programa
            running = false;
        }else if (GetAsyncKeyState('D') & 0x8000) { 
		    
		cleardevice();	
		escenario(); 
		    // Verifica si la tecla 'D' está presionada
            // Secuencia para la tecla D (movimiento hacia la derecha)
            switch (sequence_index) {
                case 0:
                    derecha_f1(x, y, escala,escala); // Dibuja la figura correspondiente
                    break;
                case 1:
                    derecha_f2(x, y, escala, escala);
                    break;
                case 2:
                    derecha_f1(x, y, escala, escala);
                    break;
                case 3:
                    derecha_f3(x, y, escala, escala);
                    break;
            }

            x += 10; // Incrementa la posición en X para mover hacia la derecha
            sequence_index = (sequence_index + 1) % 4; // Alterna en la secuencia de imágenes
            delay(del); // Controla la velocidad del movimiento
        }else if (GetAsyncKeyState('W') & 0x8000) { 
	   	  
		cleardevice();	
	    escenario();    
		    // Verifica si la tecla 'D' está presionada
            // Secuencia para la tecla D (movimiento hacia la derecha)
            switch (sequence_index) {
                case 0:
                    arriba_f1(x, y, escala,escala); // Dibuja la figura correspondiente
                    break;
                case 1:
                    arriba_f2(x, y, escala, escala);
                    break;
                case 2:
                    arriba_f1(x, y, escala, escala);
                    break;
                case 3:
                    arriba_f3(x, y, escala, escala);
                    break;
            }

            y += 10; // Incrementa la posición en X para mover hacia la derecha
            sequence_index = (sequence_index + 1) % 4; // Alterna en la secuencia de imágenes
            delay(del); // Controla la velocidad del movimiento
              
        }   
    }
}





