#include "TXLib.h"

void drawSky(COLORREF Color)
{
    //небо
    txSetColor(Color);
    txSetFillColor(Color);
    txRectangle(0,0,1200,800);
}

void drawLand()
{
    //земля
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle(0,500,1200,800);
}

void drawSun(int x,int y)
{
    //солнце x=90,y=80
txSetColor(TX_YELLOW);
txSetFillColor(TX_YELLOW);
txCircle(x,y,50);
}

void drawHouse()
{
    //дом
txSetColor(TX_BLACK);
txSetFillColor(TX_BROWN);
txRectangle(750,330,1190,560);
//дверь
txSetColor(TX_BLACK);
txSetFillColor(TX_GREY);
txRectangle(1070,400,1130,560);
txSetColor(TX_BLACK);
txLine(1110,500,1125,500);
//окно
txSetColor(TX_BLACK);
txSetFillColor(TX_CYAN);
txRectangle(810,380,960,460);
txLine(810,420,960,420);
txLine(885,380,885,460);
//крыша
txSetColor(TX_BLACK);
txSetFillColor(TX_BROWN);
POINT start[3]{{750,330}, {1190,330}, {970,200}};
txPolygon (start, 3);
}

void drawMan(int x,int y,float razm)
{
   //человек X=570   y=365
    txSetFillColor(TX_BLACK);
    txSetColor(TX_BLACK, 5);
    txCircle(x,y,15*razm);
    txLine  (x+30*razm,y+195*razm,x,y+85*razm);
    txLine  (x-30*razm,y+195*razm,x,y+85*razm);
    txLine  (x,y+85*razm,x,y+15*razm);
    txLine  (x+40*razm,y+75*razm,x,y+15*razm);
    txLine  (x-40*razm,y+75*razm,x,y+15*razm);
}

void drawCar(int x,int y)
{

    //x=160 y=480
  //машина
txSetColor(TX_BLACK);
txSetFillColor(TX_GREY);
POINT car[7]{{x,y+50}, {x,y}, {x+50,y-30}, {x+80,y-90}, {x+270,y-90}, {x+310,y-30}, {x+310,y+50}};
txPolygon (car, 7);
//окно машины
txSetColor(TX_BLACK);
txSetFillColor(TX_CYAN);
POINT window[4]{{x+410-160,y+400-480}, {x+440-160,y+450-480}, {x+230-160,y+450-480}, {x+250-160,y+400-480}};
txPolygon (window, 4);
//двери
txLine(x+330-160,y+400-480,x+330-160,y+530-480);
txLine(x+260-160,y+470-480,x+280-160,y+490-480);
txLine(x+350-160,y+470-480,x+370-160,y+490-480);
//калёса
txSetColor(TX_BLACK);
txSetFillColor(TX_BLACK);
txCircle(x+200-160,y+530-480,30);
txCircle(x+420-160,y+530-480,30);
txSetFillColor(TX_GREY);
txCircle(x+200-160,y+530-480,20);
txCircle(x+420-160,y+530-480,20);
//выхлоп
txLine(x+470-160,y+520-480,x+475-160,y+520-480);
txLine(x+470-160,y+521-480,x+475-160,y+521-480);
txLine(x+470-160,y+522-480,x+475-160,y+522-480);
txLine(x+470-160,y+523-480,x+475-160,y+523-480);
//фары
txSetColor(TX_BLACK);
txSetFillColor(TX_YELLOW);
POINT fari[3]{{x+160-160,y+500-480}, {x+170-160,y+470-480}, {x+160-160,y+480-480}};
txPolygon (fari, 3);
}

void drawWood (int x, int y)
{
    //x,y = 550,590
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BROWN);
    txRectangle(x+570-550,y,x,y+310-590);
    txSetColor(TX_GREEN,5);
    txSetFillColor(TX_GREEN);
    txEllipse(x+620-550,y+490-590,x+500-550,y+220-590);


}

