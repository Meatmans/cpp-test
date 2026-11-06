#include <iostream>

int main()
{
    int hidden_number = 10;
    int user_guess;
    int tries= 0;
    while(tries < 5)
    {
        std::cin >> user_guess;
        if (user_guess == hidden_number)
        {
            std::cout << "CONGRATS!";
            break;
        }
          if (user_guess < 0)
          {
            continue;
          }
          tries += 1;
    }

}
