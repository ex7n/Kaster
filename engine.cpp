#include "engine.hpp"
#define DEFAULT_SCREEN_DIM 384
Engine::Engine ()
{
	Vector2f res;
	res.x = DEFAULT_SCREEN_DIM ;
	res.y = DEFAULT_SCREEN_DIM ;
	//res.x = VideoMode::getDesktopMode().width;
	//res.y = VideoMode::getDesktopMode().height;
	//m_Window.create( VideoMode( res.x , res.y ) , "ENGINE" , Style::Fullscreen );
	m_Window.create( VideoMode( res.x , res.y ) , "ENGINE" );
}
void Engine::start ()
{
	Clock clk ;
	while ( m_Window.isOpen () )
	{
		Time dt = clk.restart ();
		float dtAsSec = dt.asSeconds ();
		input ();
		update( dtAsSec );
		draw ();
	}
}
void Engine::input ()
{
	if ( Keyboard::isKeyPressed( Keyboard::Escape ) )
		m_Window.close ();
}
void Engine::update ( float dtAsSec )
{
	//UPDATE GAMEOBJECTS
	//COLLISION-DETECTION
}
void Engine::draw ()
{
	m_Window.clear ( Color::White );
	//draws textures in order of execution.
	m_Window.display ();
}