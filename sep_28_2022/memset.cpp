#include <iostream>
#include <cstring>

void memset(void*, char, size_t);
int main()
{
    char arr[6] = "hello";
    char ch = 'a';
    size_t len = 2;
    memset(arr, ch, len);
    std::cout << arr << std::endl;
}

void memset(void* p, char ch, size_t len)
{
    char* ptr = (char*)p;
    while (len--)
    {
        *ptr++ = ch;
    }
}
