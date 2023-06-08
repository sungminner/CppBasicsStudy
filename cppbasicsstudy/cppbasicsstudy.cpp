#include <iostream>
#include <climits>

#define ZERO 0 // like a search and replace tool

void chap3Study() {
    int n_int = INT_MAX;
    // int is the most efficient datatype for expressing integers
    // unsigned as well, if it is guaranteed to be greater than or equal to 0
    short n_short = SHRT_MAX;
    // short is guaranteed to be 16 bits, regardless of c++ version
    long n_long = LONG_MAX;
    // short is guaranteed to be 32 bits, regardless of c++ version
    long long n_llong = LLONG_MAX;

    std::cout << sizeof(int) << std::endl; // use () for datatypes
    std::cout << sizeof n_int << std::endl; // no need to use () for variables
    std::cout << sizeof n_short << std::endl;
    std::cout << sizeof n_long << std::endl;
    std::cout << sizeof n_llong << std::endl;
    std::cout << INT_MAX << std::endl;
    std::cout << INT_MIN << std::endl;
    std::cout << CHAR_BIT << std::endl;
    std::cout << ZERO << std::endl;
    std::cout << std::endl;

    // various ways to initialize int
    int a = 3;
    int b(4);
    int c = { 5 };
    int d{ 6 };
    int e = {}; // initialize to 0
    int f{}; // initialize to 0
    
    std::cout << a << b << c << d << e << f << std::endl;
    std::cout << std::endl;

    // arithmetics
    int binary = 0b110;
    int octal = 042;
    int decimal = 1324;
    int hexa = 0x4ff;

    std::cout << binary << std::endl;
    std::cout << octal << std::endl;
    std::cout << decimal << std::endl;
    std::cout << hexa << std::endl;

    // print with different arithmetics
    // std::cout << std::bin << binary << std::endl; -> invalid
    std::cout << std::oct << octal << std::endl;
    std::cout << std::dec << decimal << std::endl;
    std::cout << std::hex << hexa << std::endl;
    std::cout << std::dec; // always reset it back to decimal unless necessary
    std::cout << std::endl;

    // change a memory size of a hardcoded number using suffixes
    std::cout << sizeof 0x2ff << std::endl; // 4 (default int)
    std::cout << typeid(0x2ff).name() << std::endl; // int
    std::cout << sizeof 0x2ffL << std::endl; // 4 (long)
    std::cout << typeid(0x2ffL).name() << std::endl; // long
    std::cout << sizeof 0x2ffULL << std::endl; // 8
    std::cout << typeid(0x2ffULL).name() << std::endl; // unsigned long long
    std::cout << std::endl;
}

int main()
{
    chap3Study();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
