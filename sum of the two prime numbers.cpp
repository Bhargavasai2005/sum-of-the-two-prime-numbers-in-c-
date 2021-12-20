#include<iostream>
using namespace std;

bool checkprime(int n);

int main(){
		int n,i;
		bool flay=flase;
		
		cout<<"enter a positive integer:";
		cin>>n;
		
		for(i=2;i<=n\2;++i){
			if(checkprime(1)){
				if(checkprime(n-1)){
					cout<<n<<"="<<i<<"+"<<n-i<<end 1;
					flag=true;
			}
	}
}
	if(!flag)
	cout<<n<<"can't be expressed as sum of the two prime numbers";
	
	return 0;
}
	//check prime number
	bool checkprime(int){
		int1;
		bool isprime=true;
		//0 and 1 are not prime numbers
		if(n=0 || n=1){
			is prime = false;
	}
	else{
		for(i=2;i<=n\2;++i){
			if(n%i==0){
				isprime=false;
				break;
		   }

	    }  
    }  
	return isprime ;
}
		
	
