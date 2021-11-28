#pragma once

#include <SFML/Graphics.hpp>
using namespace sf;
namespace Kaster
{
	class Engine
	{
		public:
			Engine();
			void start ();
			void input ();
			void update ( float dtAsSec );
			void draw ();
		private:
			RenderWindow m_Window;
	};
}