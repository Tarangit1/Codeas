#include <iostream>
#include <string>
using namespace std;

class Book
{
    string title;
    string director;
    int Yearreleased;

public:
    Book(string t, string a, int year) : title(t), director(a), Yearreleased(year)
    {
        cout << "Book added: " << title << " by " << director << ", published in " << Yearreleased << endl;
    }
    ~Book()
    {
        cout << "Book removed: " << title << endl;
    }
};

int main()
{
    Book book1("Maths", "RD Shrama", 1949);
    Book book2("PHY ", "HC Verma", 1960);

    return 0;
}