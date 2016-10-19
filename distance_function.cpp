#include <iostream>
#include <cmath>

template <class T>
double distance (T x1, T y1, T x2, T y2)
{
  T disx = 0;
  T disy = 0;
  double dist = 0;

  if (x1 > x2)
    {disx = x1 - x2;}
  else 
    {disx = x2 - x1;}
  if (y1 > y2)
    {disy = y1- y2;}
  else 
    {disy = y2- y1;}

  dist = std::sqrt((std::pow (disx,2))+(std::pow(disy, 2)));
  return dist ;

}

int main (void)
{ 
  int a,b;
  int x,y;

  std::cout<<"ingrese la primera coordenada: ";
  std::cin>>a;
  std::cout<<", ";
  std::cin>>b;

  std::cout<<"ingrese la segunda coordenada: ";
  std::cin>>x;
  std::cout<<", ";
  std::cin>>y;

  std::cout<<"la distancia entre los puntos es: "<<distance <int> (a,b,x,y)<<std::endl;

return 0;
}

