#pragma once
#include <GLM/glm.hpp>
namespace Toya
{
	namespace CoreDrivers
	{
		class Color
		{
			
		public:
			float r, g, b, a;
			glm::vec4 glm_color = glm::vec4(1, 0, 1, 1);
			Color()
			{
				r = g = b = a = 1.0f;
				glm_color = glm::vec4(r, g, b, a);
			}
			Color(float r,float g,float b,float a)
			{
				this->r = r;
				this->g = g;
				this->b = b;
				this->a = a;
				glm_color = glm::vec4(r, g, b, a);
			}
			Color(glm::vec4 col)
			{
				r = col.r;
				g = col.g;
				b = col.b;
				a = col.a;
				glm_color = glm::vec4(col);
			}
			glm::vec4 *GetGlm() 
			{
				glm_color = glm::vec4(r, g, b, a);
				return &glm_color;
			}
		};
	}
}
