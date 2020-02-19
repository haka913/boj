import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {
	static void sqrt(String num) {
		BigInteger one = BigInteger.ONE;
		BigInteger two = new BigInteger("2");
		
		BigInteger target = new BigInteger(num);
		
		BigInteger left = BigInteger.ONE;
		BigInteger right = new BigInteger(num);
		
		BigInteger mid,x;
		while(left.compareTo(right)<=0) {
			mid = (left.add(right)).divide(two);
			x = mid.multiply(mid);
			
			int result = x.compareTo(target);
			if(result==0) {
				System.out.println(mid.toString());
				break;
			}else if(result==-1) {
				left = mid.add(one);
			}else if(result ==1) {
				right = mid.subtract(one);
			}
		}
	}
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String num = br.readLine();
		
		sqrt(num);
	}

}
