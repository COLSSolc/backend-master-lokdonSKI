#include "KnightSolver.h"
#include "st.h"
#include <locale>
#include <iostream>
#include <cstdlib>
#include <wchar.h>
#include <cstring>
#include <algorithm>
#include <vector>

wchar_t TOKEN =  L'\u0394';
using namespace std;

#define MPIN_LENGTH 4
#define MAX_MPIN_TOUR 2
#define MAX_MOVES 256
#define MAX_KNIGHT_TOUR 5 
#define PASSWORD_SIZE_TOO_BIG 100;
#define PASWORD_SIZE_TOO_SHORT 101;
#define INVALID_START_POSITION 501;
#define DEBUG 0
#define DEC_DEBUG 0

class PasswordGen {
	private:
		std::string tempPassword;
		wchar_t cipherTemplate[MAX_MOVES];
		wchar_t reversedStandardTemplate[MAX_MOVES];
		int startPosition;
		bool checkMpinLength(size_t);
		bool checkPasswordLenth(size_t);
		void createCipherTemplate(int *);
		int createReverseST(wchar_t *);
		void generateCipherTemplate(wchar_t *, int*);
	public:
		PasswordGen();
		PasswordGen(std::string passwordString);
		wchar_t findWideCharFromReverseST(int);
		int charPositionFromReverseST(wchar_t);
		void printCipher(const wchar_t *matrix);
	  	void printKnightMoves(int *moves);
		std::wstring encryptPassword(std::string data);
		std::string decrypt(std::wstring cipherPassword);
		std::wstring encryptMpin(std::string mpin);
		std::string decryptMpin(std::wstring encryptedMpin);
};

/*
 * create reverse Standard template while you create a constructor 
 */ 
PasswordGen::PasswordGen() {
	setlocale(LC_ALL, "");
	createReverseST(linearMatrix);
}


/*
 * Password must not be more than 20 chars and not less than 5 chars
 */ 
bool PasswordGen::checkPasswordLenth(size_t length) {
	if (length > 20) {
		return false;
	}
	if (length < 5) {
		return false;
	}
	return true;
}

/* MPIN is exact 4 non-repeated digits from 0-9 
 * Android will check if the mpin digits are repeated
 */
bool PasswordGen::checkMpinLength(size_t length) {
	return (length == 4) ? true : false;
}

PasswordGen::PasswordGen(std::string passtext) {
	size_t len = passtext.size();
	if(checkPasswordLenth(len)) {
		tempPassword = passtext;
	}
}	

void PasswordGen::printCipher(const wchar_t *matrix) {
	setlocale(LC_ALL, "");
	int starter = 0;
	if (DEBUG) {
	    std::wcout<<"My Standard Template is as below\n";
	}
	for(int i = 0; i < MAX_MOVES; i++) {
		std::wcout<<matrix[i];
		starter++;
		if (starter == COLS) {
			std::wcout<<endl;
			starter = 0;
		} else {
			std::wcout<<"\t";
        }
	}
}

int PasswordGen::createReverseST(wchar_t *linerMatrix) {
    int j = 0;
    for (int i = MAX_MOVES-1; i>=0; i--) {
        reversedStandardTemplate[j++] = linearMatrix[i];
    }
	return 0;
}

void PasswordGen::printKnightMoves(int *moves) {
	int starter = 0;
	std::wcout<<"My Knight Moves is as below\n";
	for(int i = 0; i < MAX_MOVES; i++) {
		std::wcout<<moves[i];
		starter++;
		if (starter == COLS) {
			std::wcout<<endl;
			starter = 0;
		} else {
			std::wcout<<"\t";
  		}
	}
}


void PasswordGen::createCipherTemplate(int *knightTourMatrix) {
	for(int j = 0; j < MAX_MOVES; j++) {
		// find the value of knight moves starting from first index
		int indexValue = knightTourMatrix[j];
		// fetch the data present in ST on this indexValue and store in cipherTemplate
		cipherTemplate[j] = linearMatrix[indexValue];
	}
}

void PasswordGen::generateCipherTemplate(wchar_t *cipherTemplate, int *knightTourMatrix) {
	wchar_t *newCipher = new wchar_t[MAX_MOVES];
	for(int j = 0; j < MAX_MOVES; j++) {
		int indexValue = knightTourMatrix[j];
		// fetch the data present in cipher on this index value and store in 
		newCipher[j] = cipherTemplate[indexValue];
	}
	// override cipherTemplate with new data
	for(int j = 0; j < MAX_MOVES; j++) {
		cipherTemplate[j] =  newCipher[j];
	}
	delete [] newCipher;
} 


/*
 * Find the index of input wide char from reverse ST  
 */
