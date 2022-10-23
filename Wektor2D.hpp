#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
 public: 
    Wektor2D() 
    {
        x=0.0;
        y=0.0;
    }
    Wektor2D(double a, double b)
    {
        x=a;
        y=b;
    }
    void setX(double a) {x=a;};
    void setY(double b) {y=b;};
    double getX() {return x;};
    double getY() {return y;};
    double x;
    double y;
 friend Wektor2D operator+(Wektor2D a, Wektor2D b)
    {
    Wektor2D w1;
    w1.x = a.x + b.x;
    w1.y = a.y + b.y;
    return w1;
    }
 friend double operator*(Wektor2D a, Wektor2D b)
    {
    double iloczyn;
    iloczyn = a.x * b.x;
    iloczyn += a.y * b.y;
    return iloczyn;
    }
 private:
    double x;
    double y;
};
int main()
{
Wektor2D v1{};           // Konstruktor domyślny, wektor o wsp. [0, 0]
v1.setX(1.);             // setter
v1.setY(1.);             // setter
double x1 = v1.getX();   // getter
double y1 = v1.getY();   // getter

Wektor2D v2{2., 2.}; // Konstruktor nadający współrzędne

Wektor2D sum = v1 + v2; // dodawanie wektorów

double prod = v1 * v2; // iloczyn skalarny
}
