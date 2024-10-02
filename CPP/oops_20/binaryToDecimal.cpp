// Q.3. Binary to decimal.
// The company has transmitted the data to the target server successfully. Now, on
// the new server, the transmitted binary data has to be stored in a user readable
// format. As a developer, you have been assigned the task of converting the
// received binary data to user-readable decimal data.
// Write a C++ program to convert the given data to decimal format.
// Input Format:
// The input consists of integer data, representing the binary number form of the
// data received.
// Output Format:
// Print an Integer representing the decimal form of the received data.
// Code Constraints:
// 1≤ N ≤10^5

/*
*binary to decimal



*/

#include <bits/stdc++.h>
 

void solve1(std::string binary){

    int decimal1 = std::stoi(binary, nullptr, 2);

    // stoi is a function that converts a string to an integer.
    // It takes three parameters: the string to convert, a pointer to store the position of the first character that couldn't be converted, and the base of the number system (in this case, 2 for binary).
    int decimal = std::stoi(binary, nullptr, 2);

std::cout<< decimal1;



}
void solve2(std::string binary){

    //1010   10
    int decimal = 0;
    for (int i = 0; i < binary.length(); i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    std::cout << decimal;



}
int main(){
    std::string binary;
    std::cin >> binary;

    // solve1(binary);
    solve2(binary);

}
