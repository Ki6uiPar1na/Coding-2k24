import java.util.Scanner;

public class B_Books {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int t = sc.nextInt();
        int bookTime[] = new int[n];
        int ans = 0, cn = 0, k = 0;
        for(int i = 0; i < n; i++){
            bookTime[i] = sc.nextInt();
        }
        for(int i = 0; i < n; i++){
            ans += bookTime[i];
            if(ans <= t){
                cn++;
            }
            else{
                ans -= bookTime[k];
                k++;
            }
        }   
        System.out.println(cn);
    }
}