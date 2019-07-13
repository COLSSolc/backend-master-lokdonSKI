#include "KnightCell.h"
#include <iostream>

KnightCell::KnightCell()
{
	//ctor
	selectionStep = -1; // not assigned
	next = NULL;
	prev = NULL;
}

KnightCell::~KnightCell()
{
	//dtor
}


void KnightCell :: setIndexNumber(int i, int w, int h)	{
	indexNumber = i;
	boardWidth = w;
	boardHeight = h;

	x = indexNumber % h;
	y = indexNumber / w;
}

// 0 - 255
int KnightCell :: getIndexNumber()	{
	return indexNumber;
}

// The step of selection starting from 0 for the starting cell
void KnightCell ::setSelectionStep(int step)	{
	selectionStep = step;
}

int KnightCell :: getSelectionStep()	{
	return selectionStep;
}

void KnightCell::resetState()	{
	selectionStep = -1;
	deadEnds.clear();
	next = NULL;
	prev = NULL;

}

void KnightCell ::setNext(KnightCell *c)	{
	next = c;
}

KnightCell* KnightCell::getNext()	{
	return next;
}


void KnightCell ::setPrevious(KnightCell *c)	{
	prev = c;
}

KnightCell* KnightCell::getPrevious()	{
	return prev;
}


void KnightCell ::setBoardHandle(KnightCell *b)	{
	board = b;

	initNeighbours();
}

// List all the cells we are allowed to move into
void KnightCell :: initNeighbours()	{
	// Top
	addNeighbour(+1, -2);
	addNeighbour(-1, -2);

	// Bottom
	addNeighbour(+1, +2);
	addNeighbour(-1, +2);

	// Left
	addNeighbour(-2, +1);
	addNeighbour(-2, -1);

	// Right
	addNeighbour(+2, +1);
	addNeighbour(+2, -1);
}

void KnightCell :: addNeighbour(int dx, int dy)	{

	int xx = x + dx;
	int yy = y + dy;

	if(xx >= 0 && xx < boardWidth && yy >= 0 && yy < boardHeight)
		neighbours.push_back(board + xx + boardHeight * yy);
}

// Returns all cells that are neighbours, not visited and not flagged as dead ends already
std::vector<KnightCell*> KnightCell :: getPossibleMoves()	{
	std::vector<KnightCell*> moves;

	for( unsigned int i = 0; i < neighbours.size(); i++)	{
		KnightCell *c = neighbours[i];
		if(c->getSelectionStep() < 0 && !isDeadEnd(c))
			moves.push_back(c);
	}

	return moves;

}

void KnightCell::addDeadEnd(KnightCell *c)	{
	deadEnds.push_back(c->getIndexNumber());
}

std::vector<int> KnightCell::getDeadEnds()	{
	return deadEnds;
}

bool KnightCell::isDeadEnd(KnightCell *c)	{

	for( unsigned int i = 0; i < deadEnds.size(); i++)	{
		if(c->getIndexNumber() == deadEnds[i])	{
			return true;
		}
	}

	return false;
}
