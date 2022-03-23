import java.util.Scanner;

public class calculadora {
	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);

		double valor1;
		double valor2;
		String operador;
		double resultado;
		do {
			
			valor1 = scan.nextDouble();
			operador = scan.nextLine();
			valor2 = scan.nextDouble();

			if (operador == "+"){
				resultado = valor1 + valor2;
				System.out.println(resultado);

			} else if (operador == "-"){
				resultado = valor1 - valor2;
				System.out.println(resultado);

			} else if (operador == "*"){
				resultado = valor1 * valor2;
				System.out.println(resultado);
				
			} else if (operador == "/"){
				resultado = valor1 / valor2;
				System.out.println(resultado);
			}

		} while (operador != "x");
	}
}