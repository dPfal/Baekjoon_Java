import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		int b = scan.nextInt();
		int A = b/100;
		int B = (b%100)/10;
		int C = (b%100)%10;
		
		System.out.println(a*C);
		System.out.println(a*B);
		System.out.println(a*A);
		System.out.println(a*b);
		
		
	}

}
