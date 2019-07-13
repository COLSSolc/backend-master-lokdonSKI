#ifndef KNIGHTCELL_H
#define KNIGHTCELL_H

#include <vector>

class KnightCell
{
	public:
		KnightCell();
		virtual ~KnightCell();

		void setIndexNumber(int i, int w, int h);
		int getIndexNumber();

		void setBoardHandle(KnightCell *b);

		void setSelectionStep(int step);
		int getSelectionStep();

		void setNext(KnightCell *c);
		KnightCell* getNext();
		void setPrevious(KnightCell *c);
		KnightCell* getPrevious();

		void addDeadEnd(KnightCell *c);
		std::vector<int> getDeadEnds();

		void resetState();
		std::vector<KnightCell*> getPossibleMoves();
	protected:
	private:
		int x, y;
		int boardWidth, boardHeight;
		int indexNumber;

		int selectionStep;

		KnightCell *board;
		KnightCell *next;
		KnightCell *prev;

		void initNeighbours();
		void addNeighbour(int dx, int dy);

		bool isDeadEnd(KnightCell *c);

		std::vector<KnightCell*> neighbours;
		std::vector<int> deadEnds;
};

#endif // KNIGHTCELL_H
