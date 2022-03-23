import java.util.Scanner;

public class parimpar {
	public static void main(String[] args) {

		Scanner scan = new Scanner (System.in);

		int num = scan.nextInt();
		String par = "Par";
		String impar = "Impar";
		String resultado;
		int resto;
		resto = num % 2;

		if (resto == 0) {
			resultado = par;
		} else {
			resultado = impar;
		}
		System.out.println(resultado);
	}
}