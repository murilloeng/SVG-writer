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

		//data
		unsigned width(unsigned);
		unsigned width(void) const;

		unsigned height(unsigned);
		unsigned height(void) const;

		void add_object(Object*);
		void clear_objects(void);
		std::vector<Object*>& objects(void);
		const std::vector<Object*>& objects(void) const;

		//file
		void write(const char*) const;

	private:
		//data
		unsigned m_width;
		unsigned m_height;
		std::vector<Object*> m_objects;
	};
}