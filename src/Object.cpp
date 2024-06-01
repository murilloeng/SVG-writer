//svg
#include "SVG-writer/inc/Object.hpp"

namespace svg
{
	//constructor
	Object::Object(void)
	{
		return;
	}

	//destructor
	Object::~Object(void)
	{
		return;
	}

	//color
	void Object::color(char* color_string, const double* color_data) const
	{
		const unsigned r = 255 * color_data[0];
		const unsigned g = 255 * color_data[1];
		const unsigned b = 255 * color_data[2];
		sprintf(color_string, "#%02x%02x%02x", r, g, b);
	}
}