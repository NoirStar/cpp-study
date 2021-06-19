#include<vector>
#include<iostream>

using namespace std;

int main() {
    vector<int> array = {1,2,3,4,5};

    for (auto &itr : array)
        cout << itr << "";

    array.resize(10);
    
    return 0;
}