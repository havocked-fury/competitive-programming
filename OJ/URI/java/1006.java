import java.util.*;

public class Main{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		float[] weight = {2,3,5};
		float var;
		float ans=0;
		for(int i=0; i<3; i++){
			var = sc.nextFloat();
			ans += var*weight[i];
		}
		ans/=10.0;
		System.out.printf("MEDIA = %.1f\n",ans);
	}
}