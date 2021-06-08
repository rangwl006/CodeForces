//
// Created by rangw on 8/6/2021.
//

#include <iostream>

int main()
{
    int elem;
    int center = 3;
    for(auto i = 1; i <= 5; i++)
    {
        for(auto j =1; j <= 5; j++)
        {
            std::cin >> elem;
            if(elem == 1)
            {
                std::cout << abs(i - center) + abs(j - center);
                break;
            }
        }
    }

    return 0;
}