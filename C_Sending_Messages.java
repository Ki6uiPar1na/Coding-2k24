import java.util.*;

public class C_Sending_Messages {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int batteryCharge = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();

        int message[] = new int[n];
        for(int i = 0; i < n; i++){
            message[i] = sc.nextInt();
        }
        int cn = 1;
        batteryCharge -= b;
        for(int i = 1; i < n; i++){
            if(Math.abs(message[i] - message[i - 1]))
        }
    }
}