
#include "TXLib.h"

void DrawGraficCircle ();

int main()
    {
    txCreateWindow (800, 600);
    DrawGraficCircle ();


    return 0;
    }

void DrawGraficCircle ()
    {
    double x0;
    double y0;
    int xx;
    int yy;

    COLORREF color;
    txSetColor (TX_PINK);
    txSetFillColor (TX_PINK);
    for (double y = -50; y<= +50; y+=0.4)
    for (double x = -50; x<= +50; x+=0.4)
        {
        if ((y<= 40) && (2 * fabs(x)< y))
            txSetPixel (400 + 5 * x, 400 + 0- 5 * y, TX_ORANGE); //  �����

        if ((y<= 10) && (2 * fabs(x)< y))
            txSetPixel (400 + 5 * x, 401 - 5 * y, TX_DARKGRAY);  //--- �����

        if ((y <= 50 - 2*fabs(x - 15)) && (y >40))
            txSetPixel (402 + 5 * x, 400 - 5 * y, TX_YELLOW); //---����� ���

        if ((y <= 50 - 2*fabs(x + 15)) && (y >40))
            txSetPixel (399 + 5 * x, 400 - 5 * y, TX_YELLOW); //--- ������ ���

        if ((((y - 30)*(y - 30) + (x - 7) *(x - 7))<=10) && (y>29))
            txSetPixel (400 + 5 * x, 401 - 5 * y, TX_LIGHTCYAN);  // ---����
        /*if ((y < 40)&&(y > 20)&&(x <- 15) &&(x>- 10))
            txSetPixel (400 + 5 * x, 401 - 5 * y, TX_WHITE);  // ---������  */

        if (((y - 30)*(y - 30) + (x + 7) *(x + 7))<=10)
            txSetPixel (400 + 5 * x, 401 - 5 * y, TX_LIGHTCYAN); // ---����

        }
    }
