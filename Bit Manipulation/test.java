public class test
{
    public static void main(String[] args)
    {
        String s= "hello World";
        for(int i=0;i<4;i++)
        {
            int x=s.length()-1;
            s=s.substring(0, x);
        }
        System.out.println(s);
        s.compareTo(s);

        int x=5;
        for(int i=0;i<x;i++)
        {
            if(i==0 || i==x-1)
            {
                for(int j=0;j<x;j++) System.out.print("* ");
                System.out.print("\n");
            }
            else{
                System.out.print("* ");
                for(int j=1;j<x-1;j++) System.out.print("  ");
                System.out.println("*");
            }
        }
        
    }
}