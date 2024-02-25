#include <iostream>
#include <string>

using namespace std;

void randUnicArray(int* arr, int min, int size);
string ArrayToString(int* arr, int size);
int GetIndexOfMax(int* arr, int size);
int GetIndexOfMin(int* arr, int size);

int main() {
	srand(time(0));
	int size, min, max;
	cout << "Input min and max value:\n";
	cin >> min >> max;
	size = abs(max - min);

	int* arr = new int[size];
	randUnicArray(arr, min, size);
	cout << "Before:\n";
	cout << ArrayToString(arr, size);
	int IndexMax = GetIndexOfMax(arr, size);
	int IndexMin = GetIndexOfMin(arr, size);
	swap(arr[IndexMin], arr[IndexMax]);

	cout << "\nAfter:\n";
	cout << ArrayToString(arr, size);
	return 0;
}

void randUnicArray(int* arr, int min, int size) {
	for (int i = 0; i < size; i++) {
		*(arr + i) = min + i;
	}
	for (int i = 0; i < size; i++) {
		int a = rand()%(size);
		int b = rand() % (size);
		int t = arr[a];
		arr[a] = arr[b];
		arr[b] = t;
		
	}
}
string ArrayToString(int* arr, int size) {
	string s = "";
	for (int i = 0; i < size; i++) {
		s += to_string(arr[i]) + " ";
	}
	return s;
}
int GetIndexOfMax(int* arr, int size) {
	int maxIndex = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > arr[maxIndex]) {
			maxIndex = i;
		}
	}
	return maxIndex;
}
int GetIndexOfMin(int* arr, int size) {
	int minIndex = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < arr[minIndex]) {
			minIndex = i;
		}
	}
	return minIndex;
}