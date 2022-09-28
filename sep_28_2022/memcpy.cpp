#include <iostream>
#include <cstring>

void memcpy(void*, void*, size_t);

int main()
{
    char arr[] = "hello";
    char arr2[6] {};
    memcpy(arr, arr2, 2);
    std::cout << arr2 << std::endl;
}
void memcpy(void* src, void* dst, size_t count)
{
    char* ptr = (char*)src;
    char* ptr2 = (char*)dst;
    if (count > strlen(ptr))
    {
        return;
    }
    while (count--)
    {
        *ptr2++ = *ptr++;
    }
}