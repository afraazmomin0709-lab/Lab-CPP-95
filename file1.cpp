#include<iostream>
namespace SYCS4
{
    int add()
{
    int a,b,sum;
    std::cout << "Enter two numbers";
    std::cin >> a >> b ;
    std::cout << "Sum of two no.s is " <<(a+b);
    return 0;
}
 int sub()
{
    int a,b,sub;
    std::cout << "Enter two numbers";
    std::cin >> a >> b ;
    std::cout << "sub of two no.s is " <<(a-b);
    return 0;
}
}