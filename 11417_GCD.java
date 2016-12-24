import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while(input.hasNext()){
            int N,G=0;
            N = input.nextInt();
            if(N<=0) break;
            for(int i=1; i<N; i++){
                for(int j=i+1; j<=N; j++){
                    G+=GCD(i,j);
                }
            }
            System.out.println(G);
        }
    }
    public static int GCD(int i, int j){
        for(int x=i; x>=2; x--)
            if(j%x==0 && i%x==0) return x;
        return 1;
    }
}
