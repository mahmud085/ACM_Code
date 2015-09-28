import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;
public class am10814 {
static String st;
static Scanner in = new Scanner(System.in);
public static String input()
{
try
{
st=in.nextLine();
return st;
}
catch (Exception e)
{
return null;
}
}
public static void main(String[] args) {
st=input();
long i,m,n;
n=Long.valueOf(st);
BigInteger a,b,x,y,gcd;
while(n-->0)
{
st=in.next();
a=new BigInteger(st);
in.next();
st=in.next();
b=new BigInteger(st);
gcd=a.gcd(b);
System.out.println(a.divide(gcd)+" / "+b.divide(gcd));
}
}
}