#include <iostream>
#include <string>
#include <tuple>

std::tuple<std::string, int> CreatePerson()
{
    return { "Zenghong", 24};
}

int main()
{
    auto[name, age] = CreatePerson();
    std::cout << name << std::endl;
}