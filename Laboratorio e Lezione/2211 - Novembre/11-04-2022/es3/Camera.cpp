#include "Camera.h"

Camera::Camera(int n,int t, int c){
numId=n;
tipologia=t;
costo=c;
}

int Camera::getCosto(){
return costo;
}

int Camera::getTipo(){
return tipologia;
}
