public class equilateralbinarydigit2
{
public static void main(String[] args)
{
int k,i,j,n,p;
n=5;
p=5;
for(i=0;i<=n;i++)
{for(j=0;j<=n;j++)
{if(j>=p)
System.out.print(j);
else 
System.out.print(" ");
}
System.out.print("\n");
--p;
}
}
}