import java.util.*;
public class practice{
    public static void main(String args[]){
        int arr[] = new int[100];
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Annual Income: ");
        int AnnualIncome = sc.nextInt();
        double IncomeAfterTax = 0;
        System.out.println("Annual Income is: "+ AnnualIncome);
        if(AnnualIncome<=250000){
            IncomeAfterTax = AnnualIncome;
            System.out.println("Income after tax: "+IncomeAfterTax);
        }
        else if(AnnualIncome>250000 && AnnualIncome<=500000){
            IncomeAfterTax = AnnualIncome- (AnnualIncome - 250000)* 0.05;
            System.out.println("Income after Tax: "+ IncomeAfterTax);

        }   
        else if(AnnualIncome>500001 && AnnualIncome<=1000000){
            IncomeAfterTax = AnnualIncome - (250000 * 0.05) - (AnnualIncome-500000)*0.1;
            System.out.println("Income after Tax: "+ IncomeAfterTax);

        }
        else if(AnnualIncome>1000001 && AnnualIncome<=1500000){
            IncomeAfterTax = AnnualIncome - (250000*0.05) - (500000*0.1) - (AnnualIncome-1000000)*0.2;
            System.out.println("Income after Tax: "+ IncomeAfterTax);
        }
        else {
            IncomeAfterTax = AnnualIncome - (250000*0.05) - (500000*0.1) - (1000000*0.2) - (AnnualIncome-1500000)*0.3;
            System.out.println("Income after Tax: "+ IncomeAfterTax);

        }


    }
}