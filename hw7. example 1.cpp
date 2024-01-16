#include <iostream>

# include<cmath>
using namespace std;


int main() {
	int x,y,i;
	int p=1 ;
	cout<<"please enter your number:";
	cin>>x>>y;
	for(i=1;i<=y;i++){
		p=p*x;
	}
	cout<<p;
	

}