#include<bits/stdc++.h>
int f(int n){
    if (n==0) return 0;
    if(n==1) return 1;
    int last=f(n-1);
    int slast=f(n-2);
    return last+slast;

}
int main(){
    int n;
    std::cin >> n;
    std::cout << f(n) << std::endl;
    return 0;
}