import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int[] solve(int[] grades){
        // Complete this function
        int res[]=new int[grades.length];
        for(int i=0;i<grades.length;i++)
            {
            int grade=grades[i];
            if(grade<38)
                {
                res[i]=grade;
            }
            else if(grade%5>=3)
                {
                int rem=grade/5;
                res[i]=(rem+1)*5;
            }
            else
                res[i]=grade;
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] grades = new int[n];
        for(int grades_i=0; grades_i < n; grades_i++){
            grades[grades_i] = in.nextInt();
        }
        int[] result = solve(grades);
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i] + (i != result.length - 1 ? "\n" : ""));
        }
        System.out.println("");
        

    }
}
