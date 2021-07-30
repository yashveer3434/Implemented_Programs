public class hello
{
public static void main(String[] args)
{
int k,i,j,n,p;
n=10;
k=n-1;
p=n-1;
for(i=1;i<n;i++)
{for(j=0;j<((2*n)+1);j++)
{if(i+j==k || i+j==p)
	System.out.print("1");
else if(i+j<k )
	System.out.print(" ");
else if(i+j>k && i+j<p)
	System.out.print("0");

}
System.out.print("\n");
p+=2;}
}
}