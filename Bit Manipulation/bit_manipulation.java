import java.util.*;

/*
 * important bitwise opertions.
 * bitwise and ' & '= this operand returns 1 if both bits are 1.
 * bitsise negartion ' ~ ' = this operand flips all the bits. 0 to 1 and 1 to 0.
 * 
 */
class bit_manipulation
{
    //Declaring a Scanner object to call Scanner in all function setting it as static as it will be global to all class
    static Scanner sc = new Scanner(System.in);

    //Approach for this problem 
    // using a bit-wise operator as we know bitwise opertor return 1 only in both bits are 1
    // we are taking a number who's kth bit exactly is one to do this we are left shift 1 k-1 times
    // and using a bitwise operator to the original nunber and kth bit 1 value.
    /*
     *  example: num = 5 and x =3
     * 5= 0000......101
     * 1= 0000......001 --> shifted x-1 times 0000.....100
     * now if kth bit is also 1 then it will give a non zero value after
     * bitwise opertion but kth bit is 0 then all will be o
     * 0000......101
     * 0000......100
     * -------------
     * 0000......100  -->> this is a non-zero value.
     * note= learn the left shifting operaion here.
     */
    static void kthBitSet()
    {
        int num=sc.nextInt();
        int x= sc.nextInt();
        if((num & (1<<(x-1)))!=0) System.out.println("YES");
        else System.out.println("No");

    }
    // Count Set bits in a number.
    static void CountSetBits()
    {
        // Naive appraoch looping through 32 bits.
        int num= sc.nextInt();
        int count=0;
        for(int i=1;i<=31;i++)
        {
            if((num & (1<<i-1))!=0) count++;
        }
        System.out.println(count);

        // improvised approach. : Brian Kerningams's Algorithm.
        /*
         * when we bitwise n & n-1 all the leftmost bit on first 1 becomes zero
         * example:
         * 5: 0000....101
         * 4: 0000....100
         * it will give 4 as an output
         */
        int count2=0;
        while(num>0)
        {
            num= num & (num-1);
            count2++;
        }
        System.out.println(count2);
        //this approach works in O(number of set bits.) set bits means no. of 1s.
    }

    public static void main(String[] args)
    {
        System.out.println("1. Kth Bit Set or Not. ");
        System.out.println("2. Count set bits. ");
        System.out.print("Enter Choice: ");
        int choice= sc.nextInt();
        switch(choice)
        {
            case 1: kthBitSet();
                    break;
            case 2: CountSetBits();
                    break;
        }
        
                            
    }
}