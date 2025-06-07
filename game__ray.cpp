#include "raylib.h"
#include <math.h>
using namespace std;
bool rotate;
int fps, fpsT;
int x,y;
int xX, yY;
int width = 25;
int height = 500;
int main() {
	InitWindow(1280, 720, "Game");
	SetTargetFPS(60);
	Rectangle player = { 320,220, 50,50 };
	Camera2D camera = { 0 };
	Texture2D playerTexture = LoadTexture("frog.jpg");
	Texture2D background = LoadTexture("plattypus.png");
	Rectangle SHAPE = { x,y,width,height };
	Vector2 pivot = { float(width/2),float(height/2)};
	camera.target = { player.x + 250, player.y + 250 };
	camera.offset = { 1280 / 2.0f,720 / 2 };
	camera.rotation = 0.0f;
	camera.zoom = 1.0f;
	while (!WindowShouldClose()) {
		if (IsKeyDown(KEY_W)) player.y -= 5;
		if (IsKeyDown(KEY_S)) player.y += 5;
		if (IsKeyDown(KEY_A)) player.x -= 5;
		if (IsKeyDown(KEY_D)) player.x += 5;
		if (IsKeyPressed(KEY_SPACE)) rotate = !rotate;
		camera.target = { player.x + 10, player.y + 10 };
		camera.zoom = expf(logf(camera.zoom) + ((float)GetMouseWheelMove() * 0.1f));
		BeginDrawing();
		ClearBackground(BLACK);
		BeginMode2D(camera);
		DrawTexture(background, 0, 0, WHITE);
		DrawRectangleRec(player, RAYWHITE);
		SHAPE = { float(x),float(y),float(width),float(height)};
		if (rotate) { 
			DrawRectanglePro(SHAPE, pivot, 0.0f, BLUE);
		} else { 
			DrawRectanglePro(SHAPE, pivot, 90.0f, BLUE);
		}
		fps++;
		fpsT++;
		if (fps == 60) {
			fps = 0;
			y += 50;
			if (IsKeyDown(KEY_DOWN)) y += 25;
		}
		if (fpsT == 15) {
			if (IsKeyDown(KEY_LEFT)) x -= 50;
			if (IsKeyDown(KEY_RIGHT)) x += 50;
			fpsT = 0;
		}
		EndMode2D();
		EndDrawing();
	}
	CloseWindow();
}