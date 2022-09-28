#include <iostream>
#include <string>
bool startsWith(std::string& , std::string&);

int main()
{
    std::string str = "hello, world";
    std::string str2 = "o";
    std::cout << startsWith(str, str2);
}
bool startsWith(std::string& str, std::string& str2)
{
    return str.substr(0,str2.size()) == str2;
}
