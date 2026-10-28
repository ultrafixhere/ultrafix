#include <iostream>
#include <string>

#if __has_include(<raylib.h>)
#include <raylib.h>
#define HAS_RAYLIB 1
#else
#define HAS_RAYLIB 0
#endif

using namespace std;

int main() {
    cout << "STARTING PING PONG GAME" << endl;

#if HAS_RAYLIB
    constexpr int screen_width = 600;
    constexpr int screen_height = 400;

    InitWindow(screen_width, screen_height, "Ping Pong Game");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Ping Pong", 220, 160, 30, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
#else
    cout << "Raylib is not available in this environment, so the game is running in console mode." << endl;

    string input;
    while (true) {
        cout << "Press 'q' to quit or any other key to continue: ";
        cin >> input;

        if (input == "q" || input == "Q") {
            break;
        }

        cout << "Game loop is running..." << endl;
    }
#endif

    return 0;
}