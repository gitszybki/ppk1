#include <iostream>

//3 liczby w kolejnosci rosnacjej bez tablic

int main() {

    int a, b, c;

    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;
    
    if (a < b && b < c)
    {
        std::cout << a << "\n" << b << "\n" << c << std::endl;
    }
    if (a < c && c < b)
    {
        std::cout << a << "\n" << c << "\n" << b << std::endl;
    }
    if (b < a && a < c)
    {
        std::cout << b << "\n" << a << "\n" << c << std::endl;
    }
    if (b < c && c < a)
    {
        std::cout << b << "\n" << c << "\n" << a << std::endl;
    }
    if (c < a && a < b)
    {
        std::cout << c << "\n" << a << "\n" << b << std::endl;
    }
    if (c < b && b < a)
    {
        std::cout << c << "\n" << b << "\n" << a << std::endl;
    }
}