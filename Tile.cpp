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
    tile_icon = 'm';
}//END DEFAULT CONSTRUCTOR
//====================================================
Tile::Tile(bool isZombie, unsigned int num_scratches)
{
    setIsZombie(isZombie);
    this->num_scratches = num_scratches;
    num_zombies = 0; 
    isZombieVisible = false;
    tile_icon = 'm';
}//END OVERLOADED CONSTRUCTOR
//====================================================
void Tile::setIsZombie(bool is_zombie)
{   
    isZombie = is_zombie;
    if (isZombie)
    {
        setNumZombies(num_zombies++);
    }
    return;
}//END SET IS ZOMBIE
//====================================================
void Tile::setIsZombieVisible(bool is_visible)
{
    isZombieVisible = is_visible;
    if (isZombieVisible)
    {
        setTileIcon('*');
    }
    return;
}//END SET IS ZOMBIE VISIBLE
//====================================================  
void Tile::setTileIcon(char icon_value)
{
    if (icon_value == 'x' || icon_value == 'm' || icon_value == '*')
    {
        setTileIcon(icon_value);
    }
    else
    {
        cout << "Icon value can only be 'x', 'm', or '*'." << endl;
    }
    return;
}//END SET TILE ICON
//====================================================
void Tile::exploreTile()
{
    if (getIsZombie())
    {
        setIsZombieVisible(true);
        setNumScratches(num_scratches++);
    }
    else
    {
        setTileIcon('x');
    }
    return;
}//END EXPLORE TILE
//====================================================
void Tile::resetTile()
{
    if (isZombie && num_zombies > 0)
    {
        setNumZombies(num_zombies--);
    }
    isZombie = false;
    num_scratches = 0;
    num_zombies = 0; 
    isZombieVisible = false;
    tile_icon = 'm';
    return;
}//END RESET TILE
