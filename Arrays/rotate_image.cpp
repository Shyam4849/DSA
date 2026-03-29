#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    // Optimal Approach

    int r = matrix.size();
    int c = matrix[0].size();

    // Finding the Transpose
    for (int i = 0; i < r; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row for 90-deg clockwise rotation
    for (int i = 0; i < r; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    // Printing the matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(matrix);
}