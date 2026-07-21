#include<iostream>
namespace SYCS4
{
    int add()
{
    int a,b,sum;
    std::cout << "Enter two numbers:";
    std::cin >> a >> b ;
    std::cout << "Sum of two no.s is " <<(a+b) << "\n";
    return 0;
}
 int sub()
{
    int a,b,sub;
    std::cout << "Enter two numbers:";
    std::cin >> a >> b ;
    std::cout << "sub of two no.s is " <<(a-b) << "\n";
    return 0;
}
 int multi()
{
    int a,b,multi;
    std::cout << "Enter two numbers:";
    std::cin >> a >> b ;
    std::cout << "Multiplicatioin of two no.s is " <<(a*b) << "\n";
    return 0;
}
 int div()
{
    int a,b,div;
    std::cout << "Enter two numbers:";
    std::cin >> a >> b ;
    std::cout << "Division of two no.s is " <<(a/b) << "\n";
    return 0;
}
}