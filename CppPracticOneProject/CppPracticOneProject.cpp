#include <iostream>

using namespace std;

int main()
{
    /*
    int time;
    std::cout << "Input time: ";
    std::cin >> time;

    if (time >= 8 && time < 13 || time >= 15 && time < 20) 
        std::cout << "You win\n";
    else
        std::cout << "You loos\n";
    */

    int size{ 13 };

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (i == j || i == size - 1 - j ||
                i == size / 2 || j == size / 2)
                std::cout << "* ";
            else
                std::cout << "  ";
        std::cout << "\n";
    }
        
        
    int answer;
    do 
    {
        std::cout << "1 - first figure\n";
        std::cout << "2 - second figure\n";
        
        std::cout << "0 - exit\n";
        std::cout << "yuor choise: ";
        std::cin >> answer;

        switch (answer)
        {
        case 1:

        default:
            break;
        }

    }while(answer != 0)
        
}
