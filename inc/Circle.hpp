//math
#include "Math/inc/linear/vec2.hpp"

//svg
#include "SVG-writer/inc/Object.hpp"

namespace svg
{
	class Circle : public Object
	{
	public:
		//constructors
		Circle(void);

		//destructor
		~Circle(void);

		//write
		void write(FILE*) const override;
	
		//data
		double m_r;
		math::vec2 m_xc;
	};
}