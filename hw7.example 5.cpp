#include <iostream>

# include<cmath>
using namespace std;

int isprime( int n){
	if (n<=1){
		return false;
	}
	return true;
}
int main() {
	int  limited;
	cin>>limited;
	int sum=0;
	for(int i=2;i<limited;i++){
		if(isprime(i)){
			sum+=i;
		}
	}
cout<<sum;
}