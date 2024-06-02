//math
#include "Math/inc/linear/vec2.hpp"

//svg
#include "SVG-writer/inc/Object.hpp"

namespace svg
{
	class Line : public Object
	{
	public:
		//constructors
		Line(void);

		//destructor
		~Line(void);

		//write
		void write(FILE*) const override;
	
		//data
		math::vec2 m_x1;
		math::vec2 m_x2;
	};
}