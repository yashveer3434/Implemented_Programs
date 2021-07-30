import java.util.Scanner;


public class sumof
{public static void main(String[] args)
{int check,i,j,sum;
sum=0;
System.out.println("Enter number:");
Scanner scan=new Scanner(System.in);
check=scan.nextInt();
j=check;
while(j>0)
{i=j%10;
sum+=i;
j=j/10;}
System.out.println("Sum of all digit of "+check+" is "+sum);}}