//svg
#include "SVG-writer/inc/Line.hpp"
#include "SVG-writer/inc/Model.hpp"
#include "SVG-writer/inc/Polygon.hpp"
#include "SVG-writer/inc/Rotation.hpp"
#include "SVG-writer/inc/Rectangle.hpp"

void icon_add(void)
{
	//data
	svg::Model model;
	svg::Polygon polygon;
	//polygon
	polygon.m_stroke_width = 10;
	polygon.m_fill = {0.00, 0.50, 0.00};
	polygon.m_stroke = {0.00, 0.00, 0.00};
	polygon.m_points.push_back({350, 800});
	polygon.m_points.push_back({450, 800});
	polygon.m_points.push_back({450, 450});
	polygon.m_points.push_back({800, 450});
	polygon.m_points.push_back({800, 350});
	polygon.m_points.push_back({450, 350});
	polygon.m_points.push_back({450,   0});
	polygon.m_points.push_back({350,   0});
	polygon.m_points.push_back({350, 350});
	polygon.m_points.push_back({  0, 350});
	polygon.m_points.push_back({  0, 450});
	polygon.m_points.push_back({350, 450});
	//model
	model.width(800);
	model.height(800);
	model.add_object(&polygon);
	model.write("icons/add.svg");
}
void icon_remove(void)
{
	//data
	svg::Model model;
	svg::Polygon polygon;
	svg::Rotation rotation;
	//rotation
	rotation.m_a = 45;
	rotation.m_x1 = 400;
	rotation.m_x2 = 400;
	//polygon
	polygon.m_stroke_width = 10;
	polygon.m_fill = {0.50, 0.00, 0.00};
	polygon.m_stroke = {0.00, 0.00, 0.00};
	polygon.m_points.push_back({350, 800});
	polygon.m_points.push_back({450, 800});
	polygon.m_points.push_back({450, 450});
	polygon.m_points.push_back({800, 450});
	polygon.m_points.push_back({800, 350});
	polygon.m_points.push_back({450, 350});
	polygon.m_points.push_back({450,   0});
	polygon.m_points.push_back({350,   0});
	polygon.m_points.push_back({350, 350});
	polygon.m_points.push_back({  0, 350});
	polygon.m_points.push_back({  0, 450});
	polygon.m_points.push_back({350, 450});
	polygon.m_affines.push_back(&rotation);
	//model
	model.width(800);
	model.height(800);
	model.add_object(&polygon);
	model.write("icons/remove.svg");
}

int main(void)
{
	//test
	icon_remove();
	//return
	return 0;
}