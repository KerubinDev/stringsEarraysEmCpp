#include <iostream>
#include <string>

int main(){
    std::string str1 = "Olá, ";
    std::string str2 = "Mundo!";
    std::string result = str1 + str2;
    printf("Concatonado: %s\n", result.c_str());
    return 0;
}