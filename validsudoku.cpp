#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i < 9; i++)
        {
            unordered_map<char, int> freq;
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] >= '0' && board[i][j] <= '9')
                {
                    freq[board[i][j]] += 1;
                    if (freq[board[i][j]] >= 2)
                    {
                        return false;
                    }
                }
            }
        }

        for (int i = 0; i < 9; i++)
        {
            unordered_map<char, int> freq;
            for (int j = 0; j < 9; j++)
            {
                if (board[j][i] >= '0' && board[j][i] <= '9')
                {
                    freq[board[j][i]] += 1;
                    if (freq[board[j][i]] >= 2)
                    {
                        return false;
                    }
                }
            }
        }
        
        unordered_map<char, int> freq1;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] >= '0' && board[i][j] <= '9')
                {
                    freq1[board[i][j]] += 1;
                    if (freq1[board[i][j]] >= 2)
                    {
                        return false;
                    }
                }
            }
        }

        unordered_map<char, int> freq2;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 3; j < 6; j++)
            {
                if (board[i][j] >= '0' && board[i][j] <= '9')
                {
                    freq2[board[i][j]] += 1;
                    if (freq2[board[i][j]] >= 2)
                    {
                        return false;
                    }
                }
            }
        }

        unordered_map<char, int> freq3;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 6; j < 9; j++)
            {
                if (board[i][j] >= '0' && board[i][j] <= '9')
                {
                    freq3[board[i][j]] += 1;
                    if (freq3[board[i][j]] >= 2)
                    {
                        return false;
                    }
                }
            }
        }

        unordered_map<char, int> freq4;
        for (int i = 3; i < 6; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] >= '0' && board[i][j] <= '9')
                {
                    freq4[board[i][j]] += 1;
                    if (freq4[board[i][j]] >= 2)
                    {
                        return false;
                    }
                }
            }
        }

        unordered_map<char, int> freq5;
        for (int i = 3; i < 6; i++)
        {
            for (int j = 3; j < 6; j++)
            {
                if (board[i][j] >= '0' && board[i][j] <= '9')
                {
                    freq5[board[i][j]] += 1;
                    if (freq5[board[i][j]] >= 2)
                    {
                        return false;
                    }
                }
            }
        }

        unordered_map<char, int> freq6;
        for (int i = 3; i < 6; i++)
        {
            for (int j = 6; j < 9; j++)
            {
                if (board[i][j] >= '0' && board[i][j] <= '9')
                {
                    freq6[board[i][j]] += 1;
                    if (freq6[board[i][j]] >= 2)
                    {
                        return false;
                    }
                }
            }
        }

        unordered_map<char, int> freq7;
        for (int i = 6; i < 9; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] >= '0' && board[i][j] <= '9')
                {
                    freq7[board[i][j]] += 1;
                    if (freq7[board[i][j]] >= 2)
                    {
                        return false;
                    }
                }
            }
        }

        unordered_map<char, int> freq8;
        for (int i = 6; i < 9; i++)
        {
            for (int j = 3; j < 6; j++)
            {
                if (board[i][j] >= '0' && board[i][j] <= '9')
                {
                    freq8[board[i][j]] += 1;
                    if (freq8[board[i][j]] >= 2)
                    {
                        return false;
                    }
                }
            }
        }

        unordered_map<char, int> freq9;
        for (int i = 6; i < 9; i++)
        {
            for (int j = 6; j < 9; j++)
            {
                if (board[i][j] >= '0' && board[i][j] <= '9')
                {
                    freq9[board[i][j]] += 1;
                    if (freq9[board[i][j]] >= 2)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

int main()
{
    vector<vector<char>> board = {
        {'.', '.', '.', '.', '5', '.', '.', '1', '.'},
        {'.', '4', '.', '3', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '3', '.', '.', '1'},
        {'8', '.', '.', '.', '.', '.', '.', '2', '.'},
        {'.', '.', '2', '.', '7', '.', '.', '.', '.'},
        {'.', '1', '5', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '2', '.', '.', '.'},
        {'.', '2', '.', '9', '.', '.', '.', '.', '.'},
        {'.', '.', '4', '.', '.', '.', '.', '.', '.'}};
    Solution s;
    if (s.isValidSudoku(board))
    {
        cout << "Valid";
    }
    else
    {
        cout << "Invalid";
    }
    return 0;
}