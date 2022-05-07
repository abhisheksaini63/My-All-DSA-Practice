#include<bits/stdc++.h>
using namespace std;

void displayBoard(int board[][9]) {
	for (int i = 0 ; i < 9 ; i++) {
		for (int j = 0; j < 9 ; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}

bool isValid(int a[][9], int x, int y, int val) {
	for (int i = 0 ; i < 9 ; i++) {
		if (a[x][i] == val)return false;
	}
	for (int j = 0; j < 9; j++)
	{
		if (a[j][y] == val) return false;
	}
	int smi = (x / 3) * 3, smj = ( y / 3) * 3;
	for (int i = 0 ; i < 3 ; i++) {
		for (int j = 0 ; j < 3; j++) {
			if (a[smi + i][smj + j] == val)return false;
		}
	}

	return true;
}
void solveSudoku(int a[][9] , int i , int j ) {
	if (i == 9) {
		// cout << "hell0";
		displayBoard(a);
		return ;
	}

	int ni = 0 , nj = 0;

	if (j == 8) {
		ni = i + 1; nj = 0;
	}
	else {
		ni = i;	nj = j + 1;
	}


	if (a[i][j] != 0) {
		solveSudoku(a , ni, nj);
	}
	else {
		for (int pos = 1 ; pos < 10 ; pos++) {
			if (isValid(a, i, j, pos)  == true) {
				a[i][j] = pos;
				solveSudoku(a, ni, nj);
				a[i][j] = 0;
			}
		}
	}

}





int main(int argc, char const *argv[])
{
	int board[9][9];

	for (int i = 0 ; i < 9 ; i++) {
		for (int j = 0 ; j < 9 ; j++) {
			cin >> board[i][j];
		}
	}

	solveSudoku(board, 0, 0);
	return 0;
}