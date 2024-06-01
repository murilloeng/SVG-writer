//svg
#include "SVG-writer/inc/Line.hpp"

namespace svg
{
	//constructors
	Line::Line(void) : m_x1{0, 0}, m_x2{0, 0}, m_stroke{0, 0, 0}, m_stroke_width(0)
	{
		return;
	}

	//destructor
	Line::~Line(void)
	{
		return;
	}

	//write
	void Line::write(FILE* file) const
	{
		//data
		char color_string[8];
		const double x11 = m_x1[0];
		const double x12 = m_x1[1];
		const double x21 = m_x2[0];
		const double x22 = m_x2[1];
		const double sw = m_stroke_width;
		const char* format = "<line x1=\"%.2lf\" y1=\"%.2lf\" x2=\"%.2lf\" y2=\"%.2lf\" stroke=\"%s\" stroke-width=\"%.2lf\"/>\n";
		//write
		color(color_string, m_stroke.data());
		fprintf(file, format, x11, x12, x21, x22, color_string, sw);
	}
}