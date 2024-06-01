//svg
#include "SVG-writer/inc/Polygon.hpp"

namespace svg
{
	//constructors
	Polygon::Polygon(void) : m_fill{0, 0, 0}, m_stroke{0, 0, 0}, m_stroke_width(0)
	{
		return;
	}

	//destructor
	Polygon::~Polygon(void)
	{
		return;
	}

	//write
	void Polygon::write(FILE* file) const
	{
		//data
		char fill_string[8];
		char stroke_string[8];
		const double sw = m_stroke_width;
		const char* format = "<polygon fill=\"%s\" stroke=\"%s\" stroke-width=\"%.2lf\" points=\"";
		//write
		color(fill_string, m_fill.data());
		color(stroke_string, m_stroke.data());
		fprintf(file, format, fill_string, stroke_string, sw);
		for(const math::vec2& point : m_points)
		{
			fprintf(file, " %.2lf %.2lf", point[0], point[1]);
		}
		fprintf(file, "\" ");
		//affines
		write_affine(file);
		fprintf(file, "/>\n");
	}
}