void drawWall()
{
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BROWN);
    txRectangle (0,0,1200,600);
}

void drawFloor()
{
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BROWN);
    txRectangle (0,600,1200,800);
}

void drawDoor()
{
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_ORANGE);
    txRectangle (900,220,1000,600);
    txLine(990,450,970,450);
}

void drawClock()
{
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_WHITE);
    txCircle(620,120,45);
    txLine(590,120,620,120);
    txLine(620,120,620,100);
}

void drawWindow()
{
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_CYAN);
    txRectangle (470,385,200,200);
    txLine(330,200,330,385);
    txLine(470,290,200,290);
}

void drawChair()
{
    txSetColor(TX_BLACK,5);
    txLine(350,655,350,420);
    txLine(370,640,370,540);
    txLine(440,540,440,650);
    txLine(370,510,370,390);
    txLine(460,510,460,630);
    txSetFillColor(TX_ORANGE);
    POINT chair1[4]{{350,420}, {370,390}, {370,510}, {350,540}};
    txPolygon(chair1, 4);
    POINT chair2[4]{{350,540}, {440,540}, {460,510}, {370,510}};
    txPolygon(chair2, 4);
}

void drawTable()
{
    txSetFillColor(TX_ORANGE);
    txSetColor(TX_BLACK,5);
    txLine(470,660,470,500);
    txLine(530,500,530,600);
    txLine(670,660,670,500);
    txLine(720,600,720,440);
    POINT table1[8]{{470,470}, {470,500}, {670,500}, {720,440}, {720,410}, {670,470}, {470,470}, {530,470}};
    txPolygon(table1, 8);
    txLine(670,500,670,470);
    POINT table2[4]{{720,410}, {670,470}, {470,470}, {530,410}};
    txPolygon(table2, 4);
}

void drawSpoon(int x,int y)
{
   //x=535, y=450
   txSetColor(TX_GREY,5);
   txSetFillColor(TX_GREY);
   txLine(x-25,y,x-5,y);
   txCircle(x,y,5);
}

void drawPLate()
{
    txSetColor(TX_GREY,5);
    txSetFillColor(TX_GREY);
    txCircle(540,430,10);
}

void drawKey(int x,int y,float razm)
{
    //x=550,y=630
    txSetFillColor(TX_BROWN);
    txSetColor(TX_BLACK,3);
    txCircle(x,y,5*razm);
    txLine(x,y,x+30*razm,y);
    txLine(x+30*razm,y,x+30*razm,y+5*razm);
    txLine(x+25*razm,y,x+25*razm,y+3*razm);
}

    //void drawtext (int x,int y)
void drawLand2()
{
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    txRectangle(0,500,1200,800);
}

void drawRoad()
{
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_GREY);
    txRectangle(0,580,1200,680);
    txSetColor(TX_WHITE,5);
    txSetFillColor(TX_WHITE);
    txRectangle(50,620,300,625);
    txRectangle(350,620,550,625);
    txRectangle(600,620,800,625);
    txRectangle(850,620,1100,625);

}

void drawStart(int x, int y)
{
    txSetColor(TX_WHITE);
    txSetFillColor(TX_BLACK);
    txSelectFont("Calibri", 50);
    txDrawText(x-1200,y-800,x,y,"Потерянный ключ");
}
void drawEnd(int x, int y)
{
    txSetColor(TX_WHITE);
    txSetFillColor(TX_BLACK);
    txSelectFont("Calibri", 60);
    txDrawText(x-1200,y-800,x,y,"Конец");
}

void drawLand3()
{
    txSetColor(TX_GREEN);
    txSetFillColor(TX_GREEN);
    POINT land[4]{{460,800}, {660,500}, {1200,500}, {1200,800}};
    txPolygon(land, 4);
    txSetColor(TX_CYAN);
    txSetFillColor(TX_CYAN);
    POINT land2[4]{{460,800}, {660,500}, {0,500}, {0,800}};
    txPolygon(land2, 4);
}

