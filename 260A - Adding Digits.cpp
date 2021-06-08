#include <iostream>
#include <math.h>

int main()
{
    long long int a, b, n;
    std::cin >> a >> b >> n;
    bool bStop = false;

    if(a%b == 0)
    {
        std::cout << a;
        for(auto i=0; i<n; i++)
        {
            std::cout << "0";
        }
        return 0;
    }
    int x{-1};
    for(auto d=0; d<10; d++)
    {
        if( (a*10+d) % b == 0)
        {
            x = a * 10 + d;
            break;
        }
    }

    if(x == -1)
    {
        std::cout << x;
    }
    else
    {
        std::cout << x;
        for(auto i=0; i<n-1; i++)
        {
            std::cout << "0";
        }
    }
    return 0;
}