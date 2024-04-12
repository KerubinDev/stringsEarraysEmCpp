#include <iostream> 
#include <string>

int main(){
    std::string str = "Hello, World!";
    int pos = str.find("World");
    if (pos != std::string::npos){
        printf("Encontrado na posição: %d\n", pos);
    } else {
        printf("Não encontrado.\n");
    }
    return 0;
}