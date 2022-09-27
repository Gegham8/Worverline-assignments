#include <iostream>
#include <string>

std::string Itrems(const std::string& str)
{
    std::string result;
    for (int i = 0; i < str.size(); ++i)
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
    std::string str("     hello");
    std::string s = Itrems(str);
}
