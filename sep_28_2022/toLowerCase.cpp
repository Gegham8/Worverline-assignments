#include <iostream>
#include <string>

void toLowerCase(std::string&);
int main()
{
    std::string str = "HELLO";
    toLowerCase(str);
    std::cout << str << std::endl;
}
void toLowerCase(std::string& str)
{
    int size = str.size();
    for (int i = 0; i < size; ++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
}