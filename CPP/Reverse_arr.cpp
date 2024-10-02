#include<iostream>
void Revfunc(int i,int arr[],int n){
    if(i>=n/2)return;
    std::swap(arr[i],arr[n-i-1]);

    Revfunc(i+1,arr,n);
}
//array is always called by reference in cpp
int main(){
    int n,i;
    std::cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) std::cin >> arr[i];
    Revfunc(i,arr,n);
    for(int i=0;i<n;i++) std::cout << arr[i]<<" ";
    return 0;

    


}