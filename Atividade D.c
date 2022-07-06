#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[40];
    float finalScore;
}Student;

int main() {
    FILE* aqr = fopen("arq.txt", "r");
    
    if(aqr == NULL) {
        fprintf(stderr, "Erro ao abrir o Arq.txt.");
        return 1;
    }

    int n;
    char name[40];
    float finalScore;
    
    printf("Insira o número de alunos: ");
    scanf("%d", &n);
    
    Student students[n];
    
    int i;
    
    for (i = 0; i < n; i++) {
        printf("Insira o nome do aluno: ");
        fgets(name, 40, stdin);
        
        printf("Insira a nota final do aluno: ");
        scanf("%f", &finalScore);
        
        students[i];
    
    }
  
    fclose(aqr);

    return 0;
}