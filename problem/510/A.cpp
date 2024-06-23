#include <iostream>
#include <vector>

void drawSnake(int n, int m)
{
    std::vector<std::string> grid(n, std::string(m, '.'));

    for (int r = 0; r < n; ++r)
    {
        if (r % 2 == 0)
        {
            // Fill entire row with '#'
            for (int c = 0; c < m; ++c)
            {
                grid[r][c] = '#';
            }
        }
        else
        {
            // For odd rows, decide to fill the last or first cell with '#'
            if ((r / 2) % 2 == 0)
            {
                // Fill the last cell for rows 1, 5, 9, ...
                grid[r][m - 1] = '#';
            }
            else
            {
                // Fill the first cell for rows 3, 7, 11, ...
                grid[r][0] = '#';
            }
        }
    }

    // Print the grid
    for (const std::string &line : grid)
    {
        std::cout << line << std::endl;
    }
}

int main()
{
    int n, m;

    std::cin >> n >> m;

    drawSnake(n, m);

    return 0;
}