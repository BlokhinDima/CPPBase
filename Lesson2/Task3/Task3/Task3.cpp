#include <iostream>
#include <string>

struct Address
{
    std::string city{};
    std::string street{};
    short building_number{};
    short flat_number{};
    int index{};
};


void printAddress(Address& address)
{
    std::cout << "City: " << address.city << std::endl;
    std::cout << "Street: " << address.street << std::endl;
    std::cout << "Building number: " << address.building_number << std::endl;
    std::cout << "Flat number: " << address.flat_number << std::endl;
    std::cout << "Index: " << address.index << std::endl;
    std::cout << std::endl;
}


int main()
{
    Address address1 { "Moscow", "Lenina", 168, 857, 953769 };
    Address address2 { "Saint Petersburg", "Nevskiy Prospekt", 15, 123, 920305 };
    printAddress(address1);
    printAddress(address2);
    return 0;
}
