import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int A = scan.nextInt();
		int B = scan.nextInt();
		String a ;
		a = ((A>B)? ">":(A<B)? "<" : "==");
		System.out.println(a);
	}

}
