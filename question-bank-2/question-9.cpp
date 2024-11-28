#include <iostream>

using namespace std;

void convert_to_zero_based(int &col, int &row);
bool is_inside_grid(pair<int, int> positions);
bool is_available_cell(int row, int col, int grid[9][9]);
bool is_valid_in_row(int number, int col, int grid[9][9]);
bool is_valid_in_column(int number, int row, int grid[9][9]);
bool is_valid_in_region(int number, int region[3][3]);
pair<int, int> compute_subgrid_position(int grid_position);

int main()
{
    int grid[9][9];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> grid[i][j];
        }
    }

    int number, row, col;
    cin >> number >> row >> col;

    convert_to_zero_based(row, col);

    pair<int, int> subgrid_row = compute_subgrid_position(row);
    pair<int, int> subgrid_col = compute_subgrid_position(col);

    int region[3][3];
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            region[i][j] = grid[subgrid_row.first + i][subgrid_col.first + j];
        }
    }

    if (number > 9 || number < 1)
        cout << "Invalid number." << endl;
    else if (is_inside_grid({row, col}) &&
             is_available_cell(row, col, grid) &&
             is_valid_in_row(number, row, grid) &&
             is_valid_in_column(number, col, grid) &&
             is_valid_in_region(number, region))
        cout << "Valid place." << endl;
    else
        cout << "Invalid place." << endl;

    return 0;
}

void convert_to_zero_based(int &row, int &col)
{
    row--;
    col--;
}

bool is_inside_grid(pair<int, int> positions)
{
    return positions.first >= 0 && positions.first <= 8 &&
           positions.second >= 0 && positions.second <= 8;
}

bool is_available_cell(int row, int col, int grid[9][9])
{
    return grid[row][col] == 0;
}

bool is_valid_in_row(int number, int row, int grid[9][9])
{
    for (int j = 0; j < 9; j++)
    {
        if (grid[row][j] == number)
            return false;
    }

    return true;
}

bool is_valid_in_column(int number, int col, int grid[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        if (grid[i][col] == number)
            return false;
    }

    return true;
}

bool is_valid_in_region(int number, int region[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (region[i][j] == number)
                return false;
        }
    }

    return true;
}

pair<int, int> compute_subgrid_position(int grid_position)
{
    if (grid_position >= 0 && grid_position <= 2)
    {
        return {0, 2};
    }
    else if (grid_position >= 3 && grid_position <= 5)
    {
        return {3, 5};
    }
    else
    {
        return {6, 8};
    }
}