import java.util.*;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger number, ans;
        int n = input.nextInt();
        for(int i=0; i<n; i++){
            number = input.nextBigInteger();
            ans = SQRT(number); /*SQRT is a user define function*/
            if(i!=0) System.out.println();
            System.out.println(ans);
        }
    }
    public static BigInteger SQRT(BigInteger x){
        if (x.equals(BigInteger.ZERO) || x.equals(BigInteger.ONE)) 
            return x;
        BigInteger two = BigInteger.valueOf(2);
        BigInteger y;
        /*This is very power full square root for loop*/
        /*You can found sqrt using this for loop*/
        for (y = x.divide(two);  y.compareTo(x.divide(y))>0;){
            y=((x.divide(y)).add(y)).divide(two);
        }
        return y;
    }
}