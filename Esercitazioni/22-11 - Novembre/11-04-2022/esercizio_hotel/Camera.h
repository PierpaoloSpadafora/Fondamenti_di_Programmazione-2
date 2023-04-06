#ifndef CAMERA_H
#define CAMERA_H

class Camera{

private:
int numId;
int tipologia;
int costo;

public:
Camera(){};
Camera(int n,int t, int c);
int getCosto();
int getTipo();
virtual int calcolaCosto(int numero){};
virtual int getTipologia(){};
};

#endif
