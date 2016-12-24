import java.util.Scanner;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger sum, Total_sum = BigInteger.ZERO;
        while(true){
            sum = input.nextBigInteger();
            if(sum.compareTo(BigInteger.valueOf(0))==0)
                break;
            else
                Total_sum = Total_sum.add(sum);
        }
        System.out.println(Total_sum);
    }
}
