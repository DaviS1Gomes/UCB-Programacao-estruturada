// ALUNO: DAVI DE SOUZA GOMES
// MATRICULA: UC21103807

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define CharLimit 50

int main() {
	FILE *file;
	char fileLine[500];
	char *fileResult;
	char phraseOne[CharLimit];
	char phraseTwo[CharLimit];
	char phraseThree[CharLimit];
	char phraseFour[CharLimit];
	
	printf("Conteudo atual:\n");
	
	file = fopen("arq02.txt", "rt");
	
	if (file == NULL) {
		printf("[ERRO] Erro na abertura do arquivo!");
		return 1;
	}
	
	int i = 1;
	
	while (!feof(file))
	{
	    fileResult = fgets(fileLine, 100, file);
	    
	    if (fileResult) {
	    	printf("Linha %d: %s", i, fileLine);
	    	fprintf(file, "%s", fileLine);
		}
		
	    i++;
	}
	
	fclose(file);
	
	printf("\nInsira uma frase: ");
	fgets(phraseOne, 255, stdin);
	
	i = 0;

	while (phraseOne[i]) {
    	phraseOne[i] = toupper(phraseOne[i]);
    	i++;
    }
    
    file = fopen("arq02.txt", "a");
	    
    fprintf(file, "%s", phraseOne);
	fprintf(file, "%s", " ");
	
	fclose(file);
		
	printf("\nInsira uma frase: ");
	fgets(phraseTwo, 255, stdin);
	
	i = 0;

	while (phraseTwo[i]) {
    	phraseTwo[i] = toupper(phraseTwo[i]);
    	i++;
    }
    
    file = fopen("arq02.txt", "a");
	    
    fprintf(file, "%s", phraseTwo);
	fprintf(file, "%s", " ");
	
	fclose(file);
	
	printf("\nInsira uma frase: ");
	fgets(phraseThree, 255, stdin);
	
	i = 0;

	while (phraseThree[i]) {
    	phraseThree[i] = toupper(phraseThree[i]);
    	i++;
    }
    
    file = fopen("arq02.txt", "a");
	    
    fprintf(file, "%s", phraseThree);
	fprintf(file, "%s", " ");
	
	fclose(file);
	
	printf("\nInsira uma frase: ");
	fgets(phraseFour, 255, stdin);
	
	i = 0;

	while (phraseFour[i]) {
    	phraseFour[i] = toupper(phraseFour[i]);
    	i++;
    }
    
    file = fopen("arq02.txt", "a");
	    
    fprintf(file, "%s", phraseFour);
	fprintf(file, "%s", " ");
	
	fclose(file);
	
	printf("Dados gravados com sucesso!");
	
	return 0;
}


