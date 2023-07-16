#pragma once
#include <stdexcept>
#include <string>

namespace shape_exceptions
{
	class ShapeCreationError : std::domain_error
	{
	public:
		ShapeCreationError(std::string message);
		const char* what() const override;
	};
}
