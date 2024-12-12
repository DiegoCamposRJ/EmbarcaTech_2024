#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[]){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    printf("Olá mundo!");
    return 0;
}
