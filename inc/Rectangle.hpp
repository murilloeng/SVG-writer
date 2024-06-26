//math
#include "Math/inc/linear/vec2.hpp"

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
	};
}