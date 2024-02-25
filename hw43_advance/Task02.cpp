#include <iostream>

using namespace std;

int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            ++count;
        }
    }
    return count;
}
double sum_less_than_avg(int* arr, int size) {
    double avg = 0;
    for (int i = 0; i < size; ++i) {
        avg += arr[i];
    }
    avg /= size;

    double sum = 0;
    for (int i = 0; i < size; ++i) {
        if (abs(arr[i]) < avg) {
            sum += arr[i];
        }
    }
    return sum;
}
double product_positive_odd_places(int* arr, int size) {
    double product = 1;
    for (int i = 0; i < size; i += 2) {
        if (arr[i] > 0) {
            product *= arr[i];
        }
    }
    return product;
}


int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = 10;

    cout << "\nNum of even numbers: " << count_even(arr, size) << endl;
    cout << "\nSumm of elem less avg arithm: " 
        << sum_less_than_avg(arr, size) << endl;
    cout << "\nProduct of elem on even places: " 
        << product_positive_odd_places(arr, size) << endl;


    return 0;
}
