#include <iostream>
#include <string>

class BadLength : public std::exception
{
public:
    const char* what() const override { return "Bad word length!"; }
};


int function(std::string str, int forbidden_length)
{
    if (str.length() != forbidden_length)
    {
        return str.length();
    }
    else
    {
        throw BadLength();
    }
}


int main()
{
    try
    {
        int forbidden_length{};
        std::string word{};

        std::cout << "Input forbidden length: ";
        std::cin >> forbidden_length;

        for (;;)
        {
            std::cout << "Input word: ";
            std::cin >> word;
            int word_length = function(word, forbidden_length);
            std::cout << "Word \"" << word << "\" length is " << word_length << std::endl;
        }
    }
    catch (const BadLength& ex)
    {
        std::cout << ex.what() << " Goodbuye!" << std::endl;
        return 0;
    }
}
