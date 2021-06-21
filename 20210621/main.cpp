#include <iostream>
#include <array>
#include <tuple>

using namespace std;

// int* allocateMemory(int size) {
//     return new int[size];
// }

// int& get(array<int, 100>& my_array, int idx) {
//     return my_array[idx];
// }
// std::tuple<int, double> getTuple() {
//     int a = 10;
//     int b = 3.14;
//     return std::make_tuple(a,b);
// }

// inline int min(int x, int y) {
//     return x>y?y:x;
// }

int add(int x, int y) {
    return x+y;
}
double add (double x, double y) {
    return x+y;
}

int main() {
    
    cout << min(1,2) << endl;


    // auto[a,b] = getTuple();
    // cout << a << endl;
    // std::tuple<int,double> my_tp = getTuple();
    // cout << std::get<0>(my_tp) << endl;
    // array<int, 100> my_array;
    // my_array[30] = 10;
    // get(my_array, 30 )= 1024;

    // cout << my_array[30] << endl;
    return 0;
}