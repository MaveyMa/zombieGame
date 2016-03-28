#include "Zombie.h"
#include "Tile.h"
#include <iostream>
#include <cstdlib> //srand(), rand()
#include <ctime> //time()
using namespace std;
//====================================================
ZombieWalk::ZombieWalk()
{
    currentRow = 0;
    currentCol = 0;

    int row, col;
    unsigned int randomGeneratedNumber;

    //SET RANDOM NUMBER OF ZOMBIES
    srand(time(0));
    randomGeneratedNumber = rand() % 100 + 1;
    Tile::setNumZombies(randomGeneratedNumber); //[1, 100]

    //PLACE ZOMBIES RANDOMLY ON BOARD
    for (int i = 0; i < Tile::get_num_zombies(); i++)
    {
        row = rand() % 28 + 1; //[1, 28]
        col = rand() % 28 + 1;
        //IF ZOMBIE IS THERE, TRY TO LOOK FOR ANOTHER SPOT.
        if (location[row][col].getIsZombie())
        {
            i--;
        }
        else
        {
            location[row][col].setIsZombie(true);
        }
    }//END FOR
    /*Default constructor: creates random # of zombies range [1, 100] 
    and places zombies in random locations,
    except for at array locations [0][0] and [29][29].*/
}//END DEFAULT CONSTRUCTOR
//====================================================
/*Moves character to the tile in the 2D array.
Make sure character does not go out of bounds. 
An ‘x’ should be placed at this location, unless there is a zombie. 
If there is a zombie, update number of scratches and set isVisible to true.*/
void ZombieWalk::moveUp()
{
    //CHECK FOR OUT OF BOUNDS, PLAYER CANNOT ALREADY BE IN ROW 0
    if (currentRow == 0)
    {
        cout << "Cannot move up out of bounds." << endl;    
    }
    //MOVE FORTH. THERE'S EITHER A SAFE SPACE, OR A ZOMBIE!
    else
    {
        currentRow--;
        location[currentRow][currentCol].exploreTile();
    }
    return;
}//END MOVE UP
//====================================================
void ZombieWalk::moveDown()
{
    //CHECK FOR OUT OF BOUNDS, PLAYER CANNOT ALREADY BE IN ROW 29
    if (currentRow == 29)
    {
        cout << "Cannot move up out of bounds." << endl;    
    }
    //MOVE FORTH. THERE'S EITHER A SAFE SPACE, OR A ZOMBIE!
    else
    {
        currentRow++;
        location[currentRow][currentCol].exploreTile();
    }
    return;
}//END MOVE DOWN
//====================================================
void ZombieWalk::moveLeft()
{
    //CHECK FOR OUT OF BOUNDS, PLAYER CANNOT ALREADY BE IN COL 0
    if (currentCol == 0)
    {
        cout << "Cannot move up out of bounds." << endl;    
    }
    //MOVE FORTH. THERE'S EITHER A SAFE SPACE, OR A ZOMBIE!
    else
    {
        currentCol--;
        location[currentRow][currentCol].exploreTile();
    }
    return;
}//END MOVE LEFT
//====================================================
void ZombieWalk::moveRight()
{
    //CHECK FOR OUT OF BOUNDS, PLAYER CANNOT ALREADY BE IN COL 29
    if (currentCol == 29)
    {
        cout << "Cannot move up out of bounds." << endl;    
    }
    //MOVE FORTH. THERE'S EITHER A SAFE SPACE, OR A ZOMBIE!
    else
    {
        currentCol++;
        location[currentRow][currentCol].exploreTile();
    }
    return;
}//END MOVE RIGHT
//====================================================
void ZombieWalk::upDiag()
{
    //CHECK FOR OUT OF BOUNDS, PLAYER CANNOT ALREADY BE IN ROW 0 OR COL 29
    if (currentRow == 0 || currentCol == 29)
    {
        cout << "Cannot move up out of bounds." << endl;    
    }
    //MOVE FORTH. THERE'S EITHER A SAFE SPACE, OR A ZOMBIE!
    else
    {
        //e.g. [1,1] ---> [0,2]
        currentRow--;
        currentCol++;
        location[currentRow][currentCol].exploreTile();
    }
    return;
}//END MOVE DIAG UP 1, RIGHT 1
//====================================================
void ZombieWalk::downDiag()
{
    //CHECK FOR OUT OF BOUNDS, PLAYER CANNOT ALREADY BE IN ROW 29 OR COL 29
    if (currentRow == 29 || currentCol == 29)
    {
        cout << "Cannot move up out of bounds." << endl;    
    }
    //MOVE FORTH. THERE'S EITHER A SAFE SPACE, OR A ZOMBIE!
    else
    {
        //e.g. [1,1] ---> [2,2]
        currentRow++;
        currentCol++;
        location[currentRow][currentCol].exploreTile();
    }
    return;
}//END MOVE DIAG DOWN 1, RIGHT 1
//====================================================
void ZombieWalk::newGame()
{
    //Resets 2D array of tiles, creates new random # of zombies.
    return;
}//END NEW GAME RESET BOARD
//====================================================
void ZombieWalk::displayBoard()
{
    return;
}//END DISPLAY BOARD
//====================================================
void ZombieWalk::displayGameOver()
{//Display "Game Over" message and 2D array board with all zombies.
    return;
}//END DISPLAY BOARD
//====================================================    
bool ZombieWalk::isGameOver()
{
//Returns true if numScratches>2 and player is not at location [29][29]
    return false;
}//END DISPLAY BOARD
//====================================================
bool ZombieWalk::didWin()
{
        //Returns true if user makes it to location [29][29].
    return false;
}//END DISPLAY BOARD
//====================================================
void ZombieWalk::checkEndGame()
{
      /*Checks if the game is over or if the player won. 
        If any of these occurred, it should display the result 
        and ask if the player wants to play again. 
        If they do, then create a new game.*/
    return;
}//END CHECK END GAME
//====================================================
void ZombieWalk::runGame()
{
        /*Run the game by 
        1) starting user at location [0][0] and then continuously asking if they want to go 
        up, down, right, left, up diagonal, or down diagonal. 
        2) After each move, display board with unseen zombies as invisible. 
        Also display total number of zombies on board. 
        3) Keep running game until game is over. Decide which methods if any you want to be private.*/    
    return;
}//END RUN GAME
