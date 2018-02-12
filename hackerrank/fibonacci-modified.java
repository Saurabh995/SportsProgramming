import java.util.*;
import java.math.BigInteger;
class modiefied_fibonacci{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);  		
		int  N;
		String a, b,c;
		

		
		a=sc.next();
		b=sc.next();
		N=sc.nextInt();
		BigInteger a1 =new BigInteger(a);
		BigInteger b1 =new BigInteger(b);
		BigInteger c1=new BigInteger("1");
		
		for(int i=3;i<=N;i++){
			
			c1=a1.add(b1.pow(2));
			a1=b1;
			b1=c1;
		}
		
		
		System.out.println(c1);
	}
}