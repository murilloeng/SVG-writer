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
		void write_extra(FILE*) const;
		void write_affine(FILE*) const;
		virtual void write(FILE*) const = 0;

		//color
		void color(char*, const double*) const;

		//data
		char m_fill[20];
		char m_stroke[20];
		double m_stroke_width;
		std::vector<Affine*> m_affines;
	};
}