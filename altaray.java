/* package codechef; // don't place package name!
* problem code-ALTARAY*/

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner sc=new Scanner(System.in);
        int t,n;
        t=sc.nextInt();
        while(t-->0)
        {
            n=sc.nextInt();
            int a[]=new int[n];
            int b[]=new int[n];
            for(int i=0;i<n;i++)
            {
                a[i]=sc.nextInt();
            }
            int prev=Integer.MIN_VALUE;
            int last=0;
            for(int i=n-1;i>=0;i--)
            {
                if(prev==Integer.MIN_VALUE)
                {
                    b[i]=1;
                    prev=a[i];
                }
                else
                {
                    if(prev>0&&a[i]>0||prev<0&&a[i]<0)
                    {
                        b[i]=1;
                        prev=a[i];
                    }
                    else
                    {
                        b[i]=b[i+1]+1;
                        prev=a[i];
                    }
                }
            }
            for(int i=0;i<n;i++)
            {
                System.out.print(b[i]+" ");
            }
            System.out.println();
        }
    }
}
