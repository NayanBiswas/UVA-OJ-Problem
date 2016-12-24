import java.math.*;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x;
        while(input.hasNext()){
            BigInteger A,B,C;
            x = input.nextInt();
            A =  BigInteger.valueOf(0);
            B = BigInteger.valueOf(1);
            for(int i=0; i<x; i++){
                C = A.add(B);
                A = B;
                B = C;
            }
            System.out.println(A);
        }
    }
}
