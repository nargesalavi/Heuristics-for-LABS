
#include "labs.h"

int autocorrection(int* seq, int n, int k){
	int c=0;
	for(int i=0; i< n-k; i++)
		c=seq[i]*seq[i+k];
	return c;
}



double energy(int* seq, int n){
	double e=0;
	double c=0;
	for (int k = 0; k < n-1; k++){
		int c=0;
		for(int i=0; i< n-1-k; i++)
			c+=seq[i]*seq[i+k+1];
		e+=pow(c,2);
	}
	return e;	
}

double meritfactor(int* seq, int n){
	double E=energy(seq,n);
	//cout <<"e"<<E;
	double f=pow(n,2)/(2*E);
	//cout <<"seq: ";
	// for (int i = 0; i < n; ++i)
	// {
	// 	//cout<<seq[n-1-i];
	// }
	//cout<<" meritfactor: "<<f<<" energy: "<< E;
	return f;
}