#include <iostream>
 using namespace std;
int fact( int n){
	if(n==0){
	return 1;
}
else {
	return n*fact(n-1);
}
}
float sin(float   x){
 	float  m=x*x*x/fact(3);
 	float n=x*x*x*x*x/fact(5);
 	 float b=x*x*x*x*x*x*x/ fact(7);
 	 float r=x-m+n-b;
 
 return r ;
 	
 }
float  cos( float x){
 	float m=x*x/fact(2);
 	float n=x*x*x*x/fact(4);
 float	 b=x*x*x*x*x*x/ fact(6);
 	float  result=1-m+n-b;
 
 return result ;
 	
 }
 
 
 int main(){
 	float x;
 	
 	  cin>>x;
 	 float tan=sin(x)/cos(x);
 	cout<<tan;
 }
 
 
  



