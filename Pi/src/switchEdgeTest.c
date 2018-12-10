#include "../hdr/display.h"
#include "../hdr/switchEdgeTest.h"

#define MODE_OFF 0
#define MODE_SHOW 1
#define MODE_SHOW_SINGLE 2

uint8_t inSwitchEdgeTestMode = MODE_OFF;
uint8_t showColumn, showRow;

char *getSwitchName()
{
	switch (showColumn)
	{
	case 0:
	case 1:
		return "Not used";
	case 2:
		switch (showRow)
		{
		case 0:
		case 1:
			return "Not used";
		case 2:
			return "Escape";
		case 3:
			return "Enter";
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return "Not used";
		case 12:
			return "Up";
		case 13:
		case 14:
			return "Not used";
		case 15:
			return "Down";
		}
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
		break;
	}

	return "Not used";
}

void showMatrix(uint16_t oldInputRegister[8])
{
	if (inSwitchEdgeTestMode != MODE_OFF)
	{
		clearScreen();
		printf("  0 1 2 3 4 5 6 7 8 9 a b c d e f\n");
		for (int i = 0; i < 8; i++)
		{
			printf("%d ", i);
			for (int j = 0; j < 16; j++)
			{
				if (oldInputRegister[i] & 1 << j)
				{
					if (inSwitchEdgeTestMode == MODE_SHOW_SINGLE && showColumn == i && showRow == j)
					{
						printf("X ");
					}
					else
					{
						printf("x ");
					}
				}
				else
				{
					if (inSwitchEdgeTestMode == MODE_SHOW_SINGLE && showColumn == i && showRow == j)
					{
						printf("- ");
					}
					else
					{
						printf(". ");
					}
				}
			}
			printf("\n");
		}
		if (inSwitchEdgeTestMode == MODE_SHOW_SINGLE)
		{
			printf("%s\n", getSwitchName());
		}
	}
}

void switchEdgeTestOpen()
{
	inSwitchEdgeTestMode = MODE_SHOW;
}

void switchEdgeTestOpenSingle()
{
	inSwitchEdgeTestMode = MODE_SHOW_SINGLE;
	showColumn = 0;
	showRow = 0;
}

void switchEdgeTestUp()
{
	showColumn--;
	if (showColumn == 255)
	{
		showColumn = 7;
		showRow--;
	}

	if (showRow == 255)
	{
		showRow = 15;
	}
}

void switchEdgeTestDown()
{
	showColumn++;
	if (showColumn > 7)
	{
		showColumn = 0;
		showRow++;
	}

	if (showRow > 15)
	{
		showRow = 0;
	}
}

void switchEdgeTestEnter()
{
	showRow++;
	if (showRow > 15)
	{
		showRow = 0;
	}
}

void switchEdgeTestExit()
{
	inSwitchEdgeTestMode = MODE_OFF;
}