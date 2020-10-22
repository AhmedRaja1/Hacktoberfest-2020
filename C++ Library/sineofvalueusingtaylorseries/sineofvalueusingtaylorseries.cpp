#include<iostream>
#include<cmath>
using namespace std;


double radians(double degrees)  
{
    double radians;
    double const pi = 3.14159265358979323846;
    radians = (pi/180)*degrees;
    return radians;
}
double mysine(double num, double precision = 19)
{
    double value = 0;

    for(int n = 0; n < precision; n++){

    value += pow(-1.0, n) * pow(num, 2*n+1) / factorial(2*n + 1);
    }

    return value;

}
double factorial(int x)  
{
    double fact = 1;
    for(; x >= 1 ; x--)
    {
        fact = x * fact;
    }
    return fact;
}

double power(double x,double n)  
{
    double output = 1;
    while(n>0)
    {
         output =( x*output);
         n--;
    }
    return output;
}
double sin(double radians)  
{
   double a,b,c;
   float result = 0;
   for(int y=0 ; y!=9 ; y++)
   {
      a=  power(-1,y);
      b=  power(radians,(2*y)+1);
      c=  factorial((2*y)+1);
      result = result+ (a*b)/c;
   }
   return result;
}
double n,output;

int main()
{
	cout<<"TAYLOR SERIES OF SIN FUCTION:"<<endl;
    cout<<"enter the valueO\t";
    cin>>n;

    n = radians(n);
    cout<< "\nthe value in radians is\t"<< n << "\n";
    cout<<"value of sine using taylor series :"<<mysine(n)<<endl;
    int result=mysine(n);
	 output = sin(n);

    cout<< "\nsine of the given value using functions is "<< output;
    cout<<"value of sine using taylor series                     sine of the given value using functions"<<endl;
	cout<<mysine(n)<<"                       "<<output;  
    
    return 0;
}

