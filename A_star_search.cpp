


using namespace std;

#include <vector>
#include <iostream>
#include <String>


const vector<vector<int>> ArrayToSolve = { {0,1,0,0,0,0},
{0,1,0,0,0,0} ,
{0,1,0,0,0,0} ,
{0,1,0,0,0,0} ,
{0,0,0,0,1,0} };


enum class State {Empty,Obstacle,Closed,Path};


// read

vector<vector<State>> ReadData(vector<vector<int>> Array) {
	vector<vector<State>> board{};

	for (vector<int> row : Array) {
		vector<State> modified_row;
		for (int x : row) {
			if (x == 0) {
				modified_row.emplace_back(State::Empty);
			}
			else {
				modified_row.emplace_back(State::Obstacle);
			}
		}
		board.emplace_back(modified_row);
	}
	return board;
}



int main() {

	//testing Read data and Print

	const vector<vector<int>> BoardToSolve = ArrayToSolve;

	vector<vector<State>> board = ReadData(BoardToSolve);

	for (vector<State> row : board) {
		for (State state : row) {
			if (state == State::Empty) {
				cout << "Empty     ";
			}
			else {
				cout << "Obstacle  ";
			}
		}
		cout << "\n";
	}

	return 0;
}
