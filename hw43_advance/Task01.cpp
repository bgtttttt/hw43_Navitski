//#include <iostream>
//
//using namespace std;
//
//void swap_value(int a, int b) {
//    int t = a;
//    a = b;
//    b = t;
//}
//void swap_pointer(int* a, int* b) {
//    int t = *a;
//    *a = *b;
//    *b = t;
//}
//void swap_reference(int& a, int& b) {
//    int t = a;
//    a = b;
//    b = t;
//}
//
//int main() {
//    int x = 5, y = 10;
//    swap_value(x, y);
//    cout << "x: " << x << ", y: " << y << endl; //не меняет
//    swap_pointer(&x, &y);
//    cout << "x: " << x << ", y: " << y << endl; 
//    swap_reference(x, y);
//    cout << "x: " << x << ", y: " << y << endl; 
//
//    return 0;
//}
