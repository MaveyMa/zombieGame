#ifndef TILE_H
#define TILE_H

class Tile
{
    private:
        static unsigned int num_zombies;
        static unsigned int num_scratches;
        bool isZombie;
        bool isZombieVisible;
        char tile_icon;
    public:
        //=====================================================================
        /*Default constructor: creates a Tile with 
        isZombie = false, num_scratches = 0, num_zombies = 0
        and isZombieVisible should be false; tile_icon = char(176).*/
        Tile();
        //=====================================================================
        /*Assigns corresponding variables and if isZombie is true, 
        then it should increment num_zombies by 1. tile_icon = char(176).*/
        Tile(bool isZombie, unsigned int num_scratches);
        //=====================================================================
        bool getIsZobmie()const {return isZombie;}
        bool getIsZombieVisible()const {return isZombieVisible;}
        char getTileIcon()const {return tile_icon;}
        //=====================================================================
        /*Assigns value to isZombie, if the value is true increment num_zombies by 1*/
        void setIsZombie(bool is_zombie);
        /*Sets corresponding value to isZombieVisible. 
        If zombie is now visible, set the tile_icon = ‘*’;*/
        void setIsZombieVisible(bool is_visible);
        //Assigns the icon_value only if the input is ‘x’, char(176), or ‘*’
        void setTileIcon(char icon_value);
        //=====================================================================
        /*If the tile is a zombie, then setIsZombieVisible to true, 
        increment num_scratches by 1, if it is not a zombie then set the tile_icon to ‘x’;*/
        void exploreTile();
        //=====================================================================
        /*Resets all of values of the tile to the specifications of the default constructor. 
        In addition, if the original Tile was a zombie then subtract 1 from num_zobmies. 
        If num_zombies is 0, do not subtract.*/
        void resetTile();
        //=====================================================================
};
#endif //TILE_H
