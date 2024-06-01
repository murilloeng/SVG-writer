//math
#include "Math/inc/linear/vec2.hpp"
#include "Math/inc/linear/vec3.hpp"

//svg
#include "SVG-writer/inc/Object.hpp"

namespace svg
{
	class Rectangle : public Object
	{
	public:
		//constructors
		Rectangle(void);

		//destructor
		~Rectangle(void);

		//write
		void write(FILE*) const override;
	
		//data
		math::vec2 m_r;
		math::vec2 m_x;
		double m_width;
		double m_height;
		math::vec3 m_fill;
		math::vec3 m_stroke;
		double m_stroke_width;
	};
}