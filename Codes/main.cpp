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
  	//resultFile.open ("rsltsSA1Million_T_log_2M.txt");
  	//optimums.open("resultFile2.txt");
  	// for (int i = 3; i < 50; ++i)
  	// {
  	// 	NOfIter+=ceil(constant*i*log2(i));
  	// 	cout<<"NOfIter: "<<NOfIter<<" 2 power: "<<pow(2,i)<<endl;
  	// }
    //#pragma omp parallel for
 //    std::random_device rd;  //Will be used to obtain a seed for the random number engine
 //    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()

 //    while(true){
 //    	n++;
 //    	if(n>NOfIter)
 //    		break;

	//     std::uniform_int_distribution<> dis(1.0, n);
	//     int k=dis(gen);
	//     cout<<k <<" "<<k<< " "<<endl;
	// }
	g=clock();
	
	for (n = 46; n <144; n++){
		int seq[n];
		NOfIter=1000000;
		sequenceGen(seq,n);
		if(pow(2,n)<NOfIter)
			NOfIter=pow(2,n-1);
		
		// optimums>>word>>opt;
		// //cout<<word<<" "<<opt<<" ";
		// optimums>>word>>opt;
		// //cout<<word<<" "<<opt<<" "<<endl;
		// getline(optimums,line);
		t=clock();
		merit=simulatedAnealing(seq,n,NOfIter);
		t=clock()-t;
		//merit=exhustiveSearch(seq,n);
		//resultFile <<endl<<"n: "<<n<< " merit: "<<merit<<" CPU time: "<<t<<" clicks = " <<1000.0 * t / CLOCKS_PER_SEC << " ms ";
		       cout<<endl<<"n: "<<n<< " merit: "<<merit<<" CPU time: "<<t<<" clicks = " <<1000.0 * t / CLOCKS_PER_SEC << " ms ";
		int intseq=1;
		int k=1;int num=1;int temp=1;
		// for (int i = 0; i < n; ++i){
		// 	// if(seq[i]!=seq[i-1]){
		// 	// 	intseq+=pow(10,k)*num;
		// 	// 	k++;
		// 	// 	num=1;
		// 	// }
		// 	// else
		// 	// 	num++;

	 //    	resultFile << seq[n-1-i] << ' ';
	 //    	//cout<< seq[n-1-i] << ' ';
	 //    }
    }
    g=clock()-g;
    resultFile.close();
    cout<<endl<<g<<" clicks = " <<1000.0 * g / CLOCKS_PER_SEC << " ms ";
    //optimums.close();
}