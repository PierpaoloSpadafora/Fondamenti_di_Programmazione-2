#ifndef DOPPIA_H
#define DOPPIA_H
#include "Camera.h"

class Doppia: public Camera
{
private:

public:
Doppia(){};
Doppia(int n):Camera(n,2,50){}
int calcolaCosto( int numeCamera) { return numeCamera*getCosto();   }
int getTipologia(){return getTipo();};


};
#endif
