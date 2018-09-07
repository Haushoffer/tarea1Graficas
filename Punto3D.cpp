#include <iostream>
using namespace std;
#include"Punto3D.h"
Punto3D::Punto3D(): x(0), y(0), z(0)
{}
Punto3D::Punto3D(double n): x(n), y(n), z(n)
{}
Punto3D::Punto3D(double v_x, double v_y, double v_z): x(v_x), y(v_y), z(v_z)

{}
Punto3D::Punto3D(const Punto3D& p): x(p.x), y(p.y), z(p.z)
{}
Punto3D::~Punto3D()
{}

// restar puntos
Vector3D Punto3D::operator-(const Punto3D& p) const{
    return (Vector3D(x - p.x, y - p.y, z - p.z));
}
// Sumar vector a punto
Punto3D Punto3D::operator+(const Vector3D& v) const
{
    return (Punto3D(x + v.x, y + v.y, z + v.z));
}
// Resta vector a punto
Punto3D Punto3D::operator-(const Vector3D& v) const
{
    return (Punto3D(x - v.x, y - v.y, z - v.z));
}
// MUltiplicar punto por numero
Punto3D Punto3D::operator*(const double n) const 
{
    
}
// Multiplicar numero por punto
Punto3D operator*(double n, const Punto3D& p)
{
    return (Punto3D(n * p.x , n * p.y, n * p.z));
}
void Punto3D::mostrarCoordenadas()
{
    cout <<"<"<< x <<","<< y <<","<< z<<">"<<endl;
}
