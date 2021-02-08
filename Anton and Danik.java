/*
This code is written by Manavesh Narendra
E-mail : manu.karenite@gmail.com
LinkedIn : https://www.linkedin.com/in/manavesh-narendra-489833196/
*/


import java.lang.*;
import java.util.*;
import java.io.*;
public class solution{
    
    public static void main(String args[]) throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        sc.nextLine();
        String game;
        game=sc.nextLine();
        char c;
        int a=0 , d=0;
        for(int i=0;i<n;i++)
        {
            c=game.charAt(i);
            if(c=='A')
            a++;
            else
            d++;
        }
        if(a==d)
        System.out.println("Friendship");
        else if (a>d)
        System.out.println("Anton");
        else
        System.out.println("Danik");
        sc.close();
        
        
        
    }
}
