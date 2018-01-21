#include <graphics.h>
#include <dos.h>


int main()
{
    int i, j = 0,
    gd = DETECT, gm;
    //initgraph(&gd,&gm,"C:\\TC\\BGI");
    initwindow(1300,700);
    char ch;

    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    setcolor(3);
    outtextxy(200,120,"Press any key to bring car");
    getch();

    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
    setcolor(7);
    outtextxy(55,590,"Fahmid");
    setcolor(15);
    rectangle(50,575,150,640);
    rectangle(150,600,200,640);
    circle(75,670,30);
    circle(75,670,20);
    circle(175,670,30);
    circle(175,670,20);

    settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
    setcolor(13);
    outtextxy(200,120,"Press any key to start");
    getch();

    int p=0;

    for( i = 0 ; i <= 1300 ; i = i + 20 , j++ )
    {
        if((1000-i)>220)
         {
            settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
            setcolor(7);
            outtextxy(55,590,"Fahmid");
            setcolor(j);
            rectangle(50,575,150,640);
            rectangle(150,600,200,640);
            setcolor(8);
            circle(75,670,30);
            setcolor(15-j);
            circle(75,670,20);
            setcolor(8);
            circle(175,670,30);
            setcolor(15-j);
            circle(175,670,20);
         }

         else if((1000-i)==220)
        {
            settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
            setcolor(7);
            outtextxy(55,590,"Fahmid");
            setcolor(15);
            rectangle(50,575,150,640);
            rectangle(150,600,200,640);
            circle(75,670,30);
            circle(75,670,20);
            circle(175,670,30);
            circle(175,670,20);
            rectangle(220,600,420,700);
            settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
            setcolor(7);
            outtextxy(200,120,"Press any key to move the car");
            getch();
            p=1;
        }

         else if(p)
         {
             settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
             setcolor(7);
             outtextxy(55,490,"Fahmid");
             setcolor(j);
             rectangle(50,475,150,540);
             rectangle(150,500,200,540);
             setcolor(8);
             circle(75,570,30);
             setcolor(15-j);
             circle(75,570,20);
             setcolor(8);
             circle(175,570,30);
             setcolor(15-j);
             circle(175,570,20);
         }

        setcolor(15-j);
        rectangle(1000-i,600,1200-i,700);
        delay(100);

        if((1000-i)==0)
            i=0;

        if ( j == 15 )
           j = 2;

        cleardevice(); // clear screen
     }

    getch();
    closegraph();
    return 0;
}
