#include "KnightSolver.h"
#include <sstream>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <algorithm>
using namespace std;

/* Knight Solvee Class Definition */

KnightSolver::KnightSolver(int w, int h)	{
	// Init the height and width to the given matrix
	this->width = w;
	this->height = h;
	prevPercentage = 0.0;

	// Reserve memory for the cell objects of matrix
	board = new KnightCell[width * height];

	// Init cell states
	for(int i = 0; i < w * h; i++)	{
		KnightCell *c = (board + i);
		c->setIndexNumber(i, width, height);
		c->setBoardHandle(board);
	}
}

// destructor  
KnightSolver::~KnightSolver()
{
	//dtor
}


// Calculates an ending time according to the given minutes parameter
// The running will stop after the time is passed
void KnightSolver::setTime(int minutes)	{
	endTime = time(NULL) + minutes * 60;
}

// Set the initial position of the solver
void KnightSolver::setPosition(int xx, int yy)	{
	this->startX = xx;
	this->startY = yy;

	// Init the cells
	startCell = (board + startX + startY * height);
	currentCell = startCell;
	startCell->setSelectionStep(0);
}

// The actual calculations loop
void KnightSolver::calculate(int numPaths)	{
	calculatedSolutions = 0;
	requestedSolutions = numPaths;
	loopSolver();
	//std::cout << "Done!" << std::endl;
}


bool KnightSolver::loopSolver()	{
	while(true) {
		bool jobDone = nextStep();

		if(jobDone)	{
			return true;
		}
	}
	return false;
}


// Returns whether the job is done or not
bool KnightSolver :: nextStep()	{
	std::vector<KnightCell*> nextCells = currentCell->getPossibleMoves();

	if(nextCells.size() > 0)	{
		// We got potential next moves from this cell
		KnightCell *bestCell = nextCells.at(0);
		int movesFromBest = bestCell->getPossibleMoves().size();
		// Check all the possible moves with an heuristic that finds the cell with the least possible moves from it
		for(unsigned int i = 1; i < nextCells.size(); i++)	{
			KnightCell *c = nextCells.at(i);
			int movesFromNew = c->getPossibleMoves().size();
			if(movesFromNew < movesFromBest)	{
				// We found a new best cell
				bestCell = c;
				movesFromBest = movesFromNew;
			}
		}

		// Go to the new cell with the solver
		KnightCell *previousCell = currentCell;
		previousCell->setNext(bestCell);
		previousCell->addDeadEnd(bestCell); // so that we wont visit the new best cell from this cell anymore in the future

		currentCell = bestCell;
		currentCell->setPrevious(previousCell);
		currentCell->setSelectionStep(previousCell->getSelectionStep() + 1);
	} else	{
		// It's a dead end or we are at the end of the path
		if(currentCell->getSelectionStep() == ((width * height) - 1))	{ // at 255 or equivalent
			// == > Successful path
			if(isOpenPath()) {
				writeSolution();
				calculatedSolutions++;

				float newPercentage = ((float)calculatedSolutions / requestedSolutions);
				if( newPercentage >= (prevPercentage + 0.1)) 	{
					prevPercentage = newPercentage;
					//std::cout << calculatedSolutions << " of " << requestedSolutions << " paths calculated (" << newPercentage * 100 << "%)" << std::endl;
				}

			}
		}
		// Not a complete path
		// Backtrack in the path so we can make more solutions
		KnightCell *bc = currentCell->getPrevious();
		currentCell->resetState();
		currentCell = bc;

		if(calculatedSolutions >= requestedSolutions)
			return true;

	}

	return false;
}

// resets the solver
void KnightSolver::reset()	{
	for(int i = 0; i < width * height; i++)	{
		KnightCell *c  = board + i;
		c->resetState();
	}
	startCell->setSelectionStep(0);
	currentCell = startCell;
}

// Check if the start cell can be accessed from the end cell
bool KnightSolver::isOpenPath()	{
	std::vector<KnightCell*> nextCells = currentCell->getPossibleMoves();

	for(unsigned int i = 0; i < nextCells.size(); i++)	{
		if(startCell == nextCells[i])
			return false;
	}

	return true;
}

// write path to file
void KnightSolver :: writeSolution()	{
	// Go through the cells
	KnightCell *c = startCell;

	int n = 0;
	// Sort by table cells
	for(int i = 0; i < width * height; i++)	{
		KnightCell *c  = board + i;
		this->knightMoves[i] = c->getSelectionStep();
		//cout <<this->knightMoves[i];
		n++;
		// Formatting
		//if( n == width )	{
		//	cout << std::endl << std::endl;
		//	n = 0;
		//} else {
		 //	cout << " ";
		//}

	}
}
void KnightSolver::cleanUp()	{

	//saveState();

	delete [] board;
}
