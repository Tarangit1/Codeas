public class arr_rotation {


    public static void reverse(int arr[],int start,int end){
        while(start<end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }

    public static void main(String[] args) {
    
        int arr[]={1,2,3,4,5};
        
        int n=arr.length;
        int d=2;

        reverse(arr,0,d-1);
        System.out.println("After reverse 1st part");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    
    }
}