#include <iostream>

using namespace std;

 main() {
float n,f,k;
cout<<"please enter your salary:";
cin>>n;
if(n<6000000){
	cout<<"your salary with taxes is:"<<n;
}
	else if(6000000<=n && n<8000000){
		f=n*5;
		k=f/100;
		n=n-k;
	cout<<"your salary with taxes is:"<<n;		
	}
	else if(8000000<=n && n<10000000){
	    f=n*10;
		k=f/100;
		n=n-k;
	cout<<"your salary with taxes is:"<<n;		
	}
	else if(10000000<=n && n<14000000){
	    f=n*15;
		k=f/100;
		n=n-k;
	cout<<"your salary with taxes is:"<<n;
	}
	else if(14000000<=n && n<18000000){
	    f=n*20;
		k=f/100;
		n=n-k;
	cout<<"your salary with taxes is:"<<n;
	}
		else if(18000000<=n && n<25000000){
	    f=n*25;
		k=f/100;
		n=n-k;
	cout<<"your salary with taxes is:"<<n;
	}
		else if(25000000<=n){
	    f=n*35;
		k=f/100;
		n=n-k;
	cout<<"your salary with taxes is:"<<n;
	}
}

