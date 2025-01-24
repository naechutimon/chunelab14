#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

//Do not modify source code above this line 

void inputMatrix(double A[][N]) {
    for (int i = 0; i < N; ++i) {
        cout << "Row " << i+1 << ": ";
        for (int j = 0; j < N; ++j) {
            cin >> A[i][j];
        }
    }
}
//////////////////////////////////////////////////
void findLocalMax(const double A[][N], bool B[][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            B[i][j] = false;
        }
    }

    for (int i = 0; i < N; ++i) {
        B[0][i] = B[N-1][i] = false; 
        B[i][0] = B[i][N-1] = false; 
    }


    for (int i = 1; i < N-1; ++i) {
        for (int j = 1; j < N-1; ++j) {
            if (A[i][j] >= A[i-1][j] && A[i][j] >= A[i+1][j] && A[i][j] >= A[i][j-1] && A[i][j] >= A[i][j+1]) {
                B[i][j] = true; 
            }
        }
    }
}
///////////////////////////////////////////////////////
void showMatrix(const bool B[][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << B[i][j] << " "; // Print 1 for true and 0 for false
        }
        cout << "\n";
    }
}
