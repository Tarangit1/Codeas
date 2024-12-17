import java.util.*;


public class Main{
    public static void revstr(String str){
        
        
        String originalStr = str;
        String reversedStr = "";
        
        for (int i = 0; i < originalStr.length(); i++) {
            reversedStr = originalStr.charAt(i) + reversedStr;
        }

        System.out.println(reversedStr);
        
        
        
    }
    
    public static void SumArray(int[] arr){
        int sum=0;
        for(int i=0; i< arr.length;i++){

            sum+=arr[i];

        }

        System.out.println(sum);

    }

    public static void strToarr(String str) {

        char[] chArr = str.toCharArray();

        for(char c : chArr){
            System.out.println(c);
        }
        
    }

    public static void averageArr(int[] arr){
        int sum=0;
        int n=arr.length;
        for(int i=0; i< n;i++){

            sum+=arr[i];

        }
        double avg =(double) sum/arr.length;
        System.out.println(avg);
    }
    public static void main(String[] args) {
    //    -----------------Reverse a string----------------- 




        // Scanner myobj = new Scanner(System.in);
        // System.out.print("Enter a string: ");
        // String str = myobj.nextLine();
        // revstr(str);



    //    -----------------Reverse a string-----------------
    //-----------==================================--------------------
    //----------------Sum of an Array--------------------------------
        
            // int[] arr={1,2,3,4};

            // SumArray(arr);

        


    //----------------Sum of an Array--------------------------------
    //-------====================================-------------------
    //-------------Convert String to Array-------------------
    
    
        // Scanner myobj = new Scanner(System.in);
        // System.out.print("Enter a string: ");
        // String str = myobj.nextLine();

        // strToarr(str);
    
    
    
    
    
    
    
    
    
    //-------------Convert String to Array-------------------
    //-----------==============================-------------------
    //---------------Sort AN Array-----------------------
    
    
    
    
    // String[] cars = {"Volvo", "BMW", "Tesla", "Ford", "Fiat", "Mazda", "Audi"};
    // Arrays.sort(cars); //sort by alphabets acending order
    // for(String s : cars){
    //     System.out.println(s);
    // }

    
    
    
    
    
    
    
    
    
    
    
    
    //---------------Sort AN Array-----------------------
    // -------------=============================------------------
    // -----------------Find Array Average----------------
    

        // int[] arr={1,2,3,4,5,6,7,8,9,10};

        // averageArr(arr);


        // -----------------Find Array Average----------------
        // -------------=============================------------------
        //--------------Find smallest and largest number in an array----------------
        
        // int[] arr={42, 17, 93, 58, 21, 76, 34, 89, 65, 12};

        // int min = Integer.MAX_VALUE;
        // int max = Integer.MIN_VALUE;
        // int n=arr.length;
        // for(int i=0;i<n;i++){
        //     if(min>arr[i]){
        //         min=arr[i];
        //     }
        //     if(arr[i]>max){
        //         max=arr[i];
                

        //     }
            
        // }

        // System.out.println("Min: " + min + ", Max: " + max);






        //--------------Find smallest and largest number in an array----------------
        // -------------=============================------------------
        // -----------------Find secondLargest largest number in an array----------------
        
        int[] arr={10, 5 , 10};

        int firstLargest = Integer.MIN_VALUE;
        int secondLargest = Integer.MIN_VALUE;
        int n=arr.length;
        for(int i=0;i<n;i++){

            if(arr[i]>firstLargest){
                firstLargest=arr[i];

            }
            else if(arr[i]>secondLargest && firstLargest!=secondLargest){
                secondLargest=arr[i];
            }
            
        }
        System.out.println(arr);
        System.out.println("Second Largest: " + secondLargest);


        
        // -----------------Find secondLargest largest number in an array----------------
        // -------------=============================------------------
        // -------------- Loop through in an array list--------------------
        
        
        
        // ArrayList<String> cars = new ArrayList<String>();
        // cars.add("Volvo");
        // cars.add("BMW");
        // cars.add("Tesla");
        // cars.add("Ford");
        // cars.add("Fiat");
        // cars.add("Mazda");

        // for(String s : cars){
        //     System.out.println(s);
        // }
        
        
        
        
        
        
        
        
        
        // -------------- Loop through in an array list--------------------
        // -------------=============================------------------
        //--------------------Hashmaps--------------------------
        
        
        
        
        // HashMap<String, String> capitalCities = new HashMap<String, String>();
        // capitalCities.put("England", "London"); 
        // capitalCities.put("Germany", "Berlin");
        // capitalCities.put("Norway", "Oslo");
        // capitalCities.put("USA", "Washington DC");


        // System.out.println(capitalCities.get("England"));
        // for (Map.Entry<String, String> entry : capitalCities.entrySet()) {
        //     if (entry.getValue().equals("London")) {
        //     System.out.println(entry.getKey());
        //     }
        // }
        
        
        
        
        
        //--------------------Hashmaps--------------------------
        // -------------=============================------------------
















    }
    
    
    

}

