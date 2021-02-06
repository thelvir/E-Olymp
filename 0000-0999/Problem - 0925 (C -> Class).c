#include <stdio.h>

#include <math.h>

 

class Point {

public:

  Point(double x, double y);

  double GetX();

  double GetY();

  double GetDist(Point &a);

  void Read();

private:

  double x;

  double y;

};

 

Point::Point(double x = 0, double y = 0) {

  this->x = x;

  this->y = y;

}

 

double Point::GetX() {

  return x;

}

 

double Point::GetY() {

  return y;

}

 

double Point::GetDist(Point &a) {

  return sqrt((this->x - a.GetX()) * (this->x - a.GetX()) +

              (this->y - a.GetY())*(this->y - a.GetY()));

}

 

void Point::Read() {

  scanf("%lf %lf",&x,&y);

}

 

class Triangle {

public:

  Triangle(Point x, Point y, Point z);

  double GetPerimeter();

  double GetArea();

private:

  double a;

  double b;

  double c;

};

 

Triangle::Triangle(Point x, Point y, Point z) {

  a = x.GetDist(y);

  b = y.GetDist(z);

  c = z.GetDist(x);

}

 

double Triangle::GetPerimeter() {

  return a + b + c;

}

 

double Triangle::GetArea() {

  double p = GetPerimeter() / 2;

  return sqrt(p * (p - a) * (p - b) * (p - c));

}

 

int main(void)

{

  Point A, B, C;

  A.Read();

  B.Read();

  C.Read();

  Triangle tri(A,B,C);

  printf("%.4lf %.4lf\n",tri.GetPerimeter(),tri.GetArea());

  return 0;

}