int PasswordGen::charPositionFromReverseST(wchar_t inputChar) {
	int position;
	for (int pos = 0; pos < MAX_MOVES; pos++) {
		if (inputChar == reversedStandardTemplate[pos]) {    
			position = pos;
			break;
		}
	}
	return position;
}


/*
 * Find wide char from reverse ST for given index 
 */

wchar_t PasswordGen::findWideCharFromReverseST(int index) {
	wchar_t charAtPos;
	if (index >=0 && index < MAX_MOVES) {
		charAtPos = reversedStandardTemplate[index];
	}
	return charAtPos;
}
 
/* Function : Encrypts input string using lokdon algo and gives
 * widestring encrypted string with knight moves and silent password embedded into it.
 */ 
std::wstring PasswordGen::encryptPassword(std::string mypassword) {
	if (DEBUG) {
		std::cout<<"User Input Password="<<mypassword<<endl;
	}
	int passwordLength = mypassword.length();

 	// create placeholder array equivalent to length of string
	std::vector<wchar_t> widePasswordVector(mypassword.c_str(), mypassword.c_str() + mypassword.size());
	if (DEBUG) {
		for (std::vector<wchar_t>::const_iterator i = widePasswordVector.begin(); i != widePasswordVector.end(); ++i)
    			std::wcout << *i;	
	}
	// create an integer array for holding password character positions from ST 
	std::vector<int> passwordCharIndicesInST;
	int pos = 0;

	// find the indices of our password chars in ST
	for (std::vector<wchar_t>::const_iterator len = widePasswordVector.begin(); len != widePasswordVector.end(); ++len){
	   	for (int j = 0; j<MAX_MOVES; j++){
			if (*len == linearMatrix[j]) {
				passwordCharIndicesInST.push_back(j);
				pos++;
				break;
			}
		}
	}
	if (DEBUG) {
		wcout<<"\nUser Password Characters Positions in ST"<<endl;
		for (std::vector<int>::const_iterator i = passwordCharIndicesInST.begin(); i != passwordCharIndicesInST.end(); ++i) {
			std::wcout<< *i << ' ';
		}
	}
	// reverse standard template  and save it in private member variable
		
	// we need to add silent password to prevent repeated chars in password//
	// Add fixed chars indices from M1 in actual index of password in M1
	
	int keys[MAX_KNIGHT_TOUR];	

	// Now start knight 's tour for 5 times 	
	srand(time(NULL));
	std::vector<wchar_t> silentSupplier;

	for (int iter = 0; iter < MAX_KNIGHT_TOUR; iter++) {
		this->startPosition = 0;
		this->startPosition = (rand()%256);	
		KnightSolver *solver;
		solver = new KnightSolver(ROWS, COLS);
		if (DEBUG) {
			std::wcout << "\nstarting from position:"<<this->startPosition<<endl;
		}
		// run knight with random positions
		solver->setPosition(this->startPosition % 16, this->startPosition / 16);

		// run horse for 1 time
		solver->calculate(1);
		// we have now solver object with array of 256 possible moves of knight
		if (DEBUG) {
			this->printKnightMoves(solver->knightMoves);
		}
		if (DEBUG)  {
        		wcout<<"\nMy Cipher Template  is as below\n";
		}
		this->createCipherTemplate(solver->knightMoves);
		if (DEBUG)  {
			this->printCipher(cipherTemplate);
		}
		// use cipherPassword characters index in M2 ... M5
		int *cipherPasswordPositionInMn = new int[passwordLength];
		int *fixedPositionInMn = new int[passwordLength];
		int pos = 0;
		// find the indices of our input password chars in M1 to M5
		for (std::vector<wchar_t>::const_iterator passChar = widePasswordVector.begin(); passChar != widePasswordVector.end(); ++passChar) {
			for (int j = 0; j<MAX_MOVES; j++){
				if (*passChar == cipherTemplate[j]) {
					if (DEBUG) {
						std::wcout<<"Matched in iteration:"<<iter+1<<", character ="<<*passChar<<" at pos="<<j<<endl;	
					}
					cipherPasswordPositionInMn[pos] = j;
					pos++;
					break;
				}
			}
		}
		if (DEBUG) {
			wcout<<"Password Positions"<<endl;
			for (int i=0; i < passwordLength; i++) {
				std::wcout<<cipherPasswordPositionInMn[i]<<",";
			}
		}
		// Now we have to add silent password chars from M1 starting from backward postion of M1 i.e. 255.254 and so on up to end of length of password
		// collect as many as chars from M1 from end of cipher matrix , but not more than length of password
		
		// For M1 , initialize silentSupplier vector
		pos = 0;
		if (iter == 0) {
			int travelling = MAX_MOVES - passwordLength;
			for (int i = MAX_MOVES - 1; i >= travelling; i--) {
				silentSupplier.push_back(cipherTemplate[i]);
				fixedPositionInMn[pos] = i;
				if (DEBUG) {
					std::wcout<<fixedPositionInMn[pos]<<" ";
				}
				pos++;
			}
		} else {
			// For M2 and so on , find the index of silentSuplier chars in M2 and add to cipher Index in M2 to M5
			for (std::vector<wchar_t>::const_iterator silentChar = silentSupplier.begin(); silentChar != silentSupplier.end(); ++silentChar) {	
				for (int j = 0; j<MAX_MOVES; j++) {
					if (*silentChar == cipherTemplate[j]) {
						fixedPositionInMn[pos] = j;
						if (DEBUG) {
							std::wcout<<fixedPositionInMn[pos]<<" ";
						}
						pos++;
					}
				}
			}
		}
		

		// generate cipher password after adding the index of silentSupplier chars from M1
		// clear password vector
		widePasswordVector.clear();
		for (int i=0; i < passwordLength; i++) {
			if (DEBUG) {
				std::wcout<<"\nAdding "<<cipherPasswordPositionInMn[i]<<" And"<< fixedPositionInMn[i]<<endl;
			}
			cipherPasswordPositionInMn[i] = cipherPasswordPositionInMn[i] + fixedPositionInMn[i];
			if (DEBUG) {
				std::wcout<<"And Got "<<cipherPasswordPositionInMn[i];
			}
			if (cipherPasswordPositionInMn[i] > (MAX_MOVES -1)) {
				cipherPasswordPositionInMn[i] = cipherPasswordPositionInMn[i] -(MAX_MOVES);
				if (DEBUG) {
					std::wcout<<", New Index after subtracting 256 = "<<cipherPasswordPositionInMn[i]<<", char at this in cipher="<<cipherTemplate[cipherPasswordPositionInMn[i]];
				}
			}	
			widePasswordVector.push_back(cipherTemplate[cipherPasswordPositionInMn[i]]);
		}	
		if (DEBUG) {
			std::wcout<<"\nNew password =\n";
	        	for (std::vector<wchar_t>::const_iterator i = widePasswordVector.begin(); i != widePasswordVector.end(); ++i)
	                	std::wcout << *i;
		}
		
		keys[iter] = this->startPosition;
		solver->cleanUp();
		delete solver;
		delete [] cipherPasswordPositionInMn;
			
	}
	// generated silent Supplier as password after M5
	wchar_t *silentPassword = new wchar_t[passwordLength+1];
	if (DEBUG) {
		wcout<<"\n silent supplier \n"<<endl;
	}
	int i = 0;
	for (i=0; i < silentSupplier.size(); i++) {
		if (DEBUG) {
			std::wcout<<silentSupplier[i];
		}
		silentPassword[i] = silentSupplier[i];
		
	}
	silentPassword[i] = '\0';
	// generated cipher password after M5
	if (DEBUG) {
		wcout<<"\ngenerted Password after M5\n"<<endl;
		for (i=0; i < widePasswordVector.size(); i++) {
			std::wcout<<widePasswordVector[i];
		}
	}
	// reverse ST and save it in buffer 
	createReverseST(linearMatrix);

	// add knights tour as chars from ST
	std::vector<wchar_t> keyVector;
	wchar_t *keyChars = new wchar_t[MAX_KNIGHT_TOUR];
        for(i=0; i < MAX_KNIGHT_TOUR; i++) {
                keyVector.push_back(reversedStandardTemplate[keys[i]]);
        }
	for (int i = 0; i < keyVector.size(); i++) {
		keyChars[i] = keyVector[i];
	}
	
	keyChars[i] = '\0';
	wchar_t *finalPassword = new wchar_t[passwordLength+1];	
	for (i = 0; i < widePasswordVector.size(); i++) {
		finalPassword[i] = widePasswordVector[i];
	}

	// prepare final password  
	finalPassword[i] = '\0';
	// password format is <<password_cipher>><<silent_password_cipher>><<knight_moves_cipher>><<moves_count_cipher>>
	wstring t = std::wstring(finalPassword);
	wstring s = std::wstring(silentPassword);
	t+= s;
	t+= std::wstring(keyChars);
	t+= reversedStandardTemplate[MAX_KNIGHT_TOUR];
	// now we have cipher password //
	if (DEBUG) {
		std::wcout<<"\nNow Final Encrypted Password :\n"<<t<<endl;
	}
	//delete [] passwordCharIndicesInST;
	//delete [] finalPassword;
  	//delete [] cipherPassword;	
	//delete [] fixedPositions;
	//delete [] silentPassword;

	return t;
	
}

