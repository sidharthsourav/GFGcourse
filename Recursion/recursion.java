import java.util.*;
class recursion{

    //print n to 1 using recursion
    static Scanner sc= new Scanner(System.in);
    static void rec1(int n)
    {
        if(n==0) return;
        System.out.print(n+" ");
        rec1(n-1);
    }
    static void print_n_to_1()
    {
        int n= sc.nextInt();
        rec1(n);
        System.out.println("\n");
    }

    //print 1 to n using recursion
    static void rec2(int n)
    {
        if(n==0) return;
        rec2(n-1);
        System.out.print(n+" ");
    }
    static void print_1_to_n()
    {
        int n= sc.nextInt();
        rec2(n);
        System.out.println("\n");
    }
    
    //prints the binary representaion on a decimal value.
    static String binary_conversion(int n)
    {
        //This code prints the binary converstion in right order
        //as the modification in the return statement.
        //We are adding the last value to the first in the string
        //check the commented code for actual scenario what is happening 
        //here without modification.
        /*
         * if(n==0) return;
         * binary_conversion(n/2);
         * System.out.println(n%2)
         * 
         * for example: input -> 8
         * fun(8)
         * |  ->fun(4)
         * |      ->fun(2)
         * |          ->fun(1)
         * |               ->fun(0) no calls further more. return nothing.
         * 
         * in this the control will go till fun(0) first as the recursion is happneing first
         * then at 0 it will not return a thing control goes to fun(1) it will print 1%2 fun(1) finished control 
         * goes back to fun(2) and so on. This will print the binary representation in reverse order.
         */
        String s="";
        if(n==0) return "";
        String temp=binary_conversion(n/2);
        int x=n%2;
        return temp+s+(char)(x+'0');
    }
    static void binary_representation()
    {
        int n=sc.nextInt();
        //the function below will return the binary representation in reverse order 
        //so you have to reverse it first.
        String s= binary_conversion(n);
        System.out.println(s);

    }

    //prints the nth fibonachi number.
    static int fib(int n)
    {
        if(n<=1) return n;
        return fib(n-1)+fib(n-2);
    }
    static void nth_fibonacchi()
    {
        int n= sc.nextInt();
        int res= fib(n);
        System.out.println(res);
    }

    //sum of n natural numbers using recursion.
    //for sum of n natural no.s the formula is n*(n-1)/2 
    static int sum(int n)
    {
        if(n==0) return 0;
        return n + sum(n-1);
    }
    static void natural_Sum()
    {
        int n= sc.nextInt();
        System.out.println(sum(n));
    }

    //String palindrone using recursion.
    static boolean palindrone_check(String str, int start, int end)
    {
        if(start>=end) return true; 
        return str.charAt(start)==str.charAt(end) && palindrone_check(str, start+1, end-1);
    }
    static void palindrone()
    {
        System.out.print("Enter the string : ");
        sc.nextLine();
        String str= sc.nextLine();
        System.out.println(palindrone_check(str,0,str.length()-1));
    }

    //Sum of digis in a number
    static int digitsum(int n)
    {
        if(n<=0) return n;
        return (n%10)+digitsum(n/10);

    }
    static void digit_sum()
    {
        System.out.print("Enter the number : ");
        int n=sc.nextInt();
        System.out.println(digitsum(n));
    }

    // Rope cutting problem -> In this problem we are given a rope of n length 
    // and cuts of length a,b and c we have to return maxzimum number of cuts which 
    // gives the maximum pieces and rope is divided completely no residue in left of it.
    static int getCuts(int rope,int a,int b,int c)
    {
        if(rope==0) return 0;
        if(rope<=-1) return -1;

        int res=Math.max(getCuts(rope-a, a, b, c),Math.max(getCuts(rope-b, a, b, c),getCuts(rope-c, a, b, c)));
        if (res==-1) return -1;
        return res+1;
    }
    static void rope_problem()
    {
        System.out.print("Enter the length of the rope : ");
        int rope=sc.nextInt();
        System.out.print("Enter cut length a : ");
        int a= sc.nextInt();
        System.out.print("Enter cut length b : ");
        int b= sc.nextInt();
        System.out.print("Enter cut length c : ");
        int c= sc.nextInt();
        System.out.println(getCuts(rope,a,b,c));
    }

    //Generate subsets of a string in numbers asuming all character as disnict.Q                                                                                                                                                                                                                                                                                                                                                                                           
    //To calulate no. of subsets in a string that is equal to pow(2,n) 
    /*
     * Theory of this problem.
     * we first start with and empty sting and make a choice of adding a element to it
     * we repeat this step for each element in the string 
     * for example : abc
     * "" : empty string.
     * add a or not then two stings -> empty and a
     * these both will call for b to be added or not and this will continue.
     * after each decision we increment i and when i==length of the sting 
     * recursion ends this is the base case. look at the recusion tree below to understand it better.
     * 
     * 
     *                  ""                         i=0
     *         ""               a                  i=1
     *     ""        b       a       ab            i=2
     * ""      c   b   bc  a   ac  ab    abc       i=3 here i is equal to the string length so 
     *                                                 so strings will return they are the subsets
     *            this is the recursin tree.
     */
    static void subsets(String str, String curr, int i)
    {
        if(i==str.length())
        {
            System.out.print(curr+" ");
            return;
        }
        subsets(str,curr,i+1);
        subsets(str,curr+str.charAt(i),i+1);
    }
    static void subset_problem()
    {
        sc.nextLine();
        System.out.print("Enter the string : ");
        String s = sc.nextLine();
        String curr="";
        subsets(s, curr, 0);
    }   
    public static void main(String[] args)
    {
        //recursion basic programs
        System.out.println("1 -> For print n to 1.");
        System.out.println("2 -> For print 1 to n.");
        System.out.println("3 -> For print binary representation of a number using recursion.");
        System.out.println("4 -> Nth term in fibonacchi series.");
        System.out.println("5 -> Sum of N natural numbers.");
        System.out.println("6 -> String palindrone checker.");
        System.out.println("7 -> Sum of digis in a number.");
        System.out.println("8 -> Rope cut Problem using recurssion.");
        System.out.println("9 -> Generate Subset of a string problem.");

        System.out.print("Enter choice : ");
        int choice=sc.nextInt();


        switch(choice)
        {
            case 1: print_n_to_1();
                    break;
            case 2: print_1_to_n();
                    break;
            case 3: binary_representation();
                    break;
            case 4: nth_fibonacchi();
                    break;
            case 5: natural_Sum();
                    break;
            case 6: palindrone();
                    break;
            case 7: digit_sum();
                    break;
            case 8: rope_problem();
                    break;
            case 9: subset_problem();
                    break;
            case 10: 
            default: break;
        }
    }
}