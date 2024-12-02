
void pushZerosToEnd(vector<int>& arr) {
        // code here
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                arr.erase(arr.begin()+i);
                arr.push_back(0);
            
                
            }
        }
    }