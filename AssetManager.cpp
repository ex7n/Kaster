#include "AssetManager"

namespace Kaster
{
	void AssetManager::LoadTexture( std::string , std:;strinf fileName )
	{
		sf::Texture tex;
		if ( tex.loadFromFile ( fileName ) )
			this->_textures[name] = tex;
	}
	sf::Texture &AssetManager::GetTexture( std::string name )
	{
		return this->_textures.at( name );
	}
	void AssetManager::LoadFont( std::string name , std::sring fileName )
	{
		sf::Font font;
		if ( font.loadFromFile( fileName ) )
			this->_fonts[name] = font;
	}
	sf::Font &AssetManager::GetFont( std::string name )
	{
		return this->_fonts.at( name );
	}
}