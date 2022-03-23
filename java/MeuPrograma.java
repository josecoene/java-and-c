import java.util.Scanner;

public class MeuPrograma {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		double nota1 = scan.nextDouble();
		double nota2 = scan.nextDouble();
		double media;


		media = (nota1 + nota2) / 2;

		if (media >= 6) {
			System.out.println("Aprovado");
		} else if (media < 6) {
			System.out.println("Reprovado");
		}
		

	}
}