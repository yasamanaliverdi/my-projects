#include <iostream>

using namespace std;

int lala (int x,int y) {

   		int p=1;
   		for (int i=0;i<y;i++){
		  p*=x;
   	
}
return p;
}
	
int main() {
	int x,y;

		cout<<"please enter your first number:";
	cin>>x;
	
	cout<<"please enter your second number:";
	cin>>y;
	
	
	int p=lala(x,y);
		cout<< "the result is:"<<p;
		return 0;
		
	 
	 
	
	
	
}