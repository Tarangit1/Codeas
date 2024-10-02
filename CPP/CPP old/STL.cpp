#include<bits/stdc++.h>


//Pairs
void Pairs(){
    std::pair<int,int> p = {1, 3}; //here p is name of pair
    //to print first or second use

    std::cout<< p.first <<" "<< p.second<<std::endl;
    

    //for 3 digits we pair a pair with a number

    std::pair<int, std::pair<int, int>> p1 = {1,{2,3}};
    /*
    *   for first ----- p1.first = 1
        for second ----- p1.second.first = 2 
        for third ----- p1.second.second = 3 
    */ 
   std::cout<<p.first<<" "<< p1.second.second<<" "<< p1.second.first ;
    //pair array





   




        std::pair<int,int> arr[] ={{1,2},{3,4},{5,6}};

        /*
        *to use array we */

} 


int main(){
    