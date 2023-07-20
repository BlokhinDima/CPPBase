#include <cmath>
#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

	int calcGreatestCommonDivisor(int numerator, int denominator)
	{
		numerator = abs(numerator);
		int common_divisor{2};

		while (common_divisor <= numerator && common_divisor <= denominator)
		{
			if ((numerator % common_divisor == 0) && (denominator % common_divisor == 0))
			{
				return common_divisor * calcGreatestCommonDivisor(numerator / common_divisor, denominator / common_divisor);
			}
			common_divisor++;
		}
		return 1;
	}

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
		int common_divisor = calcGreatestCommonDivisor(numerator, denominator);
		numerator_ /= common_divisor;
		denominator_ /= common_divisor;
	}

	Fraction& operator++()
	{
		numerator_ = numerator_ + denominator_;
		return *this;
	}

	Fraction operator++(int)
	{
		auto copy = *this;
		numerator_ = numerator_ + denominator_;
		return copy;
	}

	Fraction operator+(const Fraction right) const
	{
		int new_numerator = numerator_ * right.denominator_ + denominator_ * right.numerator_;
		int new_denumerator = denominator_ * right.denominator_;
		return Fraction(new_numerator, new_denumerator);
	}

	Fraction& operator--()
	{
		numerator_ = numerator_ - denominator_;
		return *this;
	}

	Fraction operator--(int)
	{
		auto copy = *this;
		numerator_ = numerator_ - denominator_;
		return copy;
	}

	Fraction operator-() const
	{
		return Fraction(-numerator_, denominator_);
	}

	Fraction operator-(const Fraction right) const
	{
		return (*this) + (-right);
	}

	Fraction operator*(const Fraction right) const
	{
		int new_numerator = numerator_ * right.numerator_;
		int new_denumerator = denominator_ * right.denominator_;
		return Fraction(new_numerator, new_denumerator);
	}

	Fraction operator/(const Fraction right) const
	{
		int new_numerator = numerator_ *  right.denominator_;
		int new_denumerator = denominator_ * right.numerator_;
		return Fraction(new_numerator, new_denumerator);
	}

	friend std::ostream& operator<<(std::ostream& left, const Fraction right);
};


std::ostream& operator<<(std::ostream& left, const Fraction right)
{
	left << right.numerator_ << '/' << right.denominator_;
	return left;
}


int main()
{
	int first_numerator{};
	int first_denomerator{};
	std::cout << "Enter first fraction numerator: ";
	std::cin >> first_numerator;
	std::cout << "Enter first fraction denomerator: ";
	std::cin >> first_denomerator;
	Fraction f1(first_numerator, first_denomerator);

	int second_numerator{};
	int second_denomerator{};
	std::cout << "Enter second fraction numerator: ";
	std::cin >> second_numerator;
	std::cout << "Enter second fraction denomerator: ";
	std::cin >> second_denomerator;
	Fraction f2(second_numerator, second_denomerator);

	std::cout << f1 << " + " << f2 << " = " << f1 + f2 << '\n';
	std::cout << f1 << " - " << f2 << " = " << f1 - f2 << '\n';
	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << '\n';
	std::cout << f1 << " / " << f2 << " = " << f1 / f2 << '\n';

	std::cout << "++" << f1 << " * " << f2 << " = ";
	std::cout << ++f1 * f2 << '\n';
	std::cout << "Fraction 1 value = " << f1 << '\n';

	std::cout << f1 << "--" << " * " << f2 << " = ";
	std::cout << f1-- * f2 << '\n';
	std::cout << "Fraction 1 value = " << f1 << '\n';

	return 0;
}
