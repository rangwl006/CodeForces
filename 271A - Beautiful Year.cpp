//
// Created by rangw on 8/6/2021.
//

#include <iostream>
#include <vector>
#include <map>

void findUniqueYear();
void findUniqueYear(int& year);

int main()
{
    // read in input
    std::string year;
    std::vector<int> seen;
    std::cin >> year;
    int i_year = std::stoi(year);
    findUniqueYear(i_year);

    // iterative solution
    // findUniqueYear()

    return 0;
}

// iterative approach
void findUniqueYear()
{
    std::string year;
    std::vector<int> seen;
    std::cin >> year;
    int i_year = std::stoi(year);
    bool bFound = false;
    while(!bFound)
    {
        std::map<char, int> m;
        i_year += 1;
        std::string s_year = std::to_string(i_year);

        for(auto i=0; i < s_year.length(); i++)
        {
            if(m.count(s_year[i]) == 0)
            {
                m[s_year[i]] = 1;
                bFound = true;
            }
            else
            {
                bFound = false;
                break;
            }
        }
        if(bFound)
        {
            std::cout << s_year;
            break;
        }

    }
}

// recursive solution
void findUniqueYear(int& year)
{
    // stop condition
    year ++;
    // if has unique digits
    std::string s_year = std::to_string(year);
    std::map<int,int> m;
    bool isFound;
    for(auto i =0; i < s_year.length(); i++)
    {
        if(m.count(s_year[i]) == 0)
        {
            isFound = true;
            m[s_year[i]] = 1;
        }
        else
        {
            isFound = false;
            break;
        }
    }
    if(isFound)
    {
        std::cout << s_year;
        return;
    }
    else
        findUniqueYear(year);

}