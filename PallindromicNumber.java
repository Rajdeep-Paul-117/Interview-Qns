// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class HelloWorld {
    public static void main(String[] args) {
        int original_no=121;
        int reverse_no=0;
        int temp=original_no;
        while(temp!=0)
        {
            reverse_no=reverse_no*10+temp%10;
            temp=temp/10;
        }
        if(reverse_no==original_no)
        {
            System.out.print("Pallindrome");
        }
        else
        System.out.print("Not a Pallindrome");
        
    }
}
