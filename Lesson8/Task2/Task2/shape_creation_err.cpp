#include "shape_creation_err.h"

shape_exceptions::ShapeCreationError::ShapeCreationError(std::string message) : std::domain_error(message)
{

}

const char* shape_exceptions::ShapeCreationError::what() const
{
	return domain_error::what();
}