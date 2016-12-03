//////////////////////////////////////////////////////////////////////////////
/// @file ProfilVirtuel.cpp
/// @author Equipe 6
/// @date 2016-11-10
/// @version 1.0 
///
/// @addtogroup inf2990 INF2990
/// @{
//////////////////////////////////////////////////////////////////////////////
#include "ProfilVirtuel.h"

////////////////////////////////////////////////////////////////////////
///
/// @fn ProfilVirtuel::ProfilVirtuel()
///
/// Ce constructeur ne fait que creer des profils virtuels
///
///
/// @return Aucune (constructeur).
///
////////////////////////////////////////////////////////////////////////
ProfilVirtuel::ProfilVirtuel()
{
	nom_ = "";
	vitesse_ = 3;
	passivite_ = 3;
}

////////////////////////////////////////////////////////////////////////
///
/// @fn ProfilVirtuel::ProfilVirtuel(std::string nom, int vitesse, int passivite)
///
/// Ce constructeur ne fait que creer des profils virtuels
///
/// @param[in] nom: nom du profil
///				vitesse : vitesse du profil
///				passivite : passivite du profil
///
/// @return Aucune
///
////////////////////////////////////////////////////////////////////////
ProfilVirtuel::ProfilVirtuel(std::string nom, int vitesse, int passivite)
{
	nom_ = nom;
	vitesse_ = vitesse;
	passivite_ = passivite;
}

////////////////////////////////////////////////////////////////////////
///
/// @fn const char* ProfilVirtuel::obtenirNom()
///
/// Cette fonction obtient le nom du profil
///
/// @param[in] Aucun
///
/// @return nom du profil (string)
///
////////////////////////////////////////////////////////////////////////
const char* ProfilVirtuel::obtenirNom()
{
	return nom_.c_str();
}

////////////////////////////////////////////////////////////////////////
///
/// @fn int ProfilVirtuel::obtenirVitesse()
///
/// Cette fonction obtient la vitesse du profil
///
/// @param[in] Aucun
///
/// @return vitesse du profil (int) 
///
////////////////////////////////////////////////////////////////////////
int ProfilVirtuel::obtenirVitesse()
{
	return vitesse_;
}

////////////////////////////////////////////////////////////////////////
///
/// @fn int ProfilVirtuel::obtenirPassivite()
///
/// Cette fonction obtient la passivite du profil
///
/// @param[in] Aucun
///
/// @return passivite du profil (int) 
///
////////////////////////////////////////////////////////////////////////
int ProfilVirtuel::obtenirPassivite()
{
	return passivite_;
}

////////////////////////////////////////////////////////////////////////
///
/// @fn void ProfilVirtuel::modifierNom(char* nom)
///
/// Cette fonction modifie le nom du profil
///
/// @param[in] nom : char*
///
/// @return aucun
///
////////////////////////////////////////////////////////////////////////
void ProfilVirtuel::modifierNom(char* nom)
{
	nom_ = nom;
}

////////////////////////////////////////////////////////////////////////
///
/// @fn void ProfilVirtuel::modifierVitesse(int vitesse)
///
/// Cette fonction modifie la vitesse du profil
///
/// @param[in] vitesse : int
///
/// @return aucun
///
////////////////////////////////////////////////////////////////////////
void ProfilVirtuel::modifierVitesse(int vitesse)
{
	vitesse_ = vitesse;
}

////////////////////////////////////////////////////////////////////////
///
/// @fn void ProfilVirtuel::modifierPassivite(int passivite)
///
/// Cette fonction modifie la passivite du profil
///
/// @param[in] passivite : int
///
/// @return aucun
///
////////////////////////////////////////////////////////////////////////
void ProfilVirtuel::modifierPassivite(int passivite)
{
	passivite_ = passivite;
}