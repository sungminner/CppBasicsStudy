#include <iostream>
#include <cstring>
#include <string>
#include "chap4.h"

namespace chap4 {
	struct inflatable // it is desirable to declare struct globally
	{
		char name[20];
		float volume;
		double price;
	};
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

		// struct
		std::cout << "\n===== struct =====" << std::endl;

		inflatable guest =
		{
			"Glorious Gloria",
			1.88,
			29.99
		};
		inflatable pal =
		{
			"Audacious Arthur",
			3.12,
			32.99
		};
		inflatable mayor{}; // can drop =; initialize every element with 0 including char[20]

		std::cout << guest.name << std::endl << pal.name << std::endl << mayor.name << std::endl; // mayor.name is null(\0)
		std::cout << guest.price + pal.price << std::endl;

		inflatable guest2 = pal;
		inflatable guests[3] = { guest, guest2, {"Bambi", 0.5, 2.99} };
		std::cout << guests[0].name << std::endl;
		std::cout << guests[1].volume << std::endl;
		std::cout << guests[2].price << std::endl;

		struct // anonymous struct
		{
			char name[20];
			float volume;
			double price;
		} s1, s2;
		s1 = { "hello", 2.3, 3.5 };
		s2 = { "hello2", 3.4, 5.6 };
		std::cout << s1.name << s2.volume << std::endl;

		// union
		std::cout << "\n===== union =====" << std::endl;
		union one4all // union can store one datatype, one value at a time
		{
			int int_val;
			long long_val;
			double double_val;
		};
		one4all pail;
		pail.int_val = 15; // set int_val
		std::cout << pail.int_val << std::endl;
		pail.double_val = 1.38; // this removes int_val = 15
		std::cout << pail.int_val << std::endl; // this prints a random value
		std::cout << pail.double_val << std::endl;


	}
}