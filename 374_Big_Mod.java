import java.util.*;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while(input.hasNext()){
            BigInteger B,P,M,A;
            B = input.nextBigInteger();
            P = input.nextBigInteger();
            M = input.nextBigInteger();
            A = B.modPow(P, M);
            System.out.println(A);
        }
    }
}
