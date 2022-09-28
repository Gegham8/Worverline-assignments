#include <iostream>
#include <string>
bool endsWith(std::string& , std::string&);

int main()
{
    std::string str = "hello, world";
    std::string str2 = "ld";
    std::cout << endsWith(str, str2);
}
bool endsWith(std::string& str, std::string& str2)
{
    return str.substr(str.size() - str2.size()) == str2;
}