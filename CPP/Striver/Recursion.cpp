#include <bits/stdc++.h>
//1. print name n time
void pnamen(int i,int n){
if(i>n) return;
printf("raj\n");
pnamen(i+1,n);

}



//2. print linearly from 1 to N
void p1ton(int i,int n){
if(i>n) return;
printf("%d",i);
p1ton(i+1,n);

}
//3. print from N to 1
void pnto1(int i,int n){
  
if(i<1) return;
printf("%d",i);
pnto1(i-1,n);
}

// //4. 2,3 using back tracking
// void pl1ton(int i,int n){
//   if(i>n) return;
//     plnto1(i+1,n);
//     printf("%d",i);
// }

// void plnto1(int i,int n){
//     if(i>n) return;
//     plnto1(i+1,n);
//     printf("%d",i);

// }


int main(){
    int(n);
int i=1;
    std::cin>>n;


    pnto1(i,n);
}