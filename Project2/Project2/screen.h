#pragma once
#define SCREEN_HEIGHT 25
#define SCREEN_WIDTH 80




class Screen {
public:
    char screen[SCREEN_HEIGHT][SCREEN_WIDTH];

public:

    void Render();
    void Background();//��׶��� �ٲٱ�
    void DrawBoard(int LT_x, int LT_y, int RB_x, int RB_y);//���� �÷��� ȭ��
    void NextBlock(int LT_x, int LT_y, int RB_x, int RB_y);//���� ���
    void Drawscore(int LT_x, int LT_y, int RB_x, int RB_y, int score);//���ھ� ������
   
};