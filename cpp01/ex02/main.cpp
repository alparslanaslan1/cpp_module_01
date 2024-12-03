#include <iostream>
#include <string>

int main() {
    // String değişkenini oluştur
    std::string str = "HI THIS IS BRAIN";

    // String için pointer ve reference oluştur
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    // Bellek adreslerini yazdır
    std::cout << "Memory address of the string variable: " << &str << std::endl;
	std::cout << "Memory address of the string pointer: " << stringPTR << std::endl;
	std::cout << "Memory address of the string reference: " << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "Value of the string variable: " << str << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}
