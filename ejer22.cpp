#include <iostream>

using std::cout;
using std::cin;
using std::endl;

float gauss(float x);


float gauss(float x){
	float sig=0.1, x0=1.0;
	float w=2*sig*sig;
	int i;
	float v=(x-x0)*(x-x0)/w			

	return exp(-v)
}

void avanza(double x; double *uant, double *uneo, int nx, double deltat, double deltax, int D){

	if(x==0.0 || x=2.0){
		uneo[i]=0.0;
		uant[i]=0.0;
}
	else{
		for(i=1; i<nx-1; i++){
			uneo[i]=uant[i]+(deltat*D)*((1.0/(deltax*deltax))*(uant[i+1]-2*uant[i]+uant[i-1]));
			uneo[i]=uant[i];
}
}
}

int main(){
	int D=1.0, i;

	double deltat=0.01, T=0.5, t=0.0;

	double minx=0.0, maxx=2.0, deltax=0.01;

	int nx=(maxx-minx)/(deltax-1);

	double *uant, *uneo;

	uant=new double[nx];
	uneo= new double[nx];






}