void drawShip()
{
   txSetColor(TX_BLACK);
    txSetFillColor(TX_LIGHTGRAY);
    POINT ship[5]{{490,400}, {400,410}, {400,300}, {580,300}, {580,410}};
    txPolygon(ship, 5);
    txSetColor(TX_BLACK);
    txSetFillColor(TX_DARKGRAY);
    POINT shipShild1[4] = {{490,380}, {490,550}, {610,500}, {610,400}};
    txPolygon(shipShild1, 4);
    txSetFillColor(TX_LIGHTGRAY);
    POINT shipShild2[4] = {{490,380}, {490,550}, {380,500}, {380,400}};
    txPolygon(shipShild2, 4);
    txSetColor(TX_BLACK);
    txSetFillColor(TX_DARKGRAY);
    txRectangle(590,310,390,280);
    txSetColor(TX_BLACK);
    txSetFillColor(TX_CYAN);
    txCircle(440,340,15);
    txCircle(490,340,15);
    txCircle(540,340,15);
    txSetColor(TX_BLACK);
    txSetFillColor(TX_LIGHTGRAY);
    POINT shipSgr[4] = {{690,500}, {610,470}, {610,490}, {670,500}};
    txPolygon(shipSgr, 4);
}
void shipGround()
    {
    txSetColor(TX_BLUE);
    txSetFillColor(TX_BLUE);
    txRectangle(0,0,1200,130);
    txSetColor(TX_BLACK, 5);
    txSetFillColor(TX_GREY);
    txRectangle(0,130,1200,500);
    txRectangle(0,130,1200,500);
    txRectangle(150,500,380,800);
    txRectangle(380,500,600,800);
    txRectangle(600,500,810,800);
    txRectangle(800,500,1000,800);
    txRectangle(100,500,1200,800);
    txSetColor(TX_YELLOW);
    txSetFillColor(TX_YELLOW);
    txCircle(1200,0,20);
    }

