import java.util.*;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger fact, temp;
        int num, i;
        while(input.hasNext()){
            fact = BigInteger.ONE;
            num = input.nextInt();
            for(i=1; i<=num; i++){
                temp = BigInteger.valueOf(i);
                fact = fact.multiply(temp);
            }
            System.out.println(num+"!");
            System.out.println(fact);
        }
    }
}
