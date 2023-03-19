// width - 10 pixels
// height - 15 pixels

#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;
int max_x;
int max_y;

int x = 0, y = 0;

void inc() {
    x += 10;
    if(x == 110) {
        x = 0;
        y += 10;
    }
}

#define CYAN COLOR(96,150,230)

void make(int COL) {
    setcolor(COL);
    rectangle(x, y, x + 9, y + 9);
    setfillstyle(SOLID_FILL, COL);
    floodfill(x + 1, y + 1, COL);
    inc();
}



int main() {
    initwindow(200, 200);
    floodfill(1, 1, WHITE);
    
    for(int i = 0; i < 11; ++i) inc();

    inc();
    inc();
    inc();
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    inc();
    inc();
    
    inc();
    inc();
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(DARKGRAY);
    make(DARKGRAY);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    inc();
    
    inc();
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(DARKGRAY);
    make(WHITE);
    make(WHITE);
    make(DARKGRAY);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);

    inc();
    make(BLACK);
    make(BLACK);
    make(DARKGRAY);
    inc();
    make(BLACK);
    make(BLACK);
    inc();
    make(DARKGRAY);
    make(BLACK);
    make(BLACK);


    inc();
    make(BLACK);
    make(BLACK);
    make(DARKGRAY);
    inc();
    make(BLACK);
    make(BLACK);
    inc();
    make(DARKGRAY);
    make(BLACK);
    make(BLACK);

    inc();
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(DARKGRAY);
    inc(); 
    inc();
    make(DARKGRAY);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);

    inc();
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(DARKGRAY);
    make(DARKGRAY);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);

    inc();
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);    
    make(YELLOW);
    make(YELLOW);

    inc();
    make(CYAN);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(CYAN);

    inc();
    make(YELLOW);
    make(CYAN);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(YELLOW);
    make(CYAN);
    make(YELLOW);

    inc();
    make(YELLOW);
    make(YELLOW);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(YELLOW);
    make(YELLOW);

    inc();
    make(YELLOW);
    make(YELLOW);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(YELLOW);
    make(YELLOW);

    inc();
    make(YELLOW);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(YELLOW);

    inc();
    inc();
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    make(CYAN);
    inc();

    inc();
    inc();
    inc();
    make(BLACK);
    make(BLACK);
    make(BLACK);
    make(BLACK);
    make(BLACK);
    make(BLACK);
    inc();
    inc();
    getch();
}