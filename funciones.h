// funciones.h
#ifndef FUNCIONES_H
#define FUNCIONES_H

extern int coordx0, coordy0;

void pixel_largo(int x, int y, int ancho, int alto, int color); // Función para dibujar un pixel largo
void color(int& azul, int& s_azul, int& rosa, int& gris, int& negro); // Función para obtener colores
void abajo_f1(int x , int y , int ancho , int alto);
void abajo_f2(int x , int y , int ancho , int alto);
void abajo_f3(int x , int y , int ancho , int alto);
void izquierda_f1(int x ,int y, int ancho,int alto);
void izquierda_f2(int x ,int y, int ancho,int alto);
void izquierda_f3(int x ,int y, int ancho,int alto);
void derecha_f1(int x , int y , int ancho , int alto);
void derecha_f2(int x , int y , int ancho , int alto);
void derecha_f3(int x , int y , int ancho , int alto);
void arriba_f1(int x , int y , int ancho , int alto);
void arriba_f2(int x , int y , int ancho , int alto);
void arriba_f3(int x , int y , int ancho , int alto);
void transicion_direcciones();
void escenario();
#endif

