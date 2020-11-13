#pragma once
#define SCREEN_HEIGHT 25
#define SCREEN_WIDTH 80




class Screen {
public:
    char screen[SCREEN_HEIGHT][SCREEN_WIDTH];

public:

    void Render();
    void Background();//백그라운드 바꾸기
    void DrawBoard(int LT_x, int LT_y, int RB_x, int RB_y);//게임 플레이 화면
    void NextBlock(int LT_x, int LT_y, int RB_x, int RB_y);//다음 블록
    void Drawscore(int LT_x, int LT_y, int RB_x, int RB_y, int score);//스코어 나오기
   
};