//svg
#include "SVG-writer/inc/Line.hpp"

namespace svg
{
	//constructors
	Line::Line(void) : m_x1{0, 0}, m_x2{0, 0}, m_stroke{0, 0, 0}, m_stroke_width{0}
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
		color(color_string, m_stroke.data());
		const unsigned x11 = unsigned(m_x1[0]);
		const unsigned x12 = unsigned(m_x1[1]);
		const unsigned x21 = unsigned(m_x2[0]);
		const unsigned x22 = unsigned(m_x2[1]);
		const unsigned sw = unsigned(m_stroke_width);
		const char* format = "<line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" stroke=\"%s\" stroke-width=\"%d\"/>\n";
		//write
		fprintf(file, format, x11, x12, x21, x22, color_string, sw);
	}
}