///////////////////////////////////////////////////////////////////////////////
/// @file Texture.cpp
/// @author Mathieu Kavalec
/// @date 2013-02-10
/// @version 1.0
///
/// @addtogroup inf2990 INF2990
/// @{
///////////////////////////////////////////////////////////////////////////////

#include "Texture.h"
#include <windows.h>
#include <GL/gl.h>

// D�finition prise de l'en-t�te de la version 1.2 d'OpenGL.
#define GL_CLAMP_TO_EDGE 0x812F

Texture* Texture::instance_ = 0;

////////////////////////////////////////////////////////////////////////
///
/// @fn Texture* Texture::obtenirInstance()
/// @return l'instance unique de la classe
///
////////////////////////////////////////////////////////////////////////
Texture* Texture::obtenirInstance()
{
	if (instance_ == 0)
	{
		instance_ = new Texture();
	}

	return instance_;
}

////////////////////////////////////////////////////////////////////////
///
/// @fn Texture::libererInstance()
///
/// lib�re l'instance unique de cette classe
///
/// @return Aucune
///
////////////////////////////////////////////////////////////////////////
void Texture::libererInstance()
{
	delete instance_;
	instance_ = 0;
}

////////////////////////////////////////////////////////////////////////
///
/// @fn Texture::Texture()
///
/// constructeur par d�faut qui charge les Texture
///
/// @return Aucune
///
////////////////////////////////////////////////////////////////////////
Texture::Texture()
{
	chargerTexture();
}

////////////////////////////////////////////////////////////////////////
///
/// @fn void Texture::chargerTexture()
///
/// charge les Texture du jeu
///
/// @return Aucune
///
////////////////////////////////////////////////////////////////////////
void Texture::chargerTexture()
{
	/*aidegl::glLoadTexture("media/textureMuret.jpg", textureMuret_);*/
	aidegl::glLoadTexture("media/glace.jpg", textureGlace_);
	aidegl::glLoadTexture("media/yellow.jpg", textureBut_);
	aidegl::glLoadTexture("media/red.png", textureLigne_);
	aidegl::glLoadTexture("media/textureBordureBas.jpg", textureBordures_[0]);
	aidegl::glLoadTexture("media/textureBordureHaut.jpg", textureBordures_[1]);
	aidegl::glLoadTexture("media/textureButs.jpg", textureBordures_[2]);
}

////////////////////////////////////////////////////////////////////////
///
/// @fn unsigned int Texture::obtenirTextureMuret() const
///
/// retourne la texture 1 des murets
///
/// @return la texture 1 des murets
///
////////////////////////////////////////////////////////////////////////
unsigned int Texture::obtenirTextureMuret() const
{
	return textureMuret_;
}

////////////////////////////////////////////////////////////////////////
///
/// @fn unsigned int Texture::obtenirTextureGlace() const
///
/// retourne la texture de la glace
///
/// @return la texture de la glace
///
////////////////////////////////////////////////////////////////////////
unsigned int Texture::obtenirTextureGlace() const
{
	return textureGlace_;
}
unsigned int Texture::obtenirLigneMilieu() const
{
	return textureLigne_;
}
unsigned int Texture::obtenirTexturetextureBut() const
{
	return textureBut_;
}

////////////////////////////////////////////////////////////////////////
///
/// @fn unsigned int Texture::obtenirTextureExplosionBleu() const
///
/// retourne la texture du fond avec l'explosion bleu
///
/// @return la texture du fond avec l'explosion bleu
///
////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////
///
/// @fn unsigned int Texture::obtenirTextureHUD(int index) const
///
/// retourne la texture du HUD
///
/// @param[in] index : index de la texture
///
/// @return la texture du HUD
///
////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////
///
/// @fn unsigned int Texture::obtenirTextureEspace(int index) const
///
/// retourne la texture d'espace
///
/// @param[in] index : index de la texture
///
/// @return la texture d'espace
///
////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////
///
/// @fn unsigned int Texture::obtenirTextureMontagnes(int index) const
///
/// retourne la texture de montagnes
///
/// @param[in] index : index de la texture
///
/// @return la texture de montagnes
///
////////////////////////////////////////////////////////////////////////
/*unsigned int Texture::obtenirTextureMontagnes(int index) const
{
	return textureMontagnes_[index];
}*/

////////////////////////////////////////////////////////////////////////
///
/// @fn unsigned int Texture::obtenirTextureNuages(int index) const
///
/// retourne la texture des nuages
///
/// @param[in] index : index de la texture
///
/// @return la texture des nuages
///
////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////
///
/// @fn unsigned int Texture::obtenirTextureBordure(int index) const
///
/// retourne la texture de la bordure
///
/// @param[in] index : index de la texture
///
/// @return la texture de la bordure
///
////////////////////////////////////////////////////////////////////////
unsigned int Texture::obtenirTextureBordure(int index) const
{
	return textureBordures_[index];
}

///////////////////////////////////////////////////////////////////////////////
/// @}
///////////////////////////////////////////////////////////////////////////////