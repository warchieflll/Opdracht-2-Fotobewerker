/*
 * FotoScherm.cpp
 *
 *  Created on: 3 mrt. 2012
 *      Author: acer
 */

#include "FotoScherm.h"

//globale variabelen voor breedte en hoogte van het scherm
int screenWidth;
int screenHeight;

FotoScherm::FotoScherm()
{
	//sla schermgrootte op in globale variabelen
	MAExtent screenSize = maGetScrSize();
	screenWidth = EXTENT_X( screenSize );
	screenHeight = EXTENT_Y( screenSize );

	Font* font = new Font(RES_FONT);

	Label* label = new Label(0,0,0,0,NULL);
	label->setBackgroundColor(0x000000);

	Label* imageTekst = new Label( screenWidth/2 - 40, 250, 80, 30, label, "Mooi plaatje", 0, font);
	Label* plaatje1 = new Label( screenWidth/2 - 60, screenHeight/2-80, 120 , 160, label);

	WidgetSkin* skin = new WidgetSkin (RES_IMAGE, RES_IMAGE, 16,32,16,32,false,false);
	plaatje1->setSkin(skin);

	this->setMain(label);


	//het optiescherm
//	this->optieScherm = new OptieScherm( this );


	//bepaal grootte van het scherm

	//standaard font en grafisch uiterlijk (uit de resource file res.lst)
//	WidgetSkin* skin = new WidgetSkin( RES_SELECTED, RES_UNSELECTED, 16, 32, 16, 32, false, false );

	//maak een label die andere widgets straks bevat, en een achtergrondkleur heeft

	//maak een plaatje (laden uit de resource file res.lst) en voeg label als parent toe

	//maak tekst bij het plaatje met een label

	//stel dit scherm in als het main scherm, met achtergrondlabel als de basis widget
//	this->setMain( this->achtergrondLabel );
}


FotoScherm::~FotoScherm()
{

}


//show() override de show() van de super klasse (Screen), omdat we bij showen eerst opties willen ophalen
void FotoScherm::show()
{
	//roep de show() van de superklasse (Screen) aan
	this->Screen::show();

	//haal informatie achtergrondkleur op van optiescherm
//	this->achtergrondLabel->setBackgroundColor( this->optieScherm->getAchtergrondOptie() );

	//haal informatie imagetekst op van optiescherm
//	this->imageTekst->setCaption( this->optieScherm->getImagetekst() );
}



//afvangen invoer
void FotoScherm::keyPressEvent(int keyCode, int nativeCode)
{
	//bij indrukken van de MAK_FIRE toets, laat optiescherm zien
}

void FotoScherm::pointerPressEvent(MAPoint2d point)
{
	//bij touch, laat optiescherm zien
}


