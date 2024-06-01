//svg
#include "SVG-writer/inc/Rectangle.hpp"

namespace svg
{
	//constructors
	Rectangle::Rectangle(void) : m_r{0, 0}, m_x{0, 0}, m_width(0), m_height(0), m_fill{0, 0, 0}, m_stroke{0, 0, 0}, m_stroke_width(0)
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
		char fill_string[8];
		char stroke_string[8];
		const double x1 = m_x[0];
		const double x2 = m_x[1];
		const double r1 = m_r[0];
		const double r2 = m_r[1];
		const double w = m_width;
		const double h = m_height;
		const double sw = m_stroke_width;
		const char* format = "<rect x=\"%.2lf\" y=\"%.2lf\" rx=\"%.2lf\" ry=\"%.2lf\" width=\"%.2lf\" height=\"%.2lf\" fill=\"%s\" stroke=\"%s\" stroke-width=\"%.2lf\"/>\n";
		//write
		color(fill_string, m_fill.data());
		color(stroke_string, m_stroke.data());
		fprintf(file, format, x1, x2, r1, r2, w, h, fill_string, stroke_string, sw);
	}
}