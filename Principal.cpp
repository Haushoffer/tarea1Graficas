#include <iostream>
using namespace std;
#include "Vector3D.h"
#include "Punto3D.h"

int main()
{
   
    Vector3D vectorIgual(5.0);
    /*
    Vector3D vector;
    Vector3D vector2(2.5,4.2,3.8);
    vector.mostrarCoordenadas();
    vectorIgual.mostrarCoordenadas();
    vector2.mostrarCoordenadas();
    Vector3D v = vector2+vectorIgual;
    v.mostrarCoordenadas();
    Vector3D v2 = vector2-vectorIgual;
    v2.mostrarCoordenadas();

    Vector3D v3 = vector2*2.0;
    v3.mostrarCoordenadas();

    Vector3D v4 = 2.0*v3;
    v4.mostrarCoordenadas();*/

    Punto3D punto;
    Punto3D punto2(1.0,2.0,3.0);
    cout<<"Punto con todo 0"<<endl;
    punto.mostrarCoordenadas();
    
    cout<<"Resta (1,2,3) a (0,0,0)"<<endl;
    Vector3D resultadoV= punto-punto2;
    resultadoV.mostrarCoordenadas();

    cout<<"Sumar <5,5,5> a (1,2,3)"<<endl;
    Punto3D resultadoP= punto2+vectorIgual;
    resultadoP.mostrarCoordenadas();

    cout<<"Restar <5,5,5> a (1,2,3)"<<endl;
    resultadoP= punto2-vectorIgual;
    resultadoP.mostrarCoordenadas();

    cout<<"Multiplicar 2 por (1,2,3)"<<endl;
    resultadoP = 2*punto2;
    resultadoP.mostrarCoordenadas();

    return 0;
}