/* This function decrypts the input wide string and returns
 * decrypted string by applying lokdon algo
 */ 
std::string PasswordGen::decrypt(wstring cipherPassword) {
	if (DEC_DEBUG) {
        	std::wcout<<"ciphered Password="<<cipherPassword<<endl;
	}
	
	// last char denotes the number of knight's move from reverse ST
	wchar_t knightMoveChar = cipherPassword[cipherPassword.length()-1];
	
	// find index of this wide char from reverse ST
	int totalMoves = charPositionFromReverseST(knightMoveChar);
	if (DEC_DEBUG) {
		std::wcout<<"Total Night Moves:"<<totalMoves<<endl;	
	}

	// calculation for password and silent password lengths
		
	// pop back(remove) knight moves char from cipher pass word 
	cipherPassword.pop_back();
	if (DEC_DEBUG) {
		std::wcout<<"ciphered Password After removing knight's char="<<cipherPassword<<endl;
	}

	// read no of chars backwards again upto total moves
	std::wstring knightChars = cipherPassword.substr(cipherPassword.size() - totalMoves);
	if (DEC_DEBUG) {
		std::wcout<<"Knight chars are ="<<knightChars<<endl;
	}
	// now we have knight chars in our local variable , so we can pop out those chars from cipherPassword
	cipherPassword.erase(cipherPassword.length() - totalMoves);

	// Remaining cipher password now contains only actual pass plus silent password
	if (DEC_DEBUG) {
		std::wcout<<"Remaining Password = "<<cipherPassword<<endl;
	}	
	// two parts of cipher password would give us actual and silent pass
	int parts = cipherPassword.length() / 2;
	std::wstring cipherPasswordChars = cipherPassword.substr(0, parts);
	if (DEC_DEBUG) {
		 std::wcout<<"Cipher Password = "<<cipherPasswordChars<<endl;
	}
	std::wstring silentPasswordChars = cipherPassword.substr(parts, parts);
	if (DEC_DEBUG) {
		std::wcout<<"Silent Password = "<<silentPasswordChars<<endl;
	}	
	
    int cipherPasswordLength = cipherPasswordChars.length();
    int silentPassLength = silentPasswordChars.length();
    int keysLength = knightChars.length();
	if (DEC_DEBUG) {
        std::wcout<<"\nciphere length="<<cipherPasswordLength<<endl;
        std::wcout<<"\nsilent Pass word length="<<silentPassLength<<endl;
		std::wcout<<"\n Keys length="<<keysLength<<endl;
	}
    // create placeholder for silent password chars equivalent to length of string
	std::vector<wchar_t> cipherText(silentPasswordChars.c_str(), silentPasswordChars.c_str() +  silentPasswordChars.size());

	// create placeholder for knight chars 
	std::vector<wchar_t> knightMoves(knightChars.c_str(), knightChars.c_str() + knightChars.size());
    int pos = 0;
	
	int *knightCharIndicesInST = new int[keysLength];
	// find the indices of our silent password chars in reverse ST
	for (int len=0; len < keysLength; len++){
		for (int j = 0; j<MAX_MOVES; j++){
			if (knightMoves[len] == reversedStandardTemplate[j]) {
				knightCharIndicesInST[pos] = j;
				if (DEC_DEBUG) {
					std::wcout<<"\nmatched " <<knightMoves[len]<< "at "<<j<<endl;
				}
				pos++;
				break;
			}
		}
	}
	// print knights move
	if (DEC_DEBUG) {
		std::wcout<<"\nKnight move is as follows:\n";
		for (int i = 0; i < silentPassLength; i++) {
			std::wcout<<knightCharIndicesInST[i]<<"\t";
		}	
		std::wcout<<endl;
	}
	// create placeholder array equivalent to length of string
	std::vector<wchar_t> passwordVector(cipherPasswordChars.data(), cipherPasswordChars.data() + cipherPasswordChars.size());
	if (DEC_DEBUG) {
		for (std::vector<wchar_t>::const_iterator i = passwordVector.begin(); i != passwordVector.end(); ++i)
			std::wcout << *i;
	}
	// run night in reverse order
	for (int i = MAX_KNIGHT_TOUR - 1; i >= 0; i--) {
		this->startPosition = knightCharIndicesInST[i];
		KnightSolver *solver;
        solver = new KnightSolver(ROWS, COLS);
		if (DEC_DEBUG) {
            std::wcout << "\nstarting from position:"<<this->startPosition<<endl;
		}
		// run knight with random positions
		solver->setPosition(this->startPosition % 16, this->startPosition / 16);
		// run horse for 1 time
		solver->calculate(1);
		// we have now solver object with array of 256 possible moves of knight
		if (DEC_DEBUG) {
			this->printKnightMoves(solver->knightMoves);
		}
		this->createCipherTemplate(solver->knightMoves);
		if (DEC_DEBUG) {
			this->printCipher(cipherTemplate);
		}
		// find cipher index in this move
		int *cipherPasswordPosition = new int[cipherPasswordLength];	
		pos = 0;
		// for M5
		// find the indices of our input password chars in M1 to M5
		for (std::vector<wchar_t>::const_iterator passChar = passwordVector.begin(); passChar != passwordVector.end(); ++passChar) {
			for (int j = 0; j<MAX_MOVES; j++){
				if (*passChar == cipherTemplate[j]) {
					cipherPasswordPosition[pos] = j;
					pos++;
					break;
				}
			}
		}
		if (DEC_DEBUG) {
			std::wcout<<"\nPassword postions in M"<<i+1<<"\n";
			for (int j = 0; j < passwordVector.size(); j++){
				std::wcout<<cipherPasswordPosition[j]<<" ";
			}
		}
		// since we have fixed silent chars at different indices , we need to find those indices in M5 to M1
		std::vector<int> silentCharsPositions;
		pos = 0;
		silentCharsPositions.clear();	
		for (std::vector<wchar_t>::const_iterator cipherChar = cipherText.begin(); cipherChar != cipherText.end(); ++cipherChar) {
			for (int j = 0; j<MAX_MOVES; j++) {
				if (*cipherChar == cipherTemplate[j]) {
					silentCharsPositions.push_back(j);
					if (DEC_DEBUG) {
						std::wcout<<"Matched silent password char "<< *cipherChar <<" at position ="<<j<<endl; 					      }
					break;
				}
			}
		}
		if (DEC_DEBUG) {
			std::wcout<<"\nsilent chars password in M"<<i+1<<"\n";
			for (int j = 0; j < cipherText.size(); j++) {
				std::wcout<<silentCharsPositions[j]<<" ";
			}
		}
		passwordVector.clear();	
		// calculation for Final cipher 
		pos = 0;
		for (int s = 0; s < cipherText.size(); s++) {
			cipherPasswordPosition[s] = cipherPasswordPosition[s] +  (MAX_MOVES);
			if (cipherPasswordPosition[s] > (MAX_MOVES - 1)) {
				cipherPasswordPosition[s] = cipherPasswordPosition[s] - silentCharsPositions[pos];
				if (DEC_DEBUG) {
					wcout<<"\nAfter Subtracting  New pos = "<<cipherPasswordPosition[s];
				}
				pos++;
				// if we still get cipherPasswordPosition > 255 , subtract it again
				if (cipherPasswordPosition[s] > (MAX_MOVES - 1)) {
					cipherPasswordPosition[s] = cipherPasswordPosition[s] - (MAX_MOVES);
				}
			}
			passwordVector.push_back(cipherTemplate[cipherPasswordPosition[s]]);
		}
		if (DEC_DEBUG) {
			std::wcout<<"\nFinal chars postions in M"<<i+1<<"\n";
			for (int j = 0; j < cipherText.size(); j++) {
				std::wcout<<cipherPasswordPosition[j]<<" ";
			}
			wcout<<endl;
		}
		if (DEC_DEBUG) {
			for (std::vector<wchar_t>::const_iterator cipherChar = passwordVector.begin(); cipherChar != passwordVector.end(); ++cipherChar)
				std::wcout<<*cipherChar;
		}
		solver->cleanUp();
		delete solver;
	}
	std::string pString = std::string(passwordVector.begin(), passwordVector.end());
	return pString;
	//delete [] silentCharIndicesInST;
	//delete [] cipherText;
	
}	

/*
 * Function to encrypt MPIN digits accepted in string format 
 * returns encrypted wstring for mpin
 */
std::wstring PasswordGen::encryptMpin(std::string mpin) {
    // storage of cipher mpin
    std::vector<wchar_t> cipherMpinVector;
    if (DEBUG) {
        std::cout<<"User Input MPIN="<<mpin<<endl;
    }
    int mpinLength = mpin.length();
    if (checkMpinLength(mpinLength)) {
        // create placeholder array for string mpin string
        std::vector<wchar_t> wideMpinVector(mpin.c_str(), mpin.c_str() + mpin.size());
        if (DEBUG) {
            for (std::vector<wchar_t>::const_iterator i = wideMpinVector.begin(); i != wideMpinVector.end(); ++i) {
                std::wcout << *i;
            }
        }
		int keys[MAX_MPIN_TOUR];
		// Now start knight 's tour for 2 times
		srand(time(NULL));
		for (int iter = 0; iter < MAX_MPIN_TOUR; iter++) {
			int pos = 0;
			this->startPosition = 0;
			this->startPosition = (rand()%256);
			KnightSolver *solver;
			solver = new KnightSolver(ROWS, COLS);
			if (DEBUG) {
					std::wcout << "\nstarting from position:"<<this->startPosition<<endl;
			}
			// run knight with random positions
			solver->setPosition(this->startPosition % 16, this->startPosition / 16);

			// run horse for 1 time
			solver->calculate(1);
			// we have now solver object with array of 256 possible moves of knight
			if (DEBUG) {
				this->printKnightMoves(solver->knightMoves);
			}
			if (DEBUG)  {
				wcout<<"\nMy Cipher Template  is as below\n";
			}
			this->createCipherTemplate(solver->knightMoves);
			if (DEBUG)  {
				this->printCipher(cipherTemplate);
            }
			// use cipherPassword characters index in M1 and M2
			int *cipherMpinPositionInMn = new int[mpinLength];
			// find the indices of our input mpin chars in M1 & M2
			for (std::vector<wchar_t>::const_iterator mpinChar = wideMpinVector.begin(); mpinChar != wideMpinVector.end(); ++mpinChar) {
				for (int j = 0; j < MAX_MOVES; j++){
					if (*mpinChar == cipherTemplate[j]) {
						if (DEBUG) {
								std::wcout<<"Matched in iteration:"<<iter+1<<", character ="<<*mpinChar<<" at pos="<<j<<endl;
						}
						cipherMpinPositionInMn[pos] = j;
						if (DEBUG) {
							std::wcout<<cipherMpinPositionInMn[pos]<<",";
						}
						pos++;
						break;
					}
				}
			}
			// we have mpin chars in cipherMpinPositions array, print it //
			if (DEBUG) {
				wcout<<"MPIN Positions"<<endl;
				for (int i=0; i < mpinLength; i++) {
						std::wcout<<cipherMpinPositionInMn[i]<<",";
				}
			}
            if (DEBUG) {
                std::wcout<<"Now Encryption is starting:"<<endl;
            }
            // we need to identify the postions of mpin input chars in M2 only
            if (iter == 1) {
                // check if we are in situation of boundaries in left or right array
                int pinPosition = 0;
                std::vector<int> leftPosVector (leftBorder, leftBorder + 16);
                std::vector<int> rightPosVector (rightBorder, rightBorder + 16);
                for (int mpinPos = 0; mpinPos < MPIN_LENGTH; mpinPos++) {
                    if (DEBUG) {
                        std::wcout<<"Searching For "<<cipherMpinPositionInMn[mpinPos]<<" in Left Array "<<endl;
                    }
                    std::vector<int>::iterator it = std::find(leftPosVector.begin(), leftPosVector.end(), cipherMpinPositionInMn[mpinPos]);
                    if (DEBUG) {
                        std::wcout<<*it<<endl;
                    }
                    if (it != leftPosVector.end()) {
						if (DEBUG) {
							std::wcout<<"we got a mpin position in left array boundry"<<endl;
						}
                        pinPosition = *it;
                        // 2 chars from left of the pinPosition from M2 should be taken as cipher char
                        cipherMpinVector.push_back(cipherTemplate[pinPosition + 1]);
                        cipherMpinVector.push_back(cipherTemplate[pinPosition + 2]);
                    } else {
                        if (DEBUG) {
							std::wcout<<"Searching For "<<cipherMpinPositionInMn[mpinPos]<<" in Right Array"<<endl;
						}
                        std::vector<int>::iterator it = std::find(rightPosVector.begin(), rightPosVector.end(), cipherMpinPositionInMn[mpinPos]);
                        if (it != rightPosVector.end()) {
                            if (DEBUG) {
								std::wcout<<"we got a mpin position in right array boundry" <<endl;
							}
                            pinPosition = *it;
                            // 2 chars from right of the pinPosition from M2 should be taken as cipher char
                            cipherMpinVector.push_back(cipherTemplate[pinPosition-1]);
                            cipherMpinVector.push_back(cipherTemplate[pinPosition-2]);
                        } else {
							if (DEBUG) {
								std::wcout<<"we did not get any position in boundaries, just take one chr from left and one char from right" <<endl;
							}
                            cipherMpinVector.push_back(cipherTemplate[cipherMpinPositionInMn[mpinPos] - 1]);
                            cipherMpinVector.push_back(cipherTemplate[cipherMpinPositionInMn[mpinPos] + 1]);
                        }
                    }
                }
            }
            keys[iter] = startPosition;
            if(DEBUG) {
                std::wcout<<"MPIN Cipher Length = "<<cipherMpinVector.size()<<endl;
                for (std::vector<wchar_t>::const_iterator i = cipherMpinVector.begin(); i != cipherMpinVector.end(); ++i)
                    std::wcout << *i;
			}
			solver->cleanUp();
			delete solver;
        }
		wchar_t *finalPin = new wchar_t[mpinLength+1];
		int zebra = 0;
		for (zebra = 0; zebra < cipherMpinVector.size(); zebra++) {
			finalPin[zebra] = cipherMpinVector[zebra];
		}
		finalPin[zebra] = '\0';
		// add knights tour as chars from reverse ST
		std::vector<wchar_t> mpinKeyVector;
		wchar_t *mpinKeyChars = new wchar_t[MAX_MPIN_TOUR];
        for(zebra = 0; zebra < MAX_MPIN_TOUR; zebra++) {
            mpinKeyVector.push_back(reversedStandardTemplate[keys[zebra]]);
        }
		for (zebra = 0; zebra < mpinKeyVector.size(); zebra++) {
			mpinKeyChars[zebra] = mpinKeyVector[zebra];
		}
		mpinKeyChars[zebra] = '\0';		
		// prepare final mpin  
		// mpin format is <<mpin_cipher>><<knight_moves_cipher>>
		wstring t = std::wstring(finalPin);
		wstring s = std::wstring(mpinKeyChars);
		t+= s;
		return t;
    } else {
        return std::wstring(L"Pin Length Issue");
    }

}


