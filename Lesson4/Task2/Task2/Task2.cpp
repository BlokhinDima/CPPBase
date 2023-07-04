#include <iostream>
#include <string>
#include <fstream>


enum class ProgramState
{
    OK,
    ERROR,
};


class Address
{
public:

    Address()
    {
        city = "Unknown";
        street = "Unknown";
        building_number = 0;
        flat_number = 0;
    };

    Address(std::string city, std::string street, int building_number, int flat_number)
    {
        this->city = city;
        this->street = street;
        this->building_number = building_number;
        this->flat_number = flat_number;
    }

    std::string getOutputAddress()
    {
        return city + ", " + street + ", " + std::to_string(building_number) +
            ", " + std::to_string(flat_number) + '\n';
    }

    bool isLexicallyBiggerThanOther(Address& other)
    {
        if (this->city > other.city)
        {
            return true;
        }
        return false;
    }

private:
    std::string city{};
    std::string street{};
    int building_number{};
    int flat_number{};
};


void sort(Address* addresses, int size)
{
    Address temp;
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (addresses[j].isLexicallyBiggerThanOther(addresses[j + 1]))
            {
                temp = addresses[j];
                addresses[j] = addresses[j + 1];
                addresses[j + 1] = temp;
            }
        }
    }
}


int main()
{
    std::ifstream in_file{ "in.txt" };
    if (!in_file.is_open())
    {
        std::cout << "Couldn't open file!";
        return static_cast<int>(ProgramState::ERROR);
    }

    int addresses_num;
    in_file >> addresses_num;
    Address* addresses = new Address[addresses_num];

    std::string city;
    std::string street;
    int building_number;
    int flat_number;
    for (int i = 0; i < addresses_num; ++i)
    {
        in_file >> city;
        in_file >> street;
        in_file >> building_number;
        in_file >> flat_number;
        addresses[i] = Address(city, street, building_number, flat_number);
    }
    in_file.close();
    sort(addresses, addresses_num);
    
    std::ofstream out_file{ "out.txt" };
    out_file << addresses_num << '\n';
    for (int i = 0; i < addresses_num; ++i)
    {
        out_file << addresses[i].getOutputAddress();
    }
    out_file.close();

    delete[] addresses;
    return static_cast<int>(ProgramState::OK);
}