#include <iostream>
#include <map>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divid(int a, int b);

int main()
{
    int first_num;
    int second_num;
    std::cout << "Enter first num:";
    std::cin >> first_num;
    std::cout << "Enter second num:";
    std::cin >> second_num;
    char choice;
    std::cout << "Enter math operation:";
    std::cin >> choice;
    
    std::map <char,int (*) (int,int)> result;
    result['+'] = &sum;
    result['-'] = &sub;
    result['*'] = &mul;
    result['/'] = &divid;
    std::cout << result[choice](first_num,second_num) << std::endl;
    return 0;
}
int sum (int a, int b) 
{
    return a + b;
}
int sub (int a, int b)
{
    return  a - b;
}
int mul (int a, int b)
{
    return a * b;
}
int divid (int a, int b)
{
    return a / b;
}
