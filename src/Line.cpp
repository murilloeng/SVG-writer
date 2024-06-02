//svg
#include "SVG-writer/inc/Line.hpp"

namespace svg
{
	//constructors
	Line::Line(void) : m_x1{0, 0}, m_x2{0, 0}
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
		const char* format = "<line x1=\"%.2lf\" y1=\"%.2lf\" x2=\"%.2lf\" y2=\"%.2lf\"";
		//write
		fprintf(file, format, m_x1[0], m_x1[1], m_x2[0], m_x2[1]);
		write_extra(file);
		write_affine(file);
		fprintf(file, "/>\n");
	}
}