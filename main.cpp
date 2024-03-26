#include <iostream>
#include <string>
#include <cstring>

// main.cpp
std::string bigAdd (std::string a, std::string b);
std::string bigMinus (std::string a, std::string b);

int main(){
    std::string inputA;
    std::string inputB;

    std::cout << "First number\t>> "; 
    std::cin>>inputA;
    std::cout << "Second number\t>> "; 
    std::cin>>inputB;

    std::string result;
    std::cout <<"Sum\t\t>> "<< bigAdd(inputA,inputB) << std::endl;
    std::cout <<"Sub\t\t>> "<<bigMinus(inputA,inputB)<< std::endl;

}
