#include <iostream>
using namespace std;

int main(){
    int array[] = {1, 2, 3, 4, 5, 6};
    int tamanho = sizeof(array) / sizeof(array[0]);

    cout << "O tamanho do Array: " << tamanho << endl;
}