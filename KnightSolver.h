#ifndef KNIGHTSOLVER_H
#define KNIGHTSOLVER_H

#include "KnightCell.h"

#include <string>
#include <fstream>
#include <time.h>

class KnightSolver
{
	public:
		KnightSolver(int w, int h);
		virtual ~KnightSolver();

		void setPosition(int startX, int startY);
		void calculate(int numPaths);

		void cleanUp();

		void setTime(int minutes);
		int knightMoves[256];

	protected:
	private:
		int width, height;
		int startX, startY;

		// Calculation limits
		int calculatedSolutions;
		int requestedSolutions;
		float prevPercentage;

		time_t endTime;

		KnightCell *board;

		KnightCell *startCell;
		KnightCell *currentCell;

		bool loopSolver();
		bool nextStep();

		bool isOpenPath();
		void writeSolution();

		void reset();

};

#endif // KNIGHTSOLVER_H
