import java.util.Scanner;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int F;
        while(input.hasNext()){
            BigInteger A, B, C;
            A=BigInteger.valueOf(0);
            B=BigInteger.valueOf(1);
            C=BigInteger.valueOf(0);
            F = input.nextInt();
            for(int i=1; i<=F; i++){
                C = A.add(B);
                A=B;
                B=C;
            }
            System.out.println("The Fibonacci number for "+F+" is "+A);
        }
    }
}
