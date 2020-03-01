
#include "TXLib.h"

void DrawGraficParabola ();
void DrawGraficCircle (double x0, double y0, COLORREF color, int xx, int yy);
void DrawGraficSQUARE ();

int main()
    {
    txCreateWindow (800, 600);
   // txSetColor (TX_LIGHTGRAY, 2);

   // DrawGraficParabola ();
    DrawGraficCircle (-1,  1, TX_RED, 0, 0);
    DrawGraficCircle (+1, +1, TX_GREEN, 1, 0);
    DrawGraficCircle ( 0, -1, TX_BLUE, 0, 1);
    //DrawGraficSQUARE ();
    return 0;
    }

void DrawGraficParabola ()
    {
    txSetColor (TX_LIGHTRED);
    txSetFillColor (TX_LIGHTRED);
    for (double y = -10; y<= +10; y+=0.04)
    for (double x = -10; x<= +10; x+=0.04)
        {
        if (y>x*x)
            txSetPixel (400 + 50 * x, 300 - 50 * y, TX_LIGHTRED);

        }
    }


void DrawGraficCircle (double x0, double y0, COLORREF color, int xx, int yy)
    {
    txSetColor (TX_PINK);
    txSetFillColor (TX_PINK);
    for (double y = -10; y<= +10; y+=0.04)
    for (double x = -10; x<= +10; x+=0.04)
        {
        if ((x+x0)*(x+x0) + (y+y0)*(y+y0)<= 5)
            txSetPixel (401 +xx + 50 * x, 300 + yy- 50 * y, color);

        }
    }

void DrawGraficSQUARE ()
    {
    txSetColor (TX_PINK);
    txSetFillColor (TX_PINK);
    for (double y = -10; y<= +10; y+=0.04)
    for (double x = -10; x<= +10; x+=0.04)
        {
        if (fabs(x) + fabs(y)<= 2)
            txSetPixel (400 + 50 * x, 301 - 50 * y, TX_LIGHTBLUE);

        }
    }
