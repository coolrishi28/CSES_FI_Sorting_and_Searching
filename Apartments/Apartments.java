import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        int len1 = sc.nextInt();
        int len2 = sc.nextInt();
        int k = sc.nextInt();
 
        int[] arr1 = new int[len1];
        int[] arr2 = new int[len2];
 
        for (int i = 0; i < len1; i++) {
            arr1[i] = sc.nextInt();
        }
        for (int i = 0; i < len2; i++) {
            arr2[i] = sc.nextInt();
        }
 
        Arrays.sort(arr1);
        Arrays.sort(arr2);
 
        int i = 0, j = 0, ans = 0;
 
        while (i < len1 && j < len2) {
            int left = arr1[i] - k;
            int right = arr1[i] + k;
 
            if (arr2[j] < left) {
                j++;
            } else if (arr2[j] > right) {
                i++;
            } else {
                i++;
                j++;
                ans++;
            }
        }
 
        System.out.println(ans);
        sc.close();
    }
}
