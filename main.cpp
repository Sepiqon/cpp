#include <iostream>
#include <algorithm>
using namespace std;

template <typename I>
std::string n2hexstr(I input, size_t hex_len = sizeof(I) << 1)
{
    static const char *digits = "0123456789ABCDEF";
    std::string rc(hex_len, '0');
    for (size_t i = 0, j = (hex_len - 1) * 4; i < hex_len; ++i, j -= 4)
        rc[i] = digits[(input >> j) & 0x0f];
    return rc;
}

int main()
{
    unsigned char a = 0b10000011;
    unsigned short b = 1234;
    unsigned char b1 = 0x00;
    unsigned char b2 = 0x00;
    b1 = (b >> 0) & 0xFF;
    b2 = (b >> 8) & 0xFF;

    unsigned short c = 1234;

    // zera usuwają bajt
    c &= 0x00FF;
    // liczba ustawia bajt
    c |= 0x0300;

    // zera usuwają bajt
    c &= 0x00FF;
    // liczba ustawia bajt
    c |= (0x05 << 8) | 0;

    cout << 1099 << " Innaczej: " << n2hexstr(b1) << endl;
    unsigned int kk = 64002;
    // const int i = 0;
    // i = 1;
}
