#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

int main(){
  int n=100;
  complex <double> p[n];
  complex <double> j= complex <double> (0,1);
  double dphi = 2*M_PI/(n-1);
  
  //Aufgabe 1a
  //for(int i=0; i<n; i++){
    //p[i]=exp(-i*dphi*j);
    //cout << real(p[i]) << '\t' << imag(p[i]) << '\t'<< abs(p[i]) << endl;
  //}
  
  //Aufgabe 1b
  for(int i=0; i<n; i++){
    complex <double> g = complex <double> (1, 1); 
    p[i] = tan((dphi*i-M_PI)*g);
    cout << real(p[i]) << '\t' << imag(p[i]) << '\t'<< abs(p[i]) << endl;
  }
    
  // Example how to declare a single complex variable:
  //complex<double> c;

  // d = 1 + 2i 
 // complex<double> d = complex<double>(1.0, 2.0); 

  return 0;
}
