import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String[] str = s.split(" ");
        // System.out.println("output string: " + Arrays.toString(str));
        ArrayList<String> al = new ArrayList<>(Arrays.asList(str));
        int i = 0;
        while( i != str.length){
            al.set((int)(str[i].charAt(str[i].length()-1)) - 49, str[i].substring(0,str[i].length() - 1));
            i++;
            }

        for(String a : al){
            System.out.print(a + " ");
        }
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    }
}
