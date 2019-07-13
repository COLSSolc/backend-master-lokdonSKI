#include "KnightSolver.h"
#include "st.h"
#include <locale>
#include <iostream>
#include <cstdlib>
#include <wchar.h>
#include <cstring>

using namespace std;

#define MAX_MOVES 256
#define MAX_KNIGHT_TOUR 5

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "");
	int startPosition;
	srand(time(NULL));
	wchar_t cipherTemplate[MAX_MOVES] = {};

	for (int knight_tour = 0; knight_tour < MAX_KNIGHT_TOUR; knight_tour++) {
		startPosition = (rand() % 256);
		if(startPosition < 0 || startPosition >= 256)	{
			std::wcout << "Invalid start position " << startPosition << " . Allowed values are 0-255 (row-major)" << std::endl;
			return -1;
		}
		int starter = 0;
		wcout<<"My Standard Template is as below\n";
		for(int i = 0; i < MAX_MOVES; i++) {
			std::wcout<<linearMatrix[i];
			starter++;
			if (starter == COLS) {
				wcout<<endl;
				starter = 0;
			} else {
				wcout<<"\t";
			}
		}
		wcout<<"My Knight Tour is as below\n";
		// Create the solver instance each time for 
		KnightSolver *solver;
		solver = new KnightSolver(ROWS, COLS);
		std::wcout << "starting from position:"<<startPosition<<endl;
		//std::wcout << "passing"<<startPosition % 16<<"and"<<startPosition / 16<<endl;
		//solver->setPosition(startPosition % 16, startPosition / 16);
		// run knight with random positions
		solver->setPosition(startPosition % 16, startPosition / 16);
		// run horse for 1 time
		solver->calculate(1);
		// we have now solver object with array of 256 possible moves of knight 
		starter = 0;
		for(int i = 1; i <=MAX_MOVES; i++) {
			std::wcout<<solver->knightMoves[i-1]<<"\t";
			starter++;
			if (starter == COLS) {
				wcout<<endl;
				starter = 0;
			} else {
				wcout<<"   ";
			}
		}
	
		for(int j = 0; j < MAX_MOVES; j++) {
			// find the value of knight moves starting from first index
			int indexValue = solver->knightMoves[j];
			// fetch the data present in ST on this indexValue and store in cipherTemplate
			cipherTemplate[j] = linearMatrix[indexValue];
		}
		solver->cleanUp();
		wcout<<"\nMy Cipher Template  is as below\n";
		starter = 0;
		for(int i=0; i< MAX_MOVES; i++) {
			std::wcout<<cipherTemplate[i];	
			starter++;
			if (starter == COLS) {
				std::wcout<<endl;
				starter = 0;
			} else {
				std::wcout<<"\t";
			}
		}
	}
	return 0;
}
