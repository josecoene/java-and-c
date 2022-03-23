import java.util.Scanner;

public class mediaJava {
	public static void main(String[] args) {

		Scanner scan = new Scanner (System.in);

		System.out.println("Digite a primeira nota");
		int nota1 = scan.nextInt();
		System.out.println("Digite o primeiro peso");
		int peso1 = scan.nextInt();

		System.out.println("Digite a segunda nota");
		int nota2 = scan.nextInt();
		System.out.println("Digite o segundo peso");
		int peso2 = scan.nextInt();

		System.out.println("Digite a terceira nota");
		int nota3 = scan.nextInt();
		System.out.println("Digite o terceiro peso");
		int peso3 = scan.nextInt();

		int media;

		media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);


		System.out.print("A sua media final eh: ");
		System.out.println(media);

	}
}