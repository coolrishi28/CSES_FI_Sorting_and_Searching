import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int len = sc.nextInt();
        int[] arr = new int[len];

        HashSet<Integer> set = new HashSet<>();

        for (int i = 0; i < len; i++) {
            arr[i] = sc.nextInt();
            set.add(arr[i]);
        }
        System.out.println(set.size());
        
        sc.close();
    }
}
