#include <iostream>
#include <string>

int main()
{
    int b = 2;

    {
         int b = 3;
        std::cout << b << std::endl; 
    }
    std::cout << b << std::endl; 
    
    
}

