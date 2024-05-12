#include <iostream> 


void getNumber()
{
    int num {};
    std::cin >> num;
}

int main()
{

    std::cout << "What is the number? ";
    getNumber();
    
    return 0;
}

