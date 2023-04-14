#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int maxWidth = 10, maxHeight = 15; // in Pixels
const int pxSize = 30;
const int B = COLOR(96, 150, 230), Y = YELLOW, G = DARKGRAY, BL = BLACK, W = WHITE;
// Leave Top & Left Margin = 1 px
int x = pxSize, y = pxSize;

void nextPixel(int len = 1) {
    x += len * pxSize;
    // maxWidth = margin + maxWidth
    if(x == (maxWidth + 1) * pxSize) x = pxSize, y += pxSize;
}

void drawPx(int COL, int len = 1) {
    setcolor(COL);
    rectangle(x, y, x + len * pxSize - 1, y + pxSize - 1);
    setfillstyle(SOLID_FILL, COL);
    floodfill(x + 1, y + 1, COL);
    nextPixel(len);
}

int main() {
    // BG Settings
    // +2 for margins
    initwindow(pxSize * (maxWidth + 2), pxSize * (maxHeight + 2));
    setfillstyle(SOLID_FILL, LIGHTRED);
    floodfill(1, 1, WHITE);

    // image = {line1, line2, ...}, line = {{Color1, width1}, ...}
    // if value == -1, then call nextPixel()
    vector<vector<pair<int, int>>> image = {
        {{-1, 2}, {Y, 6}, {-1, 2}},
        {{-1, 1}, {Y, 3}, {G, 2}, {Y, 3}, {-1, 1}},
        {{Y, 3}, {G, 1}, {W, 2}, {G, 1}, {Y, 3}},
        {{BL, 2}, {G, 1}, {W, 1}, {BL, 2}, {W, 1}, {G, 1}, {BL, 2}},
        {{BL, 2}, {G, 1}, {W, 1}, {BL, 2}, {W, 1}, {G, 1}, {BL, 2}},
        {{Y, 3}, {G, 1}, {W, 2}, {G, 1}, {Y, 3}},
        {{Y, 4}, {G, 2}, {Y, 4}},
        {{Y, 10}},
        {{B, 1}, {Y, 8}, {B, 1}},
        {{Y, 1}, {B, 1}, {Y, 6}, {B, 1}, {Y, 1}},
        {{Y, 2}, {B, 6}, {Y, 2}},
        {{Y, 2}, {B, 6}, {Y, 2}},
        {{Y, 1}, {B, 8}, {Y, 1}},
        {{-1, 1}, {B, 8}, {-1, 1}},
        {{-1, 2}, {BL, 6}, {-1, 2}}
    };

    // Drawing the defined line
    for(auto &line: image) {
        for(auto &element: line) {
            if(element.first == -1) {
                nextPixel(element.second);
            } else {
                drawPx(element.first, element.second);
            }
        }
    }

    // So image doesnt disappear without character input
    getch();
}