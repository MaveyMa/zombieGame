#include "Tile.h"
#include <iostream>
using namespace std;

unsigned int Tile::num_zombies = 0;
unsigned int Tile::num_scratches = 0;
//====================================================
Tile::Tile()
{
    isZombie = false;
    num_scratches = 0;
    num_zombies = 0; 
    isZombieVisible = false;
    tile_icon = char(176);
}//END DEFAULT CONSTRUCTOR
//====================================================
Tile::Tile(bool isZombie, unsigned int num_scratches)
{
    setIsZombie(isZombie);
    this->num_scratches = num_scratches;
    tile_icon = char(176);
}//END OVERLOADED CONSTRUCTOR
//====================================================
void Tile::setIsZombie(bool is_zombie)
{   
    isZombie = is_zombie;
    if (isZombie)
    {
        num_zombies++;
    }
    return;
}//END SET IS ZOMBIE
//====================================================
void Tile::setIsZombieVisible(bool is_visible)
{
    isZombieVisible = is_visible;
    if (isZombieVisible)
    {
        tile_icon = '*';
    }
    return;
}//END SET IS ZOMBIE VISIBLE
//====================================================  
void Tile::setTileIcon(char icon_value)
{
    if (icon_value == 'x' || icon_value == char(176) || icon_value == '*')
    {
        tile_icon = icon_value;
    }
    else
    {
        cout << "Icon value can only be 'x', char(176), or '*'." << endl;
    }
    return;
}//END SET TILE ICON
//====================================================
void Tile::exploreTile()
{
    if (isZombie)
    {
        setIsZombieVisible(true);
        num_scratches++;
    }
    else
    {
        tile_icon = 'x';
    }
    return;
}//END EXPLORE TILE
//====================================================
void Tile::resetTile()
{
    if (isZombie && num_zombies > 0)
    {
        num_zombies--;
    }
    isZombie = false;
    num_scratches = 0;
    num_zombies = 0; 
    isZombieVisible = false;
    tile_icon = char(176);
    return;
}//END RESET TILE
