#include <stdio.h>
#include <locale.h>
struct Aluno{
    char nome[50];
    int matricula;
    float nota;
};
int main(){
    /*para que funcione a acentuação precisso ativar no compilador  usar o comando chcp 65001*/
    setlocale(LC_ALL, "pt_BR.UTF-8"); 
    struct Aluno aluno1 = {"João", 12345, 9.5};
    printf("Nome: %s\n", aluno1.nome);
    printf("Matrícula: %d\n", aluno1.matricula);
    printf("Nota: %.1f\n", aluno1.nota);
    return 0;
}
