#include <iostream>
#include <string>

int main(){
    std::string palavra;

    printf("Digite uma palavra");
    scanf("%s", palavra);

    printf("A quantidade de caracteres são: %zu\n", palavra.size());
}