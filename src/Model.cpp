//std
#include <cstdio>
#include <cstdlib>

//svg
#include "SVG-writer/inc/Model.hpp"
#include "SVG-writer/inc/Object.hpp"

namespace svg
{
	//constructor
	Model::Model(void) : m_width(0), m_height(0)
	{
		return;
	}

	//destructor
	Model::~Model(void)
	{
		return;
	}

	//data
	unsigned Model::width(void) const
	{
		return m_width;
	}
	unsigned Model::width(unsigned width)
	{
		return m_width = width;
	}

	unsigned Model::height(void) const
	{
		return m_height;
	}
	unsigned Model::height(unsigned height)
	{
		return m_height = height;
	}

	void Model::add_object(Object* object)
	{
		m_objects.push_back(object);
	}
	void Model::clear_objects(void)
	{
		m_objects.clear();
	}
	std::vector<Object*>& Model::objects(void)
	{
		return m_objects;
	}
	const std::vector<Object*>& Model::objects(void) const
	{
		return m_objects;
	}

	//file
	void Model::write(const char* path) const
	{
		//open
		FILE* file = fopen(path, "w");
		//header
		fprintf(file, "<svg width=\"%d\" height=\"%d\">\n", m_width, m_height);
		//objects
		for(const Object* object : m_objects)
		{
			fprintf(file, "\t");
			object->write(file);
		}
		//header
		fprintf(file, "</svg>");
		//close
		fclose(file);
		//command
		char cmd[200];
		sprintf(cmd, "gio open %s", path); system(cmd);
	}
}