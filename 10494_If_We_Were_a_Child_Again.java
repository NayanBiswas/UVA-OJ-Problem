import java.util.*;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger x, n;
        char c;
        while(input.hasNext()){
            x = input.nextBigInteger();
            c = input.next().charAt(0);
            n = input.nextBigInteger();
            if(c=='/')
                System.out.println(x.divide(n));
            else
                System.out.println(x.mod(n));
        }
    }
}
