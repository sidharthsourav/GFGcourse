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
        
    }
}