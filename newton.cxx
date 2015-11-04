#include <iostream>
#include <complex>
using namespace std;


int main(){
  
  complex<double> z0;
  complex<double> z;
  
  for(double re=-2; re<2; re+=0.01){
    
    for(double im=-2; im<2; im+=0.01){
      
      z0=complex<double>(re,im);
      int n = 0;
	
	for(int i=0; i<400; i++){
	  z = z0 - ((z0*z0*z0)-1.0)/(3.0*z0*z0);
	  
	  
	  if (abs(z-z0)<1e-8) break;
	  
	  z0=z;
	  n++; // n entspricht der Anzahl der durchlaufenden Schritte

	}
	cout << re << "\t" << im << "\t" << n << endl;	      
	 
      }
    }
	// Zur Bestimmung von Nullstellen! Je weniger häufig die for-Schleife durchlaufen wurde,
	//desto schneller nähert sich die Funktion 0 an. Dort sitzen die Nullstellen.

  // Example how to declare a single complex variable:
  //complex<double> c;

  // d = 1 + 2i 
  //complex<double> d = complex<double>(1.0, 2.0); 

  return 0;
}
