//math
#include "Math/inc/linear/vec2.hpp"
#include "Math/inc/linear/vec3.hpp"

//svg
#include "SVG-writer/inc/Object.hpp"

namespace svg
{
	class Line : public Object
	{
	public:
		//constructors
		Line(double, double, double, double);

		//destructor
		~Line(void);
	
	private:
		//data
		math::vec2 m_x1;
		math::vec2 m_x2;
		math::vec3 m_stroke;
		unsigned m_stroke_width;
	};
}