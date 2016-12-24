import java.util.Scanner;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger A, B;
        while(input.hasNext()){
            BigInteger Product;
            A = input.nextBigInteger();
            B = input.nextBigInteger();
            Product = A.multiply(B);
            System.out.println(Product);
        }
    }
    
}
