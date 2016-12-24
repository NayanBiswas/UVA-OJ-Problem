import java.util.*;
import java.math.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while(input.hasNext()){
            int n, i, l, flag=0;
            BigDecimal x = input.nextBigDecimal();
            n  = input.nextInt();
            x = x.pow(n);
            char[] s = x.toPlainString().toCharArray();
            if (s[0] == '0') flag=1;
            for (l=s.length; l>=0; l--)
                if(s[l-1]!='0') break;
            for (i=flag; i<l; i++)
                System.out.print(s[i]);
            System.out.println("");
        }
    }
}