/*
 * Function to decrypt mPIN given in wstring format <<mpin_ciper>><<knight_move_M1>><<knight_move_M2>> 
 * Returns string format of decrypted mpin
 */
std::string PasswordGen::decryptMpin(std::wstring encryptedMpin) {
	if (DEC_DEBUG) {
		std::wcout<<"Received ciphered MPIN "<<encryptedMpin<<endl;
	}
	// last two chars denotes the number of knight's move from reverse ST
	wchar_t m2Code = encryptedMpin[encryptedMpin.length()-1];
	
	// find index of this wide char from reverse ST
	int m2 = charPositionFromReverseST(m2Code);
	if (DEC_DEBUG) {
		std::wcout<<"Move Found as :"<<m2<<endl;	
	}
	// pop back(remove) knight moves char from cipher mpin 
	encryptedMpin.pop_back();
	// calculation for password and silent password lengths
	// Again find m1 key and m1
	wchar_t m1Code = encryptedMpin[encryptedMpin.length()-1];
	int m1 = charPositionFromReverseST(m1Code);
	if (DEC_DEBUG) {
		std::wcout<<"Another Move Found as :"<<m1<<endl;	
	}
	// Remove M1 also from mpin ciper
	encryptedMpin.pop_back();
	if (DEC_DEBUG) {
		std::wcout<<"ciphered MPIN After removing knight's char="<<encryptedMpin<<endl;
	}
	// to decrypt  mpin, algo is
	// Run M1 
	//  
	// Run M2, take 2 chars at a time from last 
	// take first wchar from cipher , find position of this wchar in m2 say x1, 
	// find position of next char in m2 say x2
	// if both positions are consecutive forward(x1->x2) then take char at position x' where x'->x1->x2
	// if both postion are consecutive backward (x1<-x2) then take char at position x' where x1<-x2-<x'
	// if there is a gap of 1 position, take x' as x1->x'->x2
	int knightMoves[MAX_MPIN_TOUR];
	knightMoves[0] = m1;
	knightMoves[1] = m2;
	if (DEC_DEBUG) {
		std::wcout<<"Knight Positions are = "<<knightMoves[0]<<" and "<<knightMoves[1]<<endl;
	}
	// create placeholder array equivalent to length of input wstring
	std::vector<wchar_t> mpinVector;

 	for (int i = 0; i < MAX_MPIN_TOUR; i++) {
		// start night tour
		this->startPosition = knightMoves[i];
		KnightSolver *knight;
		knight = new KnightSolver(ROWS, COLS);
		if (DEC_DEBUG) {
            std::wcout << "\nstarting from position:"<<this->startPosition<<endl;
		}
		// run knight with random positions
		knight->setPosition(this->startPosition % 16, this->startPosition / 16);
		// run horse for 1 time
		knight->calculate(1);
		// we have now solver object with array of 256 possible moves of knight
		if (DEC_DEBUG) {
			this->printKnightMoves(knight->knightMoves);
		}
		this->createCipherTemplate(knight->knightMoves);
		if (DEC_DEBUG) {
			this->printCipher(cipherTemplate);
		}
		
		// if this is m2
		if (i == 1) {
			for (int iteration = 0; iteration < MPIN_LENGTH; iteration++) {
				// take 2 chars from last 
				int mpinEncryptPosition[MAX_MPIN_TOUR];
				wchar_t last_char = encryptedMpin[encryptedMpin.length()-1];
				encryptedMpin.pop_back();
				wchar_t second_last_char = encryptedMpin[encryptedMpin.length()-1];
				encryptedMpin.pop_back();
				// find position of both chars in m2
				for (int pos = 0; pos < MAX_MOVES; pos++) {
					if (last_char == cipherTemplate[pos]) {
						mpinEncryptPosition[0] = pos;
						pos++;
						break;
					}
				}
				for (int pos = 0; pos < MAX_MOVES; pos++) {
					if (second_last_char == cipherTemplate[pos]) {
						mpinEncryptPosition[1] = pos;
						pos++;
						break;
					}
				}
				if (DEC_DEBUG) {
					std::wcout<<"We Found Position of "<<last_char <<"at "<<mpinEncryptPosition[0]<<endl;
					std::wcout<<"We Found Position of "<<second_last_char <<"at "<<mpinEncryptPosition[1]<<endl;
				}
				// find difference_type of positions
				if (mpinEncryptPosition[0] < mpinEncryptPosition[1]) {
					// left boundary case
					// take char at mpinEncryptPosition + 1
					if (DEC_DEBUG) {
						std::wcout<<"Char Found = "<< cipherTemplate[mpinEncryptPosition[1]+1]<<endl;
					}
					mpinVector.push_back(cipherTemplate[mpinEncryptPosition[1]+1]);
				} else if (mpinEncryptPosition[0] > mpinEncryptPosition[1]) {
					// right boundary case or left-right condition
					if (mpinEncryptPosition[0] - mpinEncryptPosition[1] == 2) {
						// left right condition achieved
						if (DEC_DEBUG) {
							std::wcout<<"Char is = "<<cipherTemplate[(mpinEncryptPosition[0] + mpinEncryptPosition[1])/2]<<endl;
						}
						mpinVector.push_back(cipherTemplate[(mpinEncryptPosition[0] + mpinEncryptPosition[1])/2]);
					} else {
						if (DEC_DEBUG) {
							std::wcout<<"Char Found = "<< cipherTemplate[mpinEncryptPosition[1]-1]<<endl;
						}
						mpinVector.push_back(cipherTemplate[mpinEncryptPosition[1]-1]);
					}	
				}
			}	
		}
		knight->cleanUp();
		delete knight; 
	}
	std::reverse(mpinVector.begin(), mpinVector.end());
	std::string mString = std::string(mpinVector.begin(), mpinVector.end());
	if (DEC_DEBUG) {
		std::cout<<"Returning mpin = "<<mString<<endl;
	}
	return mString;
}	
	

 	
// generic function to call encrypt function python code
extern "C" {
	const wchar_t * encrypt(char *data) {
		setlocale(LC_ALL, "");
		std::string password(data);
		//cout<<"Hello World:"<<password;
		PasswordGen *object = new PasswordGen();
		std::wstring encryptedPass = object->encryptPassword(password);
		//std::wcout<<encryptedPass;
		return encryptedPass.c_str();
	}
}

