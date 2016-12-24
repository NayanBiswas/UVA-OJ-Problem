import java.util.Scanner;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int A, N;
        while(input.hasNext()){
            BigInteger Total = BigInteger.valueOf(0);
            N = input.nextInt();
            A = input.nextInt();
            for(int i=1; i<=N; i++){
                Total = Total.add(BigInteger.valueOf(i).multiply(BigInteger.valueOf(A).pow(i)));
            }
            System.out.println(Total);
        }
    }
}
