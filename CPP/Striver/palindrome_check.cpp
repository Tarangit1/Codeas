#include<bits/stdc++.h>


bool palindrome(int i,std::string &s){
    
    if(i>=s.length()/2) return true ;

    if(s[i]!=s[s.length()-i-1]) return false;
    
   return palindrome(i+1,s);

}

int main(){
    std::string s;
    std::cin >> s;
    std::cout<<palindrome(0, s)<<std::endl;
    return 0;
}