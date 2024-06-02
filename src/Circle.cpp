//svg
#include "SVG-writer/inc/Circle.hpp"

namespace svg
{
	//constructors
	Circle::Circle(void) : m_r(0), m_xc{0, 0}
	{
		return;
	}

	//destructor
	Circle::~Circle(void)
	{
		return;
	}

	//write
	void Circle::write(FILE* file) const
	{
		//data
		const char* format = "<circle cx=\"%.2lf\" cy=\"%.2lf\" r=\"%.2lf\"";
		//write
		fprintf(file, format, m_xc[0], m_xc[1], m_r);
		write_extra(file);
		write_affine(file);
		fprintf(file, "/>\n");
	}
}