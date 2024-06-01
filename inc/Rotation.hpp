#pragma once

//svg
#include "SVG-writer/inc/Affine.hpp"

namespace svg
{
	class Rotation : public Affine
	{
	public:
		//constructors
		Rotation(void);

		//destructor
		~Rotation(void);

		//write
		void write(FILE*) const override;

		//data
		double m_a;
		double m_x1;
		double m_x2;
	};
}