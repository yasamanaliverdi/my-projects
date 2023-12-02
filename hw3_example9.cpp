#include <iostream>

using namespace std;

main(){
	int n;

	cout<<"please enter your first number:";
	cin>>n;
	
    if(n<3){
	cout<<"n:1";
	}
	
    if(n>=3) {
	int a=1;
	int b=1;
    int i=2;
	int fib;
	
while(i!=n)	{

	fib=a+b;
	a=b;
	b=fib;  
	i=i+1;
	}
	while (i==n){
	cout<<"fib is:"<<fib;	
	break;
	}
	}
	}
    


	
	

	           
	  

	
    
    
   
	

	
	
	