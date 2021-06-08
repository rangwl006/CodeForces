#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int total =n;
    int pct, pctSum{0};

    while(n--)
    {
        std::cin >> pct;
        pctSum += pct;
    }
    std::cout << static_cast<float>(pctSum)/static_cast<float>(total);
    return 0;
}