#include <iostream>

using namespace std;
int main() {
int arr[10] = {3, 8, 1, 6, 4, 5, 2, 9, 7, 10}
int firstMin = INT_MAX;
int secondMin = INT_MAX;


for (int i = 0; i < 10; i++) {
if (arr[i] < firstMin) {
secondMin = firstMin;
firstMin = arr[i];
} else if (arr[i] < secondMin && arr[i] !
secondMin = arr[i];
}
}
if (secondMin == INT_MAX) {
	cout << endl;
} else {
cout   << secondMin <<
}

}