#include <iostream>
#include <string>

int main(){
    std::string str = "Olá, Mundo!";
    std::string substr = str.substr(7, 6);
    printf("Substring: %s\n", substr.c_str());
    return 0;
}