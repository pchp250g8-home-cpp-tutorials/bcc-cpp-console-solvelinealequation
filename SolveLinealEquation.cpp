#include <iostream>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    float a, b;
    system("cls");
    std::cout << "Input coefficients of lineal equation\r\n";
    std::cin >> a >> b;
    std::cout << "Try to solve the equation : " << a << " * x + "
    	      << b << " = 0\r\n";
    if ((a == 0) && (b == 0))
    {
        std::cout << "The answer is any number\r\n";
    }
    else if ((a == 0) && (b != 0))
    {
        std::cout << "The equation has no solution\r\n";
    }
    else
    {
        std::cout << "The equation has the following solution : "
        	      << (- b / a) << "\r\n";
    }
    std::cin.ignore();
    std::cin.get();
    return 0;
}

