#include <iostream>

using namespace std;

int main() {

int arr[10];
int min,max, size;
float average;
for(int i=0;i<10;i++){
cin>>arr[i];
}
 min=arr[0];
max=arr[0];
for(int i =1; i<size ;i++){
	
	    if (arr[i]<min){ 
        	min =arr[i];
	}
		if (arr[i]>max){ 
       max =arr[i];
}
}

 average=(min+max)/2;

cout<< average;
}