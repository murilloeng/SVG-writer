//std
#include <vector>

//math
#include "Math/inc/linear/vec2.hpp"
#include "Math/inc/linear/vec3.hpp"

//svg
#include "SVG-writer/inc/Object.hpp"

namespace svg
{
	class Polygon : public Object
	{
	public:
		//constructors
		Polygon(void);

		//destructor
		~Polygon(void);

		//write
		void write(FILE*) const override;
	
		//data
		math::vec3 m_fill;
		math::vec3 m_stroke;
		double m_stroke_width;
		std::vector<math::vec2> m_points;
	};
}