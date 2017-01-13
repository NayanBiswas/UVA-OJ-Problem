import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input  = new Scanner (System.in);
        int n, x, i;
        System.out.println("PERFECTION OUTPUT");
        while(true){
            n=input.nextInt();
            if(n==0) break;
            boolean ck=false;
            x=0;
            for(i=1; i<n; i++){
                if(n%i==0) x+=i;
                if(x>n){
                    ck=true;
                    break;
                }
            }
            System.out.printf("%5d  ", n);
            if(ck==true) System.out.println("ABUNDANT");
            else if(x==n) System.out.println("PERFECT");
            else System.out.println("DEFICIENT");
        }
        System.out.println("END OF OUTPUT"); 
    }
}
