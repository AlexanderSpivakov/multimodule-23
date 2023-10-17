#include <iostream>
#include <windows.h>
using namespace std;

class Desk
{
private:
	HWND m_ConsoleWindow;
	HDC m_hDC;
		int m_width;
		int m_height;
		int m_leftX;
		int m_leftY;
		int m_cellSize;
public:
	Desk() :
		m_ConsoleWindow(GetConsoleWindow()),
		m_hDC(GetDC(m_ConsoleWindow)),
		m_width(8),
		m_height(8),
		m_leftX(15),
		m_leftY(15),
		m_cellSize(30)
	{
		}

	void showDesk()
	{
		for (int i = 0; i < m_height; i++)
		{
			for (int q = 0; q < m_width; q++)
			{
				if ((q + i) % 2 == 0)
					SelectObject(m_hDC, GetStockObject(WHITE_BRUSH)); // »спользуем WHITE_BRUSH дл€ белых €чеек
				else
					SelectObject(m_hDC, GetStockObject(BLACK_BRUSH)); // »спользуем BLACK_BRUSH дл€ черных €чеек

				Rectangle(m_hDC, m_leftX + q * m_cellSize, m_leftY + i * m_cellSize, m_leftX + (q + 1) * m_cellSize, m_leftY + (i + 1) * m_cellSize);
			}
		}

	}
};
int main()
{
	Desk hello;
	hello.showDesk();
	return 0;

}