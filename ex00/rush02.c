#include <stdio.h>


void WriteRow(int col, int isLast, int row)
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
    if (isLast == 0 && row > 1) write(1, "\n", 1);
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
    int i = 0;
    while (i < row)
    {
        if (i == 0)
        {
            WriteRow(col, i, row);
        }
        else if (i == row - 1)
        {
            WriteRow(col, i, row);
        }
        else WriteCol(col);
        i++;
    }

}
int main()
{
    rush(4, 4);
    return 0;
}
