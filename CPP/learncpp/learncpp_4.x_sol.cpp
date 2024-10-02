#include <iostream>

double getDouble(){
    double num{};
    std::cout<<"Enter double value"<<std::endl;
    std::cin>>num;  
    return num; 
}

char getOperator(){
    std::cout<<"Enter Operator + , - ,* ,/ ";
    char op;
    std::cin>> op;
    return op;

}

void printResult(int x, int y, char Operator){
    switch(Operator){
        case '+':
            std::cout<<x+y<<std::endl;
            break;
        case '-':
            std::cout<<x-y<<std::endl;
            break;
        case '*':
            std::cout<<x*y<<std::endl;
            break;

        case '/':
            if(y!=0){
                std::cout<<x/y<<std::endl;
            }else{
                std::cout<<"Division by zero is not allowed"<<std::endl;
            }
            break;
        default:
            std::cout<<"Invalid Operator"<<std::endl;
            break;

        

    }
}
int main() {

    double x {getDouble()};
    double y {getDouble()};

    char Operator {getOperator()};

    printResult(x,y,Operator);


    
    

}


