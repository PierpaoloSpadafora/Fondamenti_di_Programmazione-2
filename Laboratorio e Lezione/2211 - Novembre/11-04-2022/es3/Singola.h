#ifndef SINGOLA_H
#define SINGOLA_H
#include "Camera.h"

class Singola: public Camera
{
private:

public:
Singola(){};
Singola(int n):Camera(n,1,30){}
int calcolaCosto(int numeCamera) { return numeCamera*getCosto();   }
int getTipologia(){return getTipo();};


};
#endif
