#include <iostream>
#include <string>
#include <vector>
std::vector<std::string> split(std::string&, std::string);
int main()
{
    std::string s = "he,ll,o";
    std::string delim = ",:";
    std::vector<std::string> vec = split(s,delim);
    for (auto x : vec)
    {
        std::cout << x << std::endl;
    }
    
}
std::vector<std::string> split(std::string& s, std::string delim)
{
    std::vector<std::string> vec;
    int j = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        int pos = s.find(delim[j],i);
        if (pos != -1)
        {
            vec.push_back(s.substr(0,pos ));
            s.erase(s.begin(), s.begin() + pos + 1);
            i = 0;
            j = 0;
        }
        else
        {
            ++j;
        }
    }
    vec.push_back(s);
    return vec;
}
