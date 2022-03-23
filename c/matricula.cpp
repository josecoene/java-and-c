#include <stdio.h>

int main () {

	int numAlunos;

	struct {
		char nome[50];
		double matricula;
		double nota1, nota2;
		double media;
	} aluno, aux;
	printf("Digite a quantidade de alunos:\n");
	scanf("%d", &numAlunos);

	for (int i=0;i < numAlunos;i++) {

		printf("Digite o nome.\n");
		scanf(" %[^\n]", &aluno.nome);

		printf("Digite a matricula.\n");
		scanf("%d", &aluno.matricula);

		printf("Digite duas notas.\n");
		scanf("%d %d", &aluno.nota1, &aluno.nota2);

		aluno.media = (aluno.nota1 + aluno.nota2) /2;

		printf("Matricula: %d.\n", aluno.matricula);
		printf("Nome: %s.\n", aluno.nome);
		printf("Media: %d.\n", aluno.media);

		aux.nome = aluno.nome;
		aux.matricula = aluno.matricula;
		aux.nota1 = aluno.nota1;
		aux.nota2 = aluno.nota2;
		aux.media = aluno.media;

	}

	return 0;
}