#include <iostream>

#define CXX_STD_20 1

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	bool operator==(const Fraction& right) const
	{
		return (numerator_ == right.numerator_) && (denominator_ == right.denominator_);
	}

#if CXX_STD_20 == 1
	auto operator<=>(const Fraction& right) const
	{
		return numerator_ * right.denominator_ <=> denominator_ * right.numerator_;
	}
#else
	bool operator!=(const Fraction& right) const
	{
		return !(*this == right);
	}

	bool operator<(const Fraction& right) const
	{
		return  numerator_ * right.denominator_ < denominator_ * right.numerator_;
	}

	bool operator<=(const Fraction& right) const
	{
		return !(right < *this);
	}

	bool operator>(const Fraction& right) const
	{
		return right < *this;
	}

	bool operator>=(const Fraction& right) const
	{
		return !(*this < right);
	}
#endif
};

int main()
{
	Fraction f1(1, 2);
	Fraction f2(3, 4);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	std::cout << std::endl;

	Fraction f3(1, 2);
	Fraction f4(1, 2);

	std::cout << "f3" << ((f3 == f4) ? " == " : " not == ") << "f4" << '\n';
	std::cout << "f3" << ((f3 != f4) ? " != " : " not != ") << "f4" << '\n';
	std::cout << "f3" << ((f3 < f4) ? " < " : " not < ") << "f4" << '\n';
	std::cout << "f3" << ((f3 > f4) ? " > " : " not > ") << "f4" << '\n';
	std::cout << "f3" << ((f3 <= f4) ? " <= " : " not <= ") << "f4" << '\n';
	std::cout << "f3" << ((f3 >= f4) ? " >= " : " not >= ") << "f4" << '\n';
	return 0;
}
