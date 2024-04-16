#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3};
    arr[3] = 4;
    arr[4] = 5;

    cout << "O ultimo elemento foi: " << arr[4] << endl;

    return 0;
}