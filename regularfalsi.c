//gcc 5.4.0
// edit gcc regular_falsi.c -lm

#include<stdio.h>
#include<math.h>
float x2;
float f(float x)	// equation function..... change according to question
{
    return pow(x,3) - (2*pow(x,2)) - 5;
}

float reg_falsi(float x0,float x1)	//regular falsi calculation
{
    if ( f(x0)*f(x1) < 0)
    {
      x2= x1-(f(x1)/(f(x1)-f(x0))) * (x1 - x0);
      if(fabs(f(x2))<= 0.0001)
      {
          printf("\nRoot : %f ",x2);	// print root value
          return 0 ;
      }
        
    
    if((f(x0)*f(x2)) > 0)
        reg_falsi(x2,x1);
    else
        reg_falsi(x0,x2);
    }
        
}

int main(void)	//main function
{
  float x0;
  for(x0=0;x0<10;x0++)
      reg_falsi(x0,x0+1);
        
}
