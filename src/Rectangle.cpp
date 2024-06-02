//svg
#include "SVG-writer/inc/Rectangle.hpp"

namespace svg
{
	//constructors
	Rectangle::Rectangle(void) : m_r{0, 0}, m_x{0, 0}, m_width(0), m_height(0)
	{
		return;
	}

	//destructor
	Rectangle::~Rectangle(void)
	{
		return;
	}

	//write
	void Rectangle::write(FILE* file) const
	{
		//data
		const char* format = "<rect x=\"%.2lf\" y=\"%.2lf\" rx=\"%.2lf\" ry=\"%.2lf\" width=\"%.2lf\" height=\"%.2lf\"";
		//write
		fprintf(file, format, m_x[0], m_x[1], m_r[0], m_r[1], m_width, m_height);
		write_extra(file);
		write_affine(file);
		fprintf(file, "/>\n");
	}
}