import java.util.Scanner;

public class Array {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int [] pre_arr = {1,2,4,4,5};
        int [] arr = new int[4];
//        for(int i = 0 ; i<arr.length;++i){
//            System.out.println(arr[i]);
//        }
        for(int i = 0 ; i<4;++i){
            int ele = in.nextInt();
            arr[i] = ele;
        }
        for(int ele : arr){
            System.out.println(ele);
        }
    }
}
