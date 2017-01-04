import java.util.*;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger a, b, x;
        int ck, test=input.nextInt();
        char c;
        for(int t=1; t<=test; t++){
            a = input.nextBigInteger();
            c = input.next().charAt(0);
            b = input.nextBigInteger();
            ck = b.compareTo(a);
            if(ck>0) x = gcd(a, b);
            else x = gcd(b, a);
            System.out.println(a.divide(x)+" / "+b.divide(x));
        }
    }
    public static BigInteger gcd(BigInteger a, BigInteger b){
        BigInteger x;
        if(b.compareTo(BigInteger.ZERO)==0) return a;
        return gcd(b, a.mod(b));
    }
}
