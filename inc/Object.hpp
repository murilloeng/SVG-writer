#pragma once

//std
#include <cstdio>

namespace svg
{
	class Object
	{
	public:
		//constructors
		Object(void);

		//destructor
		virtual ~Object(void);

		//write
		virtual void write(FILE*) const = 0;
	};
}