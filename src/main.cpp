//std
#include <cmath>
#include <cstring>

//svg
#include "SVG-writer/inc/Line.hpp"
#include "SVG-writer/inc/Model.hpp"
#include "SVG-writer/inc/Circle.hpp"
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
	strcpy(polygon.m_fill, "#007f00");
	strcpy(polygon.m_stroke, "#000000");
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
	model.m_width = 800;
	model.m_height = 800;
	model.m_objects.push_back(&polygon);
	//write
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
	strcpy(polygon.m_fill, "#7f0000");
	strcpy(polygon.m_stroke, "#000000");
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
	model.m_width = 800;
	model.m_height = 800;
	model.m_objects.push_back(&polygon);
	//write
	model.write("icons/remove.svg");
}
void icon_cell(void)
{
	//data
	svg::Model model;
	svg::Line lines[4];
	svg::Circle circles[5];
	svg::Rectangle rectangle;
	//lines
	lines[0].m_x1 = { 50,  50};
	lines[1].m_x1 = {750,  50};
	lines[2].m_x1 = {750, 750};
	lines[3].m_x1 = { 50, 750};
	for(svg::Line& line : lines)
	{
		line.m_x2 = {500, 300};
		line.m_stroke_width = 40;
		strcpy(line.m_stroke, "#000000");
	}
	//circles
	circles[0].m_xc = { 50,  50};
	circles[1].m_xc = { 50, 750};
	circles[2].m_xc = {750,  50};
	circles[3].m_xc = {750, 750};
	circles[4].m_xc = {500, 300};
	for(svg::Circle& circle : circles)
	{
		circle.m_r = 50;
		strcpy(circle.m_fill, "#ff0000");
	}
	//rectangle
	rectangle.m_width = 700;
	rectangle.m_height = 700;
	rectangle.m_x = {50, 50};
	rectangle.m_stroke_width = 40;
	strcpy(rectangle.m_fill, "#add8e6");
	strcpy(rectangle.m_stroke, "#000000");
	//model
	model.m_width = 800;
	model.m_height = 800;
	model.m_objects.push_back(&rectangle);
	for(const svg::Line& line : lines) model.m_objects.push_back(&line);
	for(const svg::Circle& circle : circles) model.m_objects.push_back(&circle);
	//write
	model.write("icons/cell.svg");
}
void icon_section(void)
{
	//data
	svg::Model model;
	svg::Polygon polygon;
	//polygon
	polygon.m_stroke_width = 10;
	strcpy(polygon.m_fill, "#0000ff");
	strcpy(polygon.m_stroke, "#000000");
	polygon.m_points.push_back({  0, 800});
	polygon.m_points.push_back({800, 800});
	polygon.m_points.push_back({800, 720});
	polygon.m_points.push_back({440, 720});
	polygon.m_points.push_back({440,  80});
	polygon.m_points.push_back({800,  80});
	polygon.m_points.push_back({800,   0});
	polygon.m_points.push_back({  0,   0});
	polygon.m_points.push_back({  0,  80});
	polygon.m_points.push_back({360,  80});
	polygon.m_points.push_back({360,  720});
	polygon.m_points.push_back({  0,  720});
	//model
	model.m_width = 800;
	model.m_height = 800;
	model.m_objects.push_back(&polygon);
	//write
	model.write("icons/section.svg");
}
void icon_support(void)
{
	//data
	svg::Model model;
	svg::Circle circle;
	svg::Line lines[10];
	svg::Polygon polygon;
	const double r = 100;
	const double s = 800;
	const double h = 600;
	const double w = sqrt(3) / 3 * h;
	//lines
	for(unsigned i = 0; i < 10; i++)
	{
		lines[i].m_stroke_width = 10;
		strcpy(lines[i].m_stroke, "#000000");
		lines[i].m_x1 = {s / 2 - w + 2 * i * w / 9, r + h};
		lines[i].m_x2 = lines[i].m_x1 + (s - r - h) * math::vec2(-sqrt(3) / 3, 1);
	}
	//circle
	circle.m_r = r;
	circle.m_xc = {s / 2, r};
	circle.m_stroke_width = 10;
	strcpy(circle.m_fill, "#ffffff");
	strcpy(circle.m_stroke, "#000000");
	//polygon
	polygon.m_stroke_width = 10;
	strcpy(polygon.m_fill, "#7f7f7f");
	strcpy(polygon.m_stroke, "#000000");
	polygon.m_points.push_back({s / 2, r});
	polygon.m_points.push_back({s / 2 - w, r + h});
	polygon.m_points.push_back({s / 2 + w, r + h});
	//model
	model.m_width = 800;
	model.m_height = 800;
	model.m_objects.push_back(&polygon);
	model.m_objects.push_back(&circle);
	for(const svg::Line& line : lines) model.m_objects.push_back(&line);
	//write
	model.write("icons/support.svg");
}
void icon_load_node(void)
{
	//data
	svg::Model model;
	svg::Line line_1;
	svg::Line line_2;
	svg::Line line_3;
	svg::Circle circle;
	const math::vec2 u2 = {+cos(M_PI / 3), -sin(M_PI / 3)};
	const math::vec2 u3 = {-cos(M_PI / 3), -sin(M_PI / 3)};
	//circle
	circle.m_r = 100;
	circle.m_xc = {400, 700};
	circle.m_stroke_width = 5;
	strcpy(circle.m_fill, "#ffffff");
	strcpy(circle.m_stroke, "#000000");
	//line 1
	line_1.m_x1 = {400, 700};
	line_1.m_x2 = {400,   0};
	line_1.m_stroke_width = 20;
	strcpy(line_1.m_stroke, "#ff0000");
	//line 2
	line_2.m_x1 = {400, 700};
	line_2.m_x2 = math::vec2(400, 700) + 400 * u2;
	line_2.m_stroke_width = 20;
	strcpy(line_2.m_stroke, "#ff0000");
	//line 3
	line_3.m_x1 = {400, 700};
	line_3.m_x2 = math::vec2(400, 700) + 400 * u3;
	line_3.m_stroke_width = 20;
	strcpy(line_3.m_stroke, "#ff0000");
	//model
	model.m_width = 800;
	model.m_height = 800;
	model.m_objects.push_back(&circle);
	model.m_objects.push_back(&line_1);
	model.m_objects.push_back(&line_2);
	model.m_objects.push_back(&line_3);
	//write
	model.write("icons/load-node.svg");
}
void icon_load_element(void)
{
	//data
	svg::Model model;
	svg::Line lines[11];
	svg::Circle circles[2];
	const math::vec2 u2 = {+cos(M_PI / 3), -sin(M_PI / 3)};
	const math::vec2 u3 = {-cos(M_PI / 3), -sin(M_PI / 3)};
	//circles
	circles[0].m_r = 50;
	circles[1].m_r = 50;
	circles[0].m_xc = { 50, 750};
	circles[1].m_xc = {750, 750};
	strcpy(circles[0].m_fill, "#000000");
	strcpy(circles[1].m_fill, "#000000");
	//lines
	lines[ 0].m_x1 = { 50, 750};
	lines[ 0].m_x2 = {750, 750};
	lines[10].m_x1 = { 50, 100};
	lines[10].m_x2 = {750, 100};
	strcpy(lines[ 0].m_stroke, "#000000");
	strcpy(lines[10].m_stroke, "#ff0000");
	for(svg::Line& line : lines) line.m_stroke_width = 10;
	for(unsigned i = 0; i < 3; i++)
	{
		strcpy(lines[3 * i + 1].m_stroke, "#ff0000");
		strcpy(lines[3 * i + 2].m_stroke, "#ff0000");
		strcpy(lines[3 * i + 3].m_stroke, "#ff0000");
		lines[3 * i + 1].m_x1 = {50 + 350 * double(i), 700};
		lines[3 * i + 1].m_x2 = {50 + 350 * double(i), 100};
		lines[3 * i + 2].m_x1 = {50 + 350 * double(i), 700};
		lines[3 * i + 3].m_x1 = {50 + 350 * double(i), 700};
		lines[3 * i + 2].m_x2 = math::vec2(50 + 350 * double(i), 700) + 100 * u2;
		lines[3 * i + 3].m_x2 = math::vec2(50 + 350 * double(i), 700) + 100 * u3;
	}
	//model
	model.m_width = 800;
	model.m_height = 800;
	for(const svg::Line& line : lines) model.m_objects.push_back(&line);
	for(const svg::Circle& circle : circles) model.m_objects.push_back(&circle);
	//write
	model.write("icons/load-element.svg");
}

int main(void)
{
	//test
	icon_cell();
	//return
	return 0;
}