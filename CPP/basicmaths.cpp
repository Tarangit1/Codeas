#include<bits/stdc++.h>
 

int count_digits(int n){
    int cnt=0;
    while (n>0)
    {
        n=n/10;
        cnt+=1;
    }
    // std::cout<<cnt;
    return cnt;
}

void count_digits_log(long long int n){
    int digits=floor(log10(n)+1);
    std::cout<<digits;
}

void count_digits_str(int n){
    std::string x= std::to_string(n);
    std::cout<<x.length();
}

int reverse_num(int n){
    
    int reverse = 0;
    while(n!=0)
    {
        int digit = n%10;
        reverse = reverse*10+digit;
        n = n/10;
    }
    // std::cout<<reverse;
    return reverse;
}

void chk_palindrome(int n){
    int reverse{reverse_num(n)};

    std::cout<<reverse;
    if(n == reverse){
        std::cout<<"it is a palindrome";
    }
    else{
        std::cout<<"Its not a palindrome";  
    }

       

}

void armstrong(int n){
    int temp;int arm= 0;
    temp=n;
    int cnt{count_digits(temp)};
    while (temp!=0){
        int last_digit=temp%10;
        
        
        arm=arm+pow(last_digit,cnt);
        temp/=10;
        
    }

    if(arm == n){
        std::cout<<"Its an Armstrong Number";

    }  
    else{
        std::cout<<"Its not an Armstrong Number";
    }
    
}

void prime(int n){
    int cnt{0};
    for(int i=1;i<=sqrt(n);i++){
      if (n % i == 0) {
        cnt++;
      
      if (n/i!=i){
        cnt++;
      }}

    }
    std::cout<<cnt;
    if(n!=1 && cnt==2){
        std::cout<<"prime";
    }
    else std::cout<<"not prime";
}

void sqplus5(int n){
    std::cout<< n*n+5;
    
}
int main(){
    long long int n;
    std::cin>>n;

    sqplus5(n);
}
