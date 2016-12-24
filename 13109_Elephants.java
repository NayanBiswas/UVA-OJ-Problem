import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int test = input.nextInt();
        for(int x=1; x<=test; x++){
            int N,W,sum=0,cou=0;
            N = input.nextInt();
            W = input.nextInt();
            int M[]= new int[N];
            for(int i=0; i<N; i++)
                M[i]=input.nextInt();
            Arrays.sort(M);
            for(int i=0; i<N; i++){
                if((sum+M[i])>W) break;
                sum+=M[i];
                cou++;
            }
            System.out.println(cou);
        }
    }
    
}
