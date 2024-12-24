// Date: 03/06/21
public class rec {
    public static void recurr(int n) {
        if (n == 0) {
            return;
        }
        System.out.println("Hello");
        recurr(n - 1);
        System.out.println("World");
    }
    
    public static void pnto1(int n) {
        if (n == 0) {
            return;
        }
        pnto1(n - 1);
        System.out.println(n);  //for printing 1 to n just change the position of this line with above line 
        // pnto1(n - 1);
        //
    }

    public static int sum(int n) {
        if (n == 0) {
            return 0;
        }
        return n + sum(n - 1);
    }

    public static int fact(int n) {
        if (n == 0) {
            return 1;
        }
        return n * fact(n - 1);
    }

    
    public static void main(String[] args) {
        // recurr(5);
        // pnto1(5);
        //sum(5);

        }
    }
