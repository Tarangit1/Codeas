
// How does the string class in the provided code use the [] operator for indexing
// and what are the effects of modifying a character in the string using the [] operator

#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";

    // Accessing characters using the [] operator
    char firstChar = str[0];
    char fifthChar = str[4];

    std::cout << "First character: " << firstChar << std::endl;
    std::cout << "Fifth character: " << fifthChar << std::endl;

    // Modifying a character using the [] operator
    str[7] = 'C';

    std::cout << "Modified string: " << str << std::endl;

    return 0;
}