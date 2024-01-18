#include <iostream>

int main()
{
    std::cout << "Hello World" << std::endl;
    std::cout << "Codehelp " << std::endl;

    // Taking Input

    std::cout << "Enter your Name" << std::endl;
    std::string name;
    // std::cin >> name;
    std::cout << "your name is " << name << std::endl;
    // std:: bool does not exist
    bool flag = true;
    std::cout << "boolean value is " << flag << std::endl;

    // char ch =256;
    // std::cout<<ch<<std::endl;  // overflow

    int a = 4;
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(float) << std::endl;
    std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(char) << std::endl;
    std::cout << sizeof(bool) << std::endl;
    std::cout << sizeof(long) << std::endl;
    std::cout << sizeof(long long) << std::endl;
    std::cout << sizeof(short) << std::endl;

    // implicit type conversion
    // by compiler
    int num = 'a';
    int num3 = 'A';
    int num4 = '$';
    std::cout << num << " " << num3 << " " << num4 << std::endl;

    // explicit type conversion
    // by user
    double d = 5.7;
    int x = (int)d + 2;
    std::cout << x;

    // char ch = 1024;
    // std::cout<<ch<<std::endl;

    // Arithmetic Operator

    int num1 = 2;
    int num2 = 3;

    std::cout << num1 + num2 << std::endl;
    std::cout << num1 - num2 << std::endl;
    std::cout << num1 * num2 << std::endl;
    std::cout << num1 / num2 << std::endl;
    std::cout << num1 % num2 << std::endl;

    return 0;
}
