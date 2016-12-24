import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int test = input.nextInt();
        for(int x = 1; x<=test; x++){
            long res,num = input.nextLong();
            res = number(num);
            if(res==1)
                System.out.println("Case #"+x+": "+num+" is a Happy number.");
            else System.out.println("Case #"+x+": "+num+" is an Unhappy number."); 
        }
    }
    public static long number(long num){
        int sum = 0; 
        while(num>0){
            sum+=(num%10)*(num%10);
            num/=10;
        }
        if(sum<10)
            return sum;
        return number(sum);
    }
}
