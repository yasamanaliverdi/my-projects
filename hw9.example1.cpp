#include <iostream>

using namespace std;

int main() {
int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int num;
cin >> num;
int index = 0;
while (index < 9 && arr[index] < num) {
index++;
}

for (int i = 9; i > index; i--) {
	arr[i] = arr[i - 1];
}
arr[index] = num;
for (int i = 0; i < 10; i++) {
cout << arr[i] << " ";
}
}
