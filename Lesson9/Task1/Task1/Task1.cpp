#include <iostream>

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

	bool operator!=(const Fraction& right) const
	{
		return !(*this == right);
	}

	bool operator<(const Fraction& right) const
	{
		double this_f = static_cast<double>(numerator_) / denominator_;
		double other_f = static_cast<double>(right.numerator_) / right.denominator_;
		return  this_f < other_f;
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

};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}
