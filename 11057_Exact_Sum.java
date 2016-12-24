import java.util.*;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int test;
        while(input.hasNext()){
            int price[] = new int[1000500];
            int lo=0, hi=0, sub, sum, temp;
            test = input.nextInt();
            for(int i=0; i<test; i++)
                price[i] = input.nextInt();
            int total_mony = input.nextInt();
            sub = temp = total_mony;
            
            for(int i=0; i<test-1; i++){
                for(int j=i+1; j<test; j++){
                    sum = price[i] + price[j];
                    if(sum==total_mony){
                        sub = price[i] - price[j];
                        sub = Math.abs(sub);
                        if(sub<temp){
                            lo = price[i];
                            hi = price[j];
                            temp = sub;
                        }
                    }
                }
            }
            if(lo>hi){
                temp = lo;
                lo = hi;
                hi = temp;
            }
            System.out.println("Peter should buy books whose prices are "+lo+" and "+hi+".");
            System.out.println();
        }
    }
}
