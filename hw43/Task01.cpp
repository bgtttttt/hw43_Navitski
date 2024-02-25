#include <iostream>
#include <string>

using namespace std;

void randArray(int* arr, int min, int max, int size);
string ArrayToString(int* arr, int size);
int GetIndexOfLastMaxAbs(int* arr, int size);
int GetIndexOfFirstMinAbs(int* arr, int size);
int main() {
	srand(time(0));
	int size, min, max;
	do {
		cout << "Input size, min and max value:\n";
		cin >> size >> min >> max;
	} while (size <= 0);

	int* arr = new int[size];
	randArray(arr, min, max, size);
	cout << ArrayToString(arr, size);
	int IndexMax = GetIndexOfLastMaxAbs(arr, size);
	int IndexMin = GetIndexOfFirstMinAbs(arr, size);
	if (IndexMin > IndexMax) { swap(IndexMax, IndexMin); }

	int sum = 0;
	for (int i = IndexMin + 1; i < IndexMax; i++) {
		sum += arr[i];
	}

	cout << "\nSum of vector values between min and max value: " << sum;
	return 0;
}

void randArray(int* arr, int min, int max, int size) {
	for (int i = 0; i < size; i++) {
		*(arr + i) = rand() % (max - min + 1) + min;
	}
}
string ArrayToString(int* arr, int size) {
	string s = "";
	for (int i = 0; i < size; i++) {
		s += to_string(arr[i]) + " ";
	}
	return s;
}
int GetIndexOfLastMaxAbs(int* arr, int size) {
	int maxIndex = size - 1;
	for (int i = size - 1; i >= 0; i--) {
		if (abs(arr[i]) > abs(arr[maxIndex])) {
			maxIndex = i;
		}
	}
	return maxIndex;
}
int GetIndexOfFirstMinAbs(int* arr, int size) {
	int minIndex = 0;
	for (int i = 0; i < size; i++) {
		if (abs(arr[i]) < abs(arr[minIndex])) {
			minIndex = i;
		}
	}
	return minIndex;
}