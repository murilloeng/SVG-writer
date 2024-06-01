//svg
#include "SVG-writer/inc/Translation.hpp"

namespace svg
{
	//constructors
	Translation::Translation(void)
	{
		return;
	}

	//destructor
	Translation::~Translation(void)
	{
		return;
	}

	//write
	void Translation::write(FILE* file) const
	{
		fprintf(file, "trasnlate (%.2lf %.2lf) ", m_u1, m_u2);
	}
}