int main()
{
txCreateWindow (1200, 800);

    int xSun = 90;
    int xMan = 570;
    int ySun = 80;
    int yMan = 365;
    int xCar = 160;
    int yCar = 480;
    int xSpoon=535;
    int ySpoon=450;
    int xKey=550;
    int yKey=630;
    float razmMan = 1;
    float razmKey = 1;
    int xStart=1200;
    int yStart=800;
    int yEnd=800;
    int xEnd=1200;

    while(yStart > 400)
    {
        txBegin();
        drawSky(TX_BLACK);
        drawStart (xStart,yStart);
        yStart-=5;
        txEnd();
        txSleep(10);
    }
    while(xMan < 1100)
    {
        txBegin();
        drawSky(TX_BLUE);
        drawLand();
        drawSun(xSun,ySun);
        for(int x=50; x<1200; x+=150)
        {
            drawWood (x,500);
        }
        drawHouse();
        drawMan(xMan,yMan,razmMan);
        drawCar(xCar,yCar);
        xMan+=5;
        txEnd();
        txSleep(10);
    }

    while(xMan > 500)
    {
    txBegin();
    drawWall();
    drawFloor();
    drawDoor();
    drawClock();
    drawWindow();
    drawTable();
    drawSpoon(xSpoon,ySpoon);
    drawChair();
    xMan-=10;
    drawPLate();
    drawKey(xKey,yKey,1);
    drawMan(xMan,yMan,1.5);
    txEnd();
    txSleep(10);
    }

    while(xMan < 501 , ySpoon < 660)
    {
    txBegin();
    drawWall();
    drawFloor();
    drawDoor();
    drawClock();
    drawWindow();
    drawTable();
    drawSpoon(xSpoon,ySpoon);
    drawChair();
    ySpoon+=7;
    drawPLate();
    drawKey(xKey,yKey,1);
    drawMan(xMan,yMan,1.5);
    txEnd();
    txSleep(10);
    }


    while(yMan < 500)
    {
    txBegin();
    drawWall();
    drawFloor();
    drawDoor();
    drawClock();
    drawWindow();
    drawTable();
    drawSpoon(xSpoon,ySpoon);
    drawChair();
    drawPLate();
    drawKey(xKey,yKey,1);
    drawMan(xMan,yMan,1.5);
    txEnd();
    yMan+=10;
    txSleep(10);
    }

    while(yKey > 620)
    {
    txBegin();
    drawWall();
    drawFloor();
    drawDoor();
    drawClock();
    drawWindow();
    drawTable();
    drawSpoon(xSpoon,ySpoon);
    drawChair();
    drawPLate();
    drawKey(xKey,yKey,1);
    yKey-=3;
    drawMan(xMan,yMan,1.5);
    txEnd();
    txSleep(10);
    }

    while(xMan < 1000)
    {

    txBegin();
    drawWall();
    drawFloor();
    drawDoor();
    drawClock();
    drawWindow();
    drawTable();
    drawSpoon(xSpoon,ySpoon);
    drawChair();
    drawPLate();
    drawKey(xKey,yKey,1);
    drawMan(xMan,yMan,1.5);
    txEnd();
    xMan+=5;
    yMan-=1;
    xKey+=5;
    yKey-=1;
    txSleep(10);
    }
    while(yKey > 480)
    {
        txBegin();
        drawSky(TX_BLUE);
        drawLand();
        drawSun(xSun,ySun);
        for(int x=50; x<1200; x+=150)
        {
            drawWood (x,500);
        }
        drawHouse();
        drawMan(xMan,yMan,razmMan);
        drawKey(xKey,yKey,0.5);
        drawCar(xCar,yCar);
        yKey=480;
        xKey=1030;
        txEnd();

    }

     while(xMan > 300)
    {
        txBegin();
        drawSky(TX_BLUE);
        drawLand();
        drawSun(xSun,ySun);
        for(int x=50; x<1200; x+=150)
        {
            drawWood (x,500);
        }
        drawHouse();
        drawCar(xCar,yCar);
        drawMan(xMan,yMan,razmMan);
        drawKey(xKey,yKey,0.5);
        xMan-=6;
        xKey-=6;
        txEnd();
        txSleep(10);

    }
     while(xCar > -400)
    {
        txBegin();
        drawSky(TX_BLUE);
        drawLand();
        drawSun(xSun,ySun);
        for(int x=50; x<1200; x+=150)
        {
            drawWood (x,500);
        }
        drawHouse();
        drawCar(xCar,yCar);
        xCar-=10;
        txEnd();
        txSleep(10);

    }

        txBegin();
        drawSky(TX_BLUE);
        drawLand2();
        drawRoad();
        drawSun(xSun,ySun);
        for(int x=50; x<1200; x+=200)
        {
            drawWood (x,500);
        }
        drawCar(xCar,yCar);
        xCar=1200;
        yCar=550;
        txEnd();
        txSleep(500);


    while(xCar > -300)
    {
        txBegin();
        drawSky(TX_BLUE);
        drawLand2();
        drawRoad();
        drawSun(xSun,ySun);
        for(int x=50; x<1200; x+=200)
        {
            drawWood (x,500);
        }
        drawCar(xCar,yCar);
        xCar-=10;
        txEnd();
        txSleep(2);

    }
    while(xMan > 200)
    {
    txBegin();
    drawSky(TX_BLUE);
    drawLand3();
    drawShip();
    xMan=1200;
    yMan=400;
    drawMan(xMan,yMan,0.5);
    xMan-=2;
    txEnd();
    txSleep(100);
    }

    while(yEnd < 2400)
    {
    txBegin();
    drawSky(TX_BLACK);
    drawEnd(xEnd, yEnd);
    yEnd+=5;
    txEnd();
    txSleep(10);
    }

txTextCursor (false);
return 0;
}

