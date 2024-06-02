//svg
#include "SVG-writer/inc/Polygon.hpp"

namespace svg
{
	//constructors
	Polygon::Polygon(void)
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
		//write
		fprintf(file, "<polygon points=\"");
		for(const math::vec2& point : m_points)
		{
			fprintf(file, " %.2lf %.2lf", point[0], point[1]);
		}
		fprintf(file, "\"");
		write_extra(file);
		write_affine(file);
		fprintf(file, "/>\n");
	}
}