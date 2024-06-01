#pragma once

//std
#include <cstdio>
#include <vector>

namespace svg
{
	class Affine;
}

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
		void write_affine(FILE*) const;
		virtual void write(FILE*) const = 0;

		//color
		void color(char*, const double*) const;

		//data
		std::vector<Affine*> m_affines;
	};
}