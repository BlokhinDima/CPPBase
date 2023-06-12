#include <iostream>
#include <fstream>

namespace program_status
{
    static const int OK = 0;
    static const int ERROR = 1;
}

int main()
{
    std::ifstream in_file{ "in.txt" };

    if (!in_file.is_open())
    {
        std::cout << "Couldn't open file!";
        return program_status::ERROR;
    }

    int first_array_size;
    in_file >> first_array_size;
    int* first_array = new int[first_array_size];
    for (int i = 0; i < first_array_size; ++i)
    {
        in_file >> first_array[i];
    }

    int second_array_size;
    in_file >> second_array_size;
    int* second_array = new int[second_array_size];
    for (int i = 0; i < second_array_size; ++i)
    {
        in_file >> second_array[i];
    }
    in_file.close();

    std::ofstream out_file{ "out.txt" };

    out_file << second_array_size << '\n';
    out_file << second_array[second_array_size - 1] << ' ';
    for (int i = 0; i < second_array_size - 1; ++i)
    {
        out_file << second_array[i] << ' ';
    }
    out_file << '\n';

    out_file << first_array_size << '\n';
    for (int i = 1; i < first_array_size; ++i)
    {
        out_file << first_array[i] << ' ';
    }
    out_file << first_array[0];
    out_file.close();

    delete[] first_array;
    delete[] second_array;
    return program_status::OK;
}