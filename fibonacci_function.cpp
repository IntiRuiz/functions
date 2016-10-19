#include <iostream>

int fibo (int a)
{
  if (a<=0)
    {return 0;}
  if (a==1)
    {return 1;}
  else 
    {return fibo (a -1) + fibo (a-2);}
}

int main (void)
{
  for (int ii = 0; ii <= 10; ii++)
    {
      std::cout<< fibo (ii)<<", ";
    }
  std::cout<<std::endl;
}
