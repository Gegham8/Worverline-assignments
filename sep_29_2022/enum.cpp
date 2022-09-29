#include <iostream>
#include <string>
#include <map>

enum class Colors {red, green, blue};

Colors string_to_enum(const std::string&);
std::string enum_to_string(const Colors&);

int main()
{
    std::cout << (int)string_to_enum("blue") << std::endl;
    std::cout << enum_to_string(Colors::red) << std::endl;
}

Colors string_to_enum(const std::string& lg)
{
    std::map<std::string, Colors> map;
    map["red"] = Colors::red;
    map["green"] = Colors::green;
    map["blue"] = Colors::blue;
    return map[lg] ;
}
std::string enum_to_string(const Colors& lg)
{
    std::map<Colors, std::string> map;
    map[Colors::red] = "red";
    map[Colors::green] = "green";
    map[Colors::blue] = "blue";
    return map[lg];
}
