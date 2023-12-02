#include <iostream>

using namespace std;

main(){
	int n,m,t;
	
	
	cout<<"please enter your first number:";
	cin>>n;
	
	cout<<"please enter your second number:";
	cin>>m;
	
	
while (m!=0){
	t=n%m;
	n=m;
	m=t;
	
}
	cout<<"n:"<<n;


}