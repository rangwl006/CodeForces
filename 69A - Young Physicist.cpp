#include <iostream>
#include <string>
using namespace std;

int main() {

    int x,y,z, xSum{0}, ySum{0}, zSum{0};
    int n; // number of lines
    std::cin >> n;

    while(n != 0)
    {
        cin >> x;
        xSum += x;
        cin >> y;
        ySum += y;
        cin >> z;
        zSum += z;
        n--;
    }

    if(xSum!= 0 || ySum!= 0 || zSum!= 0)
    {
        std::cout << "NO";
    }
    else
    {
        std::cout << "YES";
    }
    return 0;
}
