#include <stdio.h>
#define MAX 50

struct cadastro {
	char nome[MAX];
	double matricula;
	double nota1, nota2;
	double media;
};

void consulta(cadastro vetor[MAX], int numAlunos);

int main() {

	cadastro aluno[MAX];
	int numAlunos;
	printf("Digite a qtd de alunos.\n");
	scanf("¨%d", &numAlunos);
	consulta(aluno, numAlunos);

	return 0; 
}

void consulta(cadastro, int numAlunos) {
	for(int i=0;i < numAlunos;i++) {

		scanf(" %[^\n]", cadastro[i].nome);
		scanf("%d", &cadastro[i].matricula);
		scanf("%d %d", &cadastro[i].nota1, &cadastro[i].nota2);

		cadastro.media = (cadastro[i].nota1 + cadastro[i].nota2)/2;

		printf("%d, %s, %d", cadastro[i].matricula, cadastro[i].nome, cadastro[i].media);
	}
}