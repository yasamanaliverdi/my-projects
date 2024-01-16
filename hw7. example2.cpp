#include <iostream>

# include<cmath>
using namespace std;

int main() {
		int x,y,i,j;

	cout<<"please enter your number:";
	cin>>x>>y;
	if (x==y){
		cout<<"your  left over is 0 && your ration is 1";
	}
	i=0;
	j=0;
	
	while (x>=y){
		x=x-y;
		i++;
		
		
	}
	cout<<"your  left over is"<<j;
	
cout<<"your ration is "<<i;
}