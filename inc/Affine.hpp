#pragma once

//std
#include <cstdio>

namespace svg
{
	class Affine
	{
	public:
		//constructors
		Affine(void);

		//destructor
		virtual ~Affine(void);

		//write
		virtual void write(FILE*) const = 0;
	};
}