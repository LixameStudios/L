#include <raylib.h>
#include "interface.h"

int main(void)
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);

    InitWindow(900, 600, "Lix-L");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        DrawInterface();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
