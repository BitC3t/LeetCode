// (463) Island Parameter
// FAILED
// FAILED

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;

        if(grid.size() == 0) {
            return perimeter;
        } else if (grid.size() == 1) {
            vector<int> a = grid[0];

            int rows = 0;
            for(int i = 0; i < a.size(); i++) {
                if(a[i] == 1) {
                    rows++;
                }
            }

            if(rows > 1) {
                perimeter = 6 + 2*(rows - 2);
            } else if (rows == 1) {
                perimeter = 4;
            } else {
                perimeter = 0;
            }

            return perimeter;
        }

        for(int i = 0; i < grid.size() - 1; i++) {
            int row_p = 0;
            int row_c = 0;

            if(i == 0) {
                vector<int> a = grid[i];
                vector<int> b = grid[i+1];

                for(int j = 0; j < a.size(); j++) {
                    if(a[j] == 1) {
                        if(b[j] == 1) {
                            row_p--;
                        }
                        row_c++;
                    }
                }
            } else if (i == grid.size() - 1) {
                vector<int> a = grid[i];
                vector<int> b = grid[i-1];

                for(int j = 0; j < a.size(); j++) {
                    if(a[j] == 1) {
                        if(b[j] == 1) {
                            row_p--;
                        }
                        row_c++;
                    }
                }
            } else {
                vector<int> a = grid[i];
                vector<int> b = grid[i-1];
                vector<int> c = grid[i+1];

                for(int j = 0; j < a.size(); j++) {
                    if(a[j] == 1) {
                        if(b[j] == 1) {
                            row_p--;
                        }
                        if(c[j] == 1) {
                            row_p--;
                        }
                        row_c++;
                    }
                }
            }

            if(row_c > 1) {
                row_p = 6 + 2*(row_c - 2);
            } else if (row_c == 1) {
                row_p = 4;
            } else {
                row_p = 0;
            }

            perimeter += row_p;            
        }

        return perimeter;
    }
};