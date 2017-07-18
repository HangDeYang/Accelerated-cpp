//==========================
//Euler method to solve 
//dy/dx = xe^(3x) - 2y
//created by Hang Yang
//=========================
#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

double dydx(double x, double y)
{
   return (x*exp(3*x) - 2.*y);
}


double EulerMethod(int n, double x_min, double x_max, double y_0, ostream& output) 
{
//define variables
	double h,x,w;
//initialization
	h = (x_max-x_min)/n;
	x = x_min;
	w = y_0;
//Euler
	for (int i = 0; i < n; i++)
	{
		x = x_min + i*h; 	
		output << x << " , "<< w << endl;
		w = w + h*dydx(x,w);
	}
	output << x_max << " , " << w << endl;
return w;

}

int main()
{
	EulerMethod(1000,0.,1,0.,cout);
	ofstream myFileStream("test.csv");
	EulerMethod(1000,0.,1,0.,myFileStream);
	myFileStream.close();
	return 0;
}
		
