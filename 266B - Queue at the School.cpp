//
// Created by rangw on 8/6/2021.
//

#include <iostream>
#include <sstream>
#include <queue>
int main()
{
    std::string s;
    std::string borze;
    std::cin >> s;
    int n{};
    while(n < s.length())
    {
        char temp = s[n];

        if(s[n] == '.'){
            borze += '0';
        }
        if(s[n] == '-' && s[n+1] == '.')
        {
            borze += '1';
            n++;
        }
        if(s[n] =='-' && s[n+1] =='-')
        {
            borze += '2';
            n++;
        }
//        if(temp == '-')
//        {
//            if(s[n+1] == '-')
//            {
//                borze.push_back('2');
//                n++;
//            }
//            if(s[n+1] == '.' && &s[n+1] != &s[0] )
//            {
//                borze.push_back('1');
//                n++;
//            }
//        }
//        if(temp == '.')
//        {
//            if(s[n+1] == '-' || &s[n+1] == &s[0] )
//            {
//                borze.push_back('0');
//            }
//        }
        n++;
    }
    std::cout << borze << std::endl;
}