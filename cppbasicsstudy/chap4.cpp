#include <iostream>
#include <cstring>
#include "chap4.h"

namespace chap4 {
	void chap4Study() {
		// array basics
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
		char str3[20];
		std::cin.getline(str3, 20);
		std::cout << str3 << std::endl;
		std::cin.get(str3, 5);
		std::cin.get(); // use .get() to get next string properly
		std::cout << str3 << std::endl;
		std::cin.get(str3, 5).get();// or directly append .get to the previous get()
		std::cout << str3 << std::endl;
	}
}