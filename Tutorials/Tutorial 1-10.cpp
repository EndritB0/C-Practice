#include <iostream>
#include <cmath>


namespace first
{
    int z = 1;
}

namespace second
{
    int z = 2;
}

//replaces types names to make it easier to write and the readability of the code
//using does the same thing
//typedef std::string text_string;
using text_string = std::string;

void tutorial()
{
    //Printing to console
    std::cout << "Hello, World!" << std::endl;

    // integer (int) is for whole numbers
    int x = 5;
    int y = 6;
    std::cout << x + y << std::endl;

    // double (double) is for decimal numbers
    double a = 5.5;
    double b = 5.6;
    std::cout << a + b << std::endl;

    // single character (char)
    char chara = 'a';
    char charb = 'B';
    std::cout << chara << charb << std::endl;

    // strings (std::string)
    std::string name = "Endrit";
    std::cout << "Hello " << name << std::endl;

    // boolean (boole) true or false
    bool light = true;
    bool power = false;

    // constant (const) will make the variable unable to be edited
    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;
    std::cout << circumference << std::endl;

    //namespace, it's used to reduce same name conflicts (similar to Java classes and attributes)
    int z = 0;
    std::cout << z << std::endl;
    std::cout << first::z << std::endl;
    std::cout << second::z << std::endl;

    //typedef
    text_string dob = "1/1/2000";
    std::cout << dob << std::endl;

    //type conversion
    //implicit
    int num1 = 5 + 3.14;
    double num2 = 5 + 3.14;
    char intchar = 65;

    //explicit
    int correct = 8;
    int questions = 10;
    double percentage = (correct) / (double)questions * 100;
    std::cout << percentage << "%" << std::endl;


    //User Input
    //std::cin is to take user input and save to a variable
    //std::getline(); saves the user input if there are space (for names and etc)
    std::string username;
    int userage;

    std::cout << "Username: ";
    //std::getline(std::cin >> std::ws, username);

    std::cout << "Age: ";
    //std::cin >> userage;

    std::cout << "Name: " << username << std::endl;
    //std::cout << "Age: " << userage << std::endl;

    //Math Function
    double mathx = 3;
    double mathy = 4;
    double mathz;

    std::cout << "Max: " << std::max(mathx, mathy) << std::endl;
    std::cout << "Min: " << std::min(mathx, mathy) << std::endl;
    std::cout << "3^4: " << pow(mathx, mathy) << std::endl;
    std::cout << "sqrt 4: " << sqrt(mathy) << std::endl;
    std::cout << "Abs -4: " << abs(-4) << std::endl;
    std::cout << "Rounding Pi: " << round(pi) << std::endl;
    std::cout << "Rounding Up Pi: " << ceil(pi) << std::endl;
    std::cout << "Rounding Down Pi: " << floor(pi) << std::endl;
}

void pythagoras()
{
    double a, b, c;

    std::cout << "Please enter side A: ";
    std::cin >> a;
    std::cout << "Please enter side B: ";
    std::cin >> b;

    c = sqrt((pow(a, 2) + pow(b, 2)));
    std::cout << "Side C length is: " << c << std::endl;
}


int main()
{
    tutorial();
    pythagoras();
    return 0;
}