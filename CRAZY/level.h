#pragma once


/////////////////////////////////////
// Include
#include "renderSystem.h"


/////////////////////////////////////
// Constants
const int levelRows = screenRows;
const int levelColumns = screenColumns;

const float shipSpeed = 35.0;
const float shipFireCooldown = 0.2;

const float bulletSpeed = 40.0;

const float alienAmplitude = 0.0;
const float alienSpeed = 0.0;


const unsigned char	CellSymbol_Ship		 = 'S';
const unsigned char	CellSymbol_Bullet	 = '|';
const unsigned char	CellSymbol_Alien	 = 'X';
const unsigned char	CellSymbol_Wall      = 'O';

const unsigned char levelData0[levelRows][levelColumns+1] =		
{
	"                                                                                ",
	"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
	"OO             X  OO                                               X          OO",
	"OO  X             OO        X                       X                         OO",
	"OO                OO                     X                                    OO",
	"OO                OO   X                                                      OO",
	"OO                OO            X                                 X           OO",
	"OO      X         OOOOOOOOOOO                         OO                      OO",
	"OO                      OOOOOOOOO                     OO                      OO",
	"OO                             OO     X               OO           X          OO",
	"OO              X              OO           X         OO                      OO",
	"OO                             OO                     OO                      OO",
	"OO                      OOOOOOOOOOOOOOOOOOOOO         OO                      OO",
	"OO                                                    OO         X            OO",
	"OO                                                    OO                      OO",
	"OO           X                              X         OO                      OO",
	"OO                                                    OO                      OO",
	"OO                                                    OO                      OO",
	"OO                                                    OO                      OO",
	"OO                                                                            OO",
	"OO                                                                            OO",
	"OO                                     S                                      OO",
	"OO                                                                            OO",
	"OO                                                                            OO",
	"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
};


/////////////////////////////////////
// Functions
unsigned char GetRenderCellSymbol( unsigned char cellSymbol )
{
	switch( cellSymbol )
	{
		case CellSymbol_Ship:			return 202;
		case CellSymbol_Bullet:			return 179;
		case CellSymbol_Alien:			return 203;
		case CellSymbol_Wall:			return 219;

	}
	return '?';
}

ConsoleColor GetRenderCellSymbolColor( unsigned char cellSymbol )
{
	switch( cellSymbol )
	{
		case CellSymbol_Ship:			return ConsoleColor_Red;
		case CellSymbol_Bullet:			return ConsoleColor_White;
		case CellSymbol_Alien:			return ConsoleColor_Blue;
		case CellSymbol_Wall:			return ConsoleColor_DarkGray;
	}
	return ConsoleColor_Gray;
}

ConsoleColor GetRenderCellSymbolBackgroundColor( unsigned char cellSymbol )
{
	switch( cellSymbol )
	{
		case CellSymbol_Ship:			return ConsoleColor_DarkGray;
		case CellSymbol_Alien:			return ConsoleColor_DarkGray;
	}
	
	return ConsoleColor_Black;
}