
import java.util.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class day23_12 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

            int sum = 0;
            int count = 0;
            int oddCount = 0;
            int evenCount = 0;
            int reverse = 0;
            List<Integer> oddNumbers = new ArrayList<>();
            List<Integer> evenNumbers = new ArrayList<>();
            while (n != 0) {
                int digit = n % 10;
                sum += digit;
                count++;
                if (digit % 2 == 0) {
                    evenCount++;
                    evenNumbers.add(digit);
                } else {
                    oddCount++;
                    oddNumbers.add(digit);
                }
                reverse = reverse * 10 + digit;
                n /= 10;
            }
            System.out.println("SUM: "+sum);
            System.out.println("COUNT: "+count);
            System.out.println("ODD NUMBERS: " + oddNumbers);
            System.out.println("EVEN NUMBERS: " + evenNumbers);
            System.out.println("ODD COUNT: " + oddCount);
            System.out.println("EVEN COUNT: " + evenCount);
            System.out.println("Reverse: "+reverse);


    }   
}
