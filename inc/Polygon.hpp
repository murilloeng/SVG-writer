//std
#include <vector>

//math
#include "Math/inc/linear/vec2.hpp"

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
		std::vector<math::vec2> m_points;
	};
}