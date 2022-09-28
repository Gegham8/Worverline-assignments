#include <iostream>
#include <fstream>
#include <vector>
#include <string>
void split(std::string& s)
{
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == ',')
        {
            s.erase(s.begin() + i);
            --i;
        }    
    }
}
int main()
{
    std::fstream fin;
    std::string str = "fasm.txt";
    std::string str2 = "output.txt";
    std::string word;
    fin.open(str);
    std::vector<std::string> vec(3);
    std::fstream fout;
    fout.open(str2);
    if(!fin.is_open())
    {
        throw std::runtime_error("Can't open file ");
    }
    int i = 0;
    while (fin >> word)
    {
        split(word);
        if (!word.empty()) {
            fout << word << std::endl;
        }
    }
    
}