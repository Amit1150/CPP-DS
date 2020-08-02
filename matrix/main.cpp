#include <iostream>
using namespace std;

int main() {
    const int ROW = 3;
    const int COLUMN = 4;
    int matrix [ROW][COLUMN];
    cout << "Enter value of 3X4 matrix"<< endl;
    for(int i=0; i < ROW;i++){
        for(int j=0; j< COLUMN; j++){
            cin>> matrix[i][j];
        }
    }

int rows =  sizeof(matrix)/sizeof(matrix[0]);
int cols = sizeof(matrix)/(sizeof(int)*rows);
    cout << "total columns: "<< cols << endl;
    cout << "total rows: "<< rows << endl;

//    It will work for vector    
//    cout << "total columns: "<< matrix.size() << endl;
//    cout << "total rows: "<< matrix[0].size() << endl;
    return 0;
}