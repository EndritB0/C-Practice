#include <iostream>

void task11()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 20)
    {
        std::cout << "You are an adult" << std::endl;
    }
    else if (age >= 13)
    {
        std::cout << "You are a teenager" << std::endl;
    }
    else
    {
        std::cout << "You are not a teenager" << std::endl;
    }
}

void task12()
{
    int month;
    std::cout << "Enter your month: ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "January" << std::endl;
        break;

    case 2:
        std::cout << "February" << std::endl;
        break;

    case 3:
        std::cout << "March" << std::endl;
        break;

    case 4:
        std::cout << "April" << std::endl;
        break;

    case 5:
        std::cout << "May" << std::endl;
        break;

    case 6:
        std::cout << "June" << std::endl;
        break;

    case 7:
        std::cout << "July" << std::endl;
        break;

    case 8:
        std::cout << "August" << std::endl;
        break;

    case 9:
        std::cout << "September" << std::endl;
        break;

    case 10:
        std::cout << "October" << std::endl;
        break;

    case 11:
        std::cout << "November" << std::endl;
        break;
    case 12:
        std::cout << "December" << std::endl;
        break;

    default:
        std::cout << "Invalid Input" << std::endl;
    }
}

void task13()
{
    char op;
    double a, b, result;

    std::cout << "Enter your operation (+ - / *): ";
    std::cin >> op;

    std::cout << "Enter your A: ";
    std::cin >> a;
    std::cout << "Enter your B: ";
    std::cin >> b;

    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        std::cout << "Invalid Input" << std::endl;
        return;
    }

    std::cout << a << " " << op << " " << b << " = " << result << std::endl;
}

void task14()
{
    int grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;

    if (grade >= 40)
    {
        std::cout << "Pass" << std::endl;
    }
    else
    {
        std::cout << "Fail" << std::endl;
    }

    // condition ? expression1 : expression2;
    // tenary operator does the same as if/else statement

    grade >= 40 ? std::cout << "Pass" << std::endl : std::cout << "Fail" << std::endl;

    int number;
    std::cout << "Enter your number: ";
    std::cin >> number;

    number % 2 ? std::cout << "Odd" << std::endl : std::cout << "Even" << std::endl;

    bool hungry = true;
    hungry ? std::cout << "Hungry" << std::endl : std::cout << "Not Hungry" << std::endl;
    std::cout << (!hungry ? "Hungry" : "Not Hungry") << std::endl;
}

void task15()
{
    int temp;
    std::cout << "Enter your temperature: ";
    std::cin >> temp;

    if (temp >= 0 && temp <= 100)
    {
        std::cout << "Not boiling yet" << std::endl;
    }
    else if (temp >= 100 && temp <= 200)
    {
        std::cout << "Boiling Point for water" << std::endl;
    }
}

void task16()
{
    double temp;
    char unit;
    std::cout << "Enter what unit you would like to convert to (F for Fahrenheit, C for Celsius): ";
    std::cin >> unit;

    if (std::tolower(unit) == 'f')
    {
        std::cout << "Enter your temperature: ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32;
        std::cout << "Your new temperature is " << temp << " " << "F" << std::endl;
    }
    else if (std::tolower(unit) == 'c')
    {
        std::cout << "Enter your temperature: ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout << "Your new temperature is " << temp << " " << "C" << std::endl;
    }
}

void task17()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    name.length() > 12 ? std::cout << "Name is too long" << std::endl : std::cout << "Hello " << name << std::endl;

    name.empty() ? std::cout << "Name is empty" << std::endl : std::cout << "Have a nice day" << std::endl;

    //name.clear() will be deleted

    name.append("@gmail.com");
    std::cout << "Email: " << name << std::endl;

    name.insert(0, "e");
    std::cout << "New name is: " << name << std::endl;

    std::cout << "First Character in name is: " << name.at(0) << std::endl;

    std::cout << "Location of the character 'e': " << name.find('e') << std::endl;

    name.erase(0, 2);
    std::cout << "New name is: " << name << std::endl;
}

void task18()
{
    // while loop
    std::string name;

    while (name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Name: " << name << std::endl;
    std::getline(std::cin, name);
}

void task19()
{
    // do while loop, it will run the code once then check the conditions

    int number;
    do
    {
        std::cout << "Enter your age: ";
        std::cin >> number;
    } while (number < 0);
    std::cout << "The number is " << number << std::endl;
}

void task20()
{
    std::string name = "Endrit";
    for (int i = 0; i < name.length(); i++)
    {
        std::cout << name.at(i) << std::endl;
    }

    for (int i = 0; i <= 1000; i++)
    {
        std::cout << i << ", ";
    }
}

int main()
{
    task11();
    task12();
    task13();
    task14();
    task15();
    task16();
    task17();
    task18();
    task19();
    task20();
    return 0;
}
