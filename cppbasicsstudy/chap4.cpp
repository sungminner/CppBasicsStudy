#include <iostream>
#include <cstring>
#include <string>
#include "chap4.h"

namespace chap4 {
	void chap4Study() {
		// array basics
		std::cout << "===== array basics =====" << std::endl;
		int arr1[3] = { 3, 4, 5 };
		int arr2[2];
		// arr2 = { 1, 2 }; // wrong
		arr2[0] = 3;
		arr2[1] = 4;

		float arr3[10] = { 1.0 }; // initiaize only the first element to 1.0, anything else to 0
		std::cout << arr3[3] << std::endl;

		short arr4[] = { 1, 5, 3, 8 }; // the compiler automatically counts the number of elements; useful for strings as an array of chars

		int arr5[5]{ 1, 3, 4, 6, 7 }; // can be used without =
		float arr6[10]{}; // can initialize every element with 0

		// string
		std::cout << "\n===== string =====" << std::endl;
		char str1[8] = { 'b', 'e', 'a', 'u', 'x', ' ', 'I', '\0'}; // string has to be finished with null ('\0')
		std::cout << str1 << std::endl;
		char str2[] = "Hello, World!"; // no need to put \0
		std::cout << str2 << std::endl;
		// "a" means a pointer of an array {'a', '\0'}
		std::cout << "Hello, "
			"World!\n"; // can seperate and concatnate strings
		std::cout << std::strlen(str2) << std::endl;
		std::cout << sizeof(str2) << std::endl;

		// getting one line
		std::cout << "\n===== getting one line =====" << std::endl;
		char str3[20];
		std::cin.getline(str3, 20);
		std::cout << str3 << std::endl;
		std::cin.get(str3, 5); // limit of the chars = 5 - 1 = 4
		std::cin.get(); // use .get() to get next string properly
		std::cout << str3 << std::endl;
		std::cin.get(str3, 5).get();// or directly append .get to the previous get()
		std::cout << str3 << std::endl;

		// string class
		std::cout << "\n===== string class =====" << std::endl;
		std::string str4 = "panther";
		std::cout << str4 << std::endl;
		std::cout << str4[2] << std::endl;
		std::string str5 = str4; // can directly substitute another string; not possible between char arrays
		std::cout << str5 << std::endl;
		std::cout << str4 + str5 << std::endl;
		std::cout << str4 + " hello" << std::endl;
		std::cout << str4.size() << std::endl; // string length of std::string class
		std::cout << strlen(str3) << std::endl; // string length of char *

		std::string str6;
		getline(std::cin, str6); // read one whole line; syntax is different
		std::cout << str6 << std::endl;
	}
}