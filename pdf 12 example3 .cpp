#include <iostream>

using namespace std;

int lala (int x,int y) {

while (y!=0){
	int m=y;
	y=x%y;
	x=m;
}
return x;
}

int main() {
	int m,n;
		cout<<"please enter your first number:";
	cin>>m;
	
	cout<<"please enter your second number:";
	cin>>n;
	
		int a=lala(m,n);
		cout<< "the result is:"<<a;
		return 0;
		
	return 0;
}