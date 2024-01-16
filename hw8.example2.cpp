#include <iostream>

using namespace std;

int main() {
int arr1[5],arr2[5];	
 arr1[5]=arr2[5];
for (int i=0;i<5;i++){
	cin>>arr1[i];
}
for (int i=0;i<5;i++){
	cin>>arr2[i];
}
   for (int i=0;i<5;i++){
 int temp =arr1[i];
 arr1[i]=arr2[i];
 arr2[i]=temp;
}
for (int i=0;i<5;i++){
	
cout<<arr1[i];
}
for (int i=0;i<5;i++){
cout<<arr2[i];
}
}
