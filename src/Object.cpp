//svg
#include "SVG-writer/inc/Affine.hpp"
#include "SVG-writer/inc/Object.hpp"

namespace svg
{
	//constructor
	Object::Object(void) : m_fill("none"), m_stroke("none"), m_stroke_width(0)
	{
		return;
	}

	//destructor
	Object::~Object(void)
	{
		return;
	}

	//write
	void Object::write_extra(FILE* file) const
	{
		fprintf(file, " fill=\"%s\" stroke=\"%s\" stroke-width=\"%.2lf\"", m_fill, m_stroke, m_stroke_width);
	}
	void Object::write_affine(FILE* file) const
	{
		//check
		if(m_affines.empty()) return;
		//header
		fprintf(file, " transform=\"");
		for(const Affine* affine : m_affines)
		{
			affine->write(file);
		}
		fprintf(file, "\"");
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