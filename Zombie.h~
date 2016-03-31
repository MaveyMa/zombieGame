#ifndef ZOMBIE_WALK_H
#define ZOMBIE_WALK_H
#include "Tile.h"

/*
Class Name: ZombieWalk
Description: Has a 2D array of 30x30 Tiles 
(Tile is a separate class).
*/

class ZombieWalk
{
    private:
        Tile location[30][30];
        unsigned int currentRow,
                     currentCol;
    public:
        //====================================================
        /*Default constructor: creates random # of zombies range [1, 100] 
        and places zombies in random locations, 
        except for at array locations [0][0] and [29][29].*/
        ZombieWalk();
        //====================================================
        //GETTERS: COL AND ROW
        unsigned int getCurrentRow()const {return currentRow;}
        unsigned int getCurrentCol()const {return currentCol;}
        //SETTERS: COL AND ROW
        void setCurrentRow(unsigned int currentRow) {this->currentRow = currentRow;}
        void setCurrentCol(unsigned int currentCol) {this->currentCol = currentCol;}
        //====================================================
        /*Moves character to the tile in the 2D array.
        Make sure character does not go out of bounds. 
        An ‘x’ should be placed at this location, unless there is a zombie. 
        If there is a zombie, update number of scratches and set isVisible to true.*/
        void moveUp();
        void moveDown();
        void moveLeft();
        void moveRight();
        void upDiag(); //up 1, right 1
        void downDiag(); //down 1, right 1
        //====================================================
        //Resets 2D array of tiles, creates new random # of zombies.
        void newGame();
        //====================================================
        //Display current 2D array board
        void displayBoard();
        //====================================================
        //Display "Game Over" message and 2D array board with all zombies.
        void displayGameOver();
        //====================================================
        //Returns true if numScratches>2 and player is not at location [29][29]
        bool isGameOver();
        //====================================================
        //Returns true if user makes it to location [29][29].
        bool didWin();
        //====================================================
        /*Checks if the game is over or if the player won. 
        If any of these occurred, it should display the result 
        and ask if the player wants to play again. 
        If they do, then create a new game.*/
        void checkEndGame();
        //====================================================
        /*Run the game by 
        1) starting user at location [0][0] and then continuously asking if they want to go 
        up, down, right, left, up diagonal, or down diagonal. 
        2) After each move, display board with unseen zombies as invisible. 
        Also display total number of zombies on board. 
        3) Keep running game until game is over. Decide which methods if any you want to be private. */    
        void runGame();
        //====================================================
};
#endif //ZOMBIE_H
