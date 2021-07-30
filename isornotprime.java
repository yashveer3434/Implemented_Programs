import java.util.Scanner;


public class isornotprime
{public static void main(String[] args)
{int check,i;
char isprime='t';
System.out.println("Enter number to be checked:");
Scanner scan=new Scanner(System.in);
check=scan.nextInt();
if(check==1)
{System.out.print(check+" is not a prime number");}
else if(check==2)
{System.out.print(check+" is a prime number");}
else
{for(i=2;i*i<check;i++)
{if(check%i==0)
	{isprime='f';
	break;}
}
if(isprime=='t')
{System.out.print(check+" is a prime number");}
else
{System.out.print(check+" is not a prime number");}}
}  }