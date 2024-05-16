import java.util.Scanner;

public class A_Very_Big_Sum {
    static Scanner sc = new Scanner(System.in);
    public static void main(String args []){
        int sum = 0;
        int n = sc.nextInt();
        while(n != 0){
            int value = sc.nextInt();
            sum += value;
            n--;
        }
        System.out.printf("%d\n", sum);
    }
}