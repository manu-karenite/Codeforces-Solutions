 /*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


import java.util.*;
import java.io.*;
import java.lang.*;

public class GFG{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int a=0,b=0;
        a=sc.nextInt();
        b=sc.nextInt();
        //int rem=0;
        int sum =a;
        
        int quot,rem;
        while(a>=b)
        {
            
            quot=a/b;
            sum+=quot;
            rem=a%b;
            a=quot+rem;


        }

        //sum+=(a+rem)/b;
        System.out.println(sum);

    }
}
