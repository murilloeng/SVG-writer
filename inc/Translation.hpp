#pragma once

//svg
#include "SVG-writer/inc/Affine.hpp"

namespace svg
{
	class Translation : public Affine
	{
	public:
		//constructors
		Translation(void);

		//destructor
		~Translation(void);

		//write
		void write(FILE*) const override;

		//data
		double m_u1;
		double m_u2;
	};
}