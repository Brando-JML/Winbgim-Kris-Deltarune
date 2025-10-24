// principal.cpp
#include <winbgim.h>
#include "funciones.h"
#include <windows.h>
#include <mmsystem.h>

using namespace std;

int coordx0, coordy0;

int main() {
    initwindow(1920, 1080);
 
    setbkcolor(BLACK);
    cleardevice();

    coordx0 = getmaxx() / 2;
    coordy0 = getmaxy() / 2;
    
 //PlaySoundA("C:\\Users\\asus\\Music\\OST\\Deltarune-OST-Field-of-Hopes-and-Dreams-_Undertale-Series_.wav", NULL, SND_FILENAME | SND_ASYNC);

transicion_direcciones() ;

  

    getch();
    closegraph();
    return 0;
    
}

