import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int empNum = sc.nextInt();
		float Hours = sc.nextFloat()
			, salPerMonth = sc.nextFloat()
			, ans = salPerMonth*Hours;

		System.out.printf("NUMBER = %d\nSALARY = U$ %.2f\n", empNum, ans);
	}
}