//svg
#include "SVG-writer/inc/Rotation.hpp"

namespace svg
{
	//constructors
	Rotation::Rotation(void)
	{
		return;
	}

	//destructor
	Rotation::~Rotation(void)
	{
		return;
	}

	//write
	void Rotation::write(FILE* file) const
	{
		fprintf(file, "rotate (%.2lf %.2lf %.2lf) ", m_a, m_x1, m_x2);
	}
}