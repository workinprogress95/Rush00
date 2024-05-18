#include <unistd.h>

void WriteRow(int col, int isLast);
void WriteCol(int col);
void rush(int row, int col);

int main()
{
    rush(5, 0);
    return 0;
}