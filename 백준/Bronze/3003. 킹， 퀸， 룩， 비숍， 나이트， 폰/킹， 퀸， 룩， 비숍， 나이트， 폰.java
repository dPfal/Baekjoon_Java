import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		for(int i =0;i<6;i++) {
			int a = scan.nextInt();
			if(i==0||i==1) {
				System.out.print(1-a+" ");
			}
			if(i==2||i==3||i==4) {
				System.out.print(2-a+" ");
			}
			if(i==5) {
				System.out.println(8-a);
			}
		}
		
	}

}