extern "C" {
	const wchar_t *encryptMPIN(char *data) {
		setlocale(LC_ALL, "");
		std::string password(data);
		PasswordGen *object = new PasswordGen();
		std::wstring encryptedMpin = object->encryptPassword(password);
		delete object;
		return encryptedMpin.c_str();
	}
}

extern "C" {
	const char * decryptMPIN(wchar_t *encodedMpin) {
		setlocale(LC_ALL, "");
		std::wstring passwd(encodedMpin);
        PasswordGen *object = new PasswordGen();
		std::string decrypted = object->decrypt(passwd);
		delete object;
		return decrypted.c_str();
	}
}

extern "C" {
   const char* decrypt(wchar_t *encrypted) {
       	setlocale(LC_ALL, "");
		std::wstring passwd(encrypted);
        PasswordGen *object = new PasswordGen();
		std::string decrypted = object->decrypt(encrypted);
		delete object;
		return decrypted.c_str();
   }
}

int main(int argc, char *argv[] ) {
   setlocale(LC_ALL, "");
   std::string mypass;
   //accept whitespaces also in password
   std::wcout<<"Enter Password Here:";
   std::getline(std::cin, mypass);
   PasswordGen *object = new PasswordGen(mypass);
   if (DEBUG) {
   	object->printCipher(linearMatrix);
   }
   std::wstring encryptedPass = object->encryptPassword(mypass);
   std::string original= object->decrypt(encryptedPass);
   std::cout<<"\nover and final password="<<original;
   encryptedPass = object->encryptMpin("3456");
   std::wcout<<"\nencrpyted MPIN= "<< encryptedPass <<endl;
   //original = object->decryptMpin(encryptedPass);
   //std::cout<<"\nDecrpyted MPIN= "<<original;
   delete object;
   return 0;
}		
		
