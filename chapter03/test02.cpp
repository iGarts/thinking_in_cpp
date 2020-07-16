#include <iostream>

void printBinary(const unsigned char val)
{
    for(int i=7;i>=0;i--)
    if(val & (1<<i))
        std::cout <<"1";
        else std::cout <<"0";
}

using namespace std;

#define PR(STR, EXPR) \
cout << STR; printBinary(EXPR); cout << endl;

int main() {
unsigned int getval;
unsigned char a, b;
cout << "Enter a number between 0 and 255: ";
cin >> getval; a = getval;
PR("a in binary: ", a);
cout << "Enter a number between 0 and 255: ";
cin >> getval; b = getval;
PR("b in binary: ", b);
PR("a | b = ", a | b);
PR("a & b = ", a & b);
PR("a ^ b = ", a ^ b);
PR("~a = ", ~a);
PR("~b = ", ~b);
unsigned char c = 0x5A;
PR("c in binary: ", c);
a |= c;
PR("a |= c; a = ", a);
b &= c;
PR("b &= c; b = ", b);
b ^= a;
PR("b ^= a; b = ", b);
} 