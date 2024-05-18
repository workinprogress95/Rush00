#include <stdio.h>

void WriteRow(int col, int isLast)
{
    char edge = isLast > 0 ? 'C' : 'A';
    int i = 0;
    while (i < col)
    {
        if (i == 0 || i == col - 1)
        {
            write(1, &edge, 1);
        }
        else write(1, "B", 1);
        i++;
    }
}
void WriteCol(int col)
{
    write(1, "B", 1);
    int i = 1;
    while (i < col)
    {
        if (i == col - 1)
        {
            write(1, "B", 1);
        }
        else write(1, " ", 1);
        i++;
    }
    write(1, "\n", 1);
}

void rush(int col, int row)
{
    if (col <= 0 || row <= 0) return;
    int i = 0;
    while (i < row)
    {
        if (i == 0 || i == row - 1)
        {
            WriteRow(col, i);
            if (i == 0 && row > 1) write(1, "\n", 1);
        }
        else WriteCol(col);
        i++;
    }
}
int main()
{
    rush(5, 0);
    return 0;
}
