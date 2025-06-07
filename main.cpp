#include "raylib.h"

int main() {
    InitWindow(700, 570, "No Signal");
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawRectangle(0, 0, 100, 500, WHITE);
        DrawRectangle(100, 0, 100, 500, YELLOW);
        DrawRectangle(200, 0, 100, 500, SKYBLUE);
        DrawRectangle(300, 0, 100, 500, GREEN);
        DrawRectangle(400, 0, 100, 500, PURPLE);
        DrawRectangle(500, 0, 100, 500, RED);
        DrawRectangle(600, 0, 100, 500, DARKBLUE);
        // 2
        DrawRectangle(0, 500, 100, 20, DARKBLUE);
        DrawRectangle(100, 500, 100, 20, BLACK);
        DrawRectangle(200, 500, 100, 20, PURPLE);
        DrawRectangle(300, 500, 100, 20, BLACK);
        DrawRectangle(400, 500, 100, 20, SKYBLUE);
        DrawRectangle(500, 500, 100, 20, BLACK);
        DrawRectangle(600, 500, 100, 20, WHITE);
        // 3
        DrawRectangle(0, 520, 125, 50, BLUE);
        DrawRectangle(125, 520, 125, 50, WHITE);
        DrawRectangle(250, 520, 125, 50, DARKBLUE);
        DrawRectangle(375, 520, 125, 50, DARKGRAY);
        DrawRectangle(375, 520, 70, 50, BLACK);
        DrawRectangle(445, 520, 70, 50, GRAY);
        DrawRectangle(515, 520, 70, 50, LIGHTGRAY);
        DrawRectangle(585, 520, 125, 50, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}