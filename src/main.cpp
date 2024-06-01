//svg
#include "SVG-writer/inc/Line.hpp"
#include "SVG-writer/inc/Model.hpp"

int main(void)
{
	//data
	svg::Line line;
	svg::Model model;
	//line
	line.m_x1 = {0, 0};
	line.m_x2 = {200, 200};
	line.m_stroke = {0, 1, 0};
	line.m_stroke_width = 10;
	//objects
	model.width(700);
	model.height(700);
	model.add_object(&line);
	//write
	model.write("test.svg");
	//return
	return 0;
}