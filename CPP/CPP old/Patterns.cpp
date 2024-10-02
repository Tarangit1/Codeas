// 30th jan 2024 the day is tuesday kindly find a day on 30th jan 2023
#include <iostream>
#include <ctime>


// simple star pattern rectangle
void pattern1(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    
    }

}

// half right pyramid
void pattern2(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}
void pattern2_rev(int n)
{

    //   for (int i = 0; i<n; i++){
    //       for (int j = n-i; j>0; j--){
    //           std::cout<<"* ";
    //       }
    //       std::cout<<std::endl;
    //   }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

// 1 22 333...
void pattern3(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << i << " ";
        }

        std::cout << std::endl;
    }
}

// 1 12 123...
void pattern4(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
}
void pattern4_rev(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= -i + n; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
}

// pyramid
void pattern5(int n)
{

    for (int i = 0; i < n; i++)
    {   
        for (int j = 0; j <= i; j++)
        {
            std::cout << " ";
        }
         for (int j = 1; j <= n - i-1; j++)
        {
            std::cout << "`";
        }
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << "`";
        }
        for (int j = 0; j <= 2*i; j++)
        {
            std::cout << "*";
        }
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << "`";
        }
        
        for (int j = 1; j <= n - i-1; j++)
        {
            std::cout << "`";
        }
        for (int j = 0; j <= 2*i; j++)
        {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
}

void pattern6_9(int n){
    for(int i = 0; i < n; i++){

        
        for(int j = 0; j<n-i-1; j++){
            std::cout<<" ";
        }
        for(int j = 0; j<2*(i)+1; j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    for(int i = 0; i < n; i++){

        
        for(int j = 0; j<i; j++){
            std::cout<<" ";
        }
        for(int j = 0; j<2*(n-i)-1; j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }

}


void pattern10(int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<=i; j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    for(int i=0; i<n;i++){
        for(int j=0; j<n-i-1; j++){    
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}


void pattern11(int n){
    
    int start{1};
    
    for(int i=0; i<n; i++){
        if (i%2==0){
            start = 1;
        }
        else{
            start = 0;
        }

        for(int j=0 ;j<=i;j++){
            std::cout<<start<<" "<<i<<" ";
            start = 1-start;
        }
        
    std::cout<<std::endl;
    } 
    }

void pattern12(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            std::cout<<j;
        }
        
        for(int j=1; j<=2*(n-i)-2; j++){
            std::cout<<" ";
        }
        
        for(int j=i+1; j>=1; j--){
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
}

void pattern13(int n){
    int num =1;
     for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            std::cout<<num<<" ";
            num++;
        }
        std::cout<<std::endl;
     }
}
void pattern14(int n){
    for(int i=0; i<n; i++){
        for(char j='A'; j<='A'+i; j++){
            std::cout<<j;
        
        }
        std::cout<<std::endl;
     }
}

void pattern15(int n){
    for(int i=0; i<n; i++){
        for(char j='A'; j<='A'+(n-i-1); j++){
            std::cout<<j;
        
        }
        std::cout<<std::endl;
     }
}

void pattern16(int n){
    for(int i=0; i<n; i++){
        char ch ='A'+i;
        for(int j=0;j<=i;j++){
            std::cout<<ch<<" ";
        }
        std::cout<<std::endl;
    }
}
void pattern17(int n){
    for(int i=0; i<n; i++){
        char ch ='A';
        for(int j=0;j<n-i-1;j++){
            std::cout<<" ";
        }
        for(int j=1;j<=2*i+1;j++){
            std::cout<<ch;
            if(j <= (2*i+1)/2) ch++;
            else ch--;
        }
        std::cout<<std::endl;
    }
}


void pattern19(int n){
    for(int i=0; i<n; i++){
        //stars
        for(int j=0; j<n-i; j++){
            std::cout<<"*";
        } 
        //spaces
        for(int j=0; j<=2*i-1;j++){
            std::cout<<" ";
        }
        //stars
        for(int j=0; j<n-i; j++){
            std::cout<<"*";
        } 
        std::cout<<std::endl;
    }
    for(int i=0; i<n; i++){
        
        for(int j=0; j<i+1; j++){
            std::cout<<"*";
        } 
        
        for(int j=1; j<=2*(n-i)-2;j++){
            std::cout<<" ";
        }
        
        for(int j=0; j<i+1; j++){
            std::cout<<"*";
        } 
        std::cout<<std::endl;
    }
}

void pattern20(int n){
        int spaces = 2*n - 2;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i > n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            std::cout<<"*";
        }

        for(int j=1;j<=spaces;j++){
            std::cout<<" ";
            
        }

        for(int j=1;j<=stars;j++){
            std::cout<<"*";
        }
        
        std::cout<<std::endl;

        if(i < n) spaces -=2;
        else spaces +=2;
    }

}

void pattern21(int n){
    for(int i=0; i<n;i++){
        for(int j=0;j<n; j++){
            if(i==0||i==n-1||j==0||j==n-1)
            std::cout<<"*";
            else std::cout<<" ";
        }
        std::cout<<std::endl;
    }
}

void pattern22(int n){
        
for(int i=0;i<2*n-1;i++){
        
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left =j;
            int bottom = 2*n-2 - i;
            int right = 2*n-2 - j;
            std::cout<<n- std::min(std::min(top,bottom),std::min(left,right));

            }
        printf("\n");
        }
    }


int main(){
    int n;
    // std::cin >> n;
    pattern22(5);
}