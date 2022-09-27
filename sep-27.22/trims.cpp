#include <iostream>
#include <string>

std::string trims(const std::string& str)
{
    std::string result;
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        result += str[i];
    }
    return result;
}
int main()
{
    std::string str("     hello   ");
    std::cout << trims(str);
}