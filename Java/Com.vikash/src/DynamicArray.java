import java.util.ArrayList;
import java.util.Scanner;

public class DynamicArray {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> v1 = new ArrayList<>(33);
        v1.add(3);
        v1.add(32);
        v1.add(132);
        v1.add(1132);
        v1.add(312);
        v1.add(11132);
        int  ele1 = v1.get(0);
        System.out.println(v1.get(0));
        for(int ele : v1){
            System.out.println(ele);
        }

        ArrayList<Integer> new_array = new ArrayList<>();
        for(int i = 0;i<5;++i){
            int ele = in.nextInt();
            new_array.add(ele);
        }
        System.out.println(new_array);
        ArrayList<String>  str = new ArrayList<>();
        str.add("aa");
        str.add("bb");
        System.out.println(str.get(0));
        String s = new String();
        s= "abba";
        System.out.println(s.charAt(0));
        System.out.println(str);
    }

}
