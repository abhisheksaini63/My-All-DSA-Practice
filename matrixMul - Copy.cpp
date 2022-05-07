#include<iostream>
using namespace std;

class Matrix {
private:
    int a[50][50],r,c;

public:
    void get_data() {
        int i,j;

        cout << "\nEnter the number of rows and columns of matrix> " <<flush;
        cin >> r >> c ;

        cout << "The size of your matrix is " << r << " * " << c << endl;
        cout << "\nEnter the elements of matrix > " << endl;

        for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {

                cout << "a[" << i <<"][" << j <<"] = ";
                cin >> a[i][j];
            }
        }
    }

    void show_data() {
        int i,j;

        for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {
                cout << a[i][j] << "\t" ;
            }
            cout << endl;
        }
    }

    friend void checker();
    friend void matrix_multiplication(Matrix M1, Matrix M2);
};


void matrix_multiplication(Matrix M1, Matrix M2) {

    int i,j,k,multiplication[50][50];

    if(M1.c == M2.r) {

        for(i = 0; i < M1.r; i++) {
            for(j = 0; j < M2.c; j++) {
                multiplication[i][j] = 0;

                for(k = 0; k < M2.r; k++) {

                    multiplication[i][j] = multiplication[i][j] + (M1.a[i][k] * M2.a[k][j]);
                }
            }
        }

        for(i = 0; i < M1.r; i++) {
            for(j = 0; j < M2.c; j++) {

                cout << multiplication[i][j] << "\t";
            }
            cout << endl;
        }
    }

    else
        cout <<"Can't be multiplied!" << endl;
}



int main () {
    Matrix M,M3;
    M.get_data();
    M.show_data();

    M3.get_data();
    M3.show_data();

    matrix_multiplication(M, M3);

    return 0;
}
