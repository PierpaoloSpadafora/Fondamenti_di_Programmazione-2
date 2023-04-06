
#ifndef __TRIPLA_H__
#define __TRIPLA_H__

#include "Camera.h"

class Tripla: public Camera
{
private:

public:
    Tripla(){};
    Tripla(int n):Camera(n,3,75){}
    int calcolaCosto(int numeCamera) { return numeCamera*getCosto();   }
    int getTipologia(){return getTipo();};

};
#endif