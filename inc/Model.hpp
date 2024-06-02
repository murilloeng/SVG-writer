#pragma once

//std
#include <vector>

namespace svg
{
	class Object;
}

namespace svg
{
	class Model
	{
	public:
		//constructors
		Model(void);

		//destructor
		~Model(void);

		//file
		void write(const char*) const;

		//data
		unsigned m_width;
		unsigned m_height;
		std::vector<const Object*> m_objects;
	};
}