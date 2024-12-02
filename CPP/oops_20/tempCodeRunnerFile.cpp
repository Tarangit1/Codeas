#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class ToDoList{
    private:
    std::vector<std::string> Books;
    public:
    void addBook(const std::string& book){
        Books.push_back(book);
    }

    void removeBook(const std::string& book){
        Books.erase(std::remove(Books.begin(), Books.end(), book), Books.end());
    }

    void printBooks(){
        for(auto book: Books){
            std::cout << book << std::endl;
        }
    }
};

int main(){
    ToDoList list;

    while(true){
        std::string book;
        std::cout << "Enter the book name: ";
        std::getline(std::cin, book);
        if(book == "exit"){
            break;
        }
        list.addBook(book);
    }
    std::cout << "Enter the book name to remove: ";
    std::string bookToRemove;
    std::getline(std::cin, bookToRemove);
    list.removeBook(bookToRemove);
    list.printBooks();
    std::cout << "------------------------After removing book----------------------" << std::endl;
    list.removeBook("book 3");
    list.printBooks();
    return 0;
}

