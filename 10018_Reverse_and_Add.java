import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long x;
        int test = input.nextInt();
        for(int j=0; j<test; j++){
            x = input.nextLong();
            int i;
            for(i=1; i<=1000; i++){
                x += rev(x);
                long f=x,f1=0;
                while(f!=0){
                    f1 = (f1*10)+f%10;
                    f/=10;
                }
                if(x == f1)
                    break;
            }
            System.out.println(i+" "+x);
        }
    }
    public static long rev(long x)
    {
        long x1=0;
        while(x!=0){
            x1 = (x1*10) + x%10;
            x/=10;
        }
        return x1;
    }
}
