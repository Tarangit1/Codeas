    #include <iostream>
    #include <vector>

    using namespace std;

    void pushZerosToEnd(vector<int>& arr);

    int main() {
        vector<int> arr = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
        
        cout << "Original array: ";
        for (int i : arr) {
            cout << i << " ";
        }
        cout << endl;

        pushZerosToEnd(arr);

        cout << "Array after pushing zeros to the end: ";
        for (int i : arr) {
            cout << i << " ";
        }
        cout << endl;

        return 0;
    }
    //we cant use the earse and push back approach as it will change the size of the array and the loop will not work properly
    //also the time complexity will be O(n^2) as we are using erase and push back

// void pushZerosToEnd(vector<int>& arr) {
//         // code here
//         int n=arr.size();
//         vector<int> temp(n);
//         int count=0;
//         for(int i=0;i<n;i++){

//             if(arr[i]!=0){
//                 temp[count]=arr[i];
//                 count++;
//             }

//             }
//     for (int i = 0; i < n; i++) {

//         arr[i] = temp[i];
//     }
//     }

// void pushZerosToEnd(vector<int>& arr) {
//         // code here
//         int n=arr.size();
//         int count=0;
//         for(int i=0;i<n;i++){

//             if(arr[i]!=0){
//                 swap(arr[i],arr[count]);
//                 count++;
//             }
//     here the iterator is moveing but the count is in the if statment so it will only move when the if statment is true
//      that is when arr[i]!=0 
//      for eg if the arr is[0,1,0,2,0,3,0,4,0,5]
//     the count will be 0 and i will be 1
//     so the swap will be 1,0
//     so the arr will be [1,0,0,2,0,3,0,4,0,5]
//     next the count will be 1 and i will be 2
//     so the swap will be 0,0
//     so the arr will be [1,0,0,2,0,3,0,4,0,5]
//     next the count will be 1 and i will be 3
//     so the swap will be 2,0
//     so the arr will be [1,2,0,0,0,3,0,4,0,5]
//     next the count will be 2 and i will be 4
//     so the swap will be 0,0
//     so the arr will be [1,2,0,0,0,3,0,4,0,5]
//     next the count will be 2 and i will be 5
//     so the swap will be 3,0
//     so the arr will be [1,2,3,0,0,0,0,4,0,5]
// and so on

//             }
//     }

void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){

            if(arr[i]!=0){
                arr[count++]=arr[i];
            }
            }

        while(count<n){
            arr[count++]=0;
        }


    }

    