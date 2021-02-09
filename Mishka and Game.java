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
        int n = sc.nextInt();
        int mishka=0 , chris=0 , draw=0;
        int a=0 ,b=0;
        for(int i=0;i<n;i++)
        {
            a=sc.nextInt();
            b=sc.nextInt();
            if(a>b)
                mishka++;
            else if (b>a)
                chris++;
            else
                draw++;
        }
        if((mishka>0 || chris>0) && (mishka!=chris))
        {
            if(mishka>chris)
                System.out.println("Mishka");
            else if(chris>mishka)
                System.out.println("Chris");
        }
        else
            System.out.println("Friendship is magic!^^");

    }
}
 
