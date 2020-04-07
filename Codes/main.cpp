#include "main.h"



int main(){
	int n,reachTarget; 
	int constant=1000;
	long int NOfIter=1000;
	double opt=0;
	double merit;
	ofstream resultFile;
	ifstream optimums;
	string line,word;
	clock_t t,g;
	g=clock();
	
	for (n = 46; n <144; n++){
		int seq[n];
		NOfIter=1000000;
		sequenceGen(seq,n);
		if(pow(2,n)<NOfIter)
			NOfIter=pow(2,n-1);
		t=clock();
		merit=simulatedAnealing(seq,n,NOfIter);
		t=clock()-t;
		cout<<endl<<"n: "<<n<< " merit: "<<merit<<" CPU time: "<<t<<" clicks = " <<1000.0 * t / CLOCKS_PER_SEC << " ms ";
		int intseq=1;
		int k=1;int num=1;int temp=1;
		
    }
    g=clock()-g;
    resultFile.close();
    cout<<endl<<g<<" clicks = " <<1000.0 * g / CLOCKS_PER_SEC << " ms ";
}