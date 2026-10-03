#include "interface.h"

static void DrawMenuButton(const char *text, int x, int y, int width)
{
    int mouseX = GetMouseX();
    int mouseY = GetMouseY();

    Rectangle button = {
        (float)x,
        (float)y,
        (float)width,
        36.0f
    };

    bool hovered = CheckCollisionPointRec(
        (Vector2){ (float)mouseX, (float)mouseY },
                                          button
    );

    if (hovered)
    {
        DrawRectangleRec(button, LIGHTGRAY);
        DrawRectangleLinesEx(button, 1.0f, DARKGRAY);
    }

    DrawText(
        text,
        x + 10,
        y + 9,
        18,
        BLACK
    );
}

void DrawInterface(void)
{
    int screenWidth = GetScreenWidth();
    int screenHeight = GetScreenHeight();

    int topBarHeight = 50;
    int bottomPanelHeight = 150;
    int explorerWidth = 230;

    ClearBackground(RAYWHITE);

    /* Barra superior */
    DrawRectangle(
        0,
        0,
        screenWidth,
        topBarHeight,
        LIGHTGRAY
    );

    /* Panel del explorador */
    DrawRectangle(
        screenWidth - explorerWidth,
        topBarHeight,
        explorerWidth,
        screenHeight - topBarHeight - bottomPanelHeight,
        GRAY
    );

    /* Panel de consola */
    DrawRectangle(
        0,
        screenHeight - bottomPanelHeight,
        screenWidth,
        bottomPanelHeight,
        LIGHTGRAY
    );

    /* Separador del explorador */
    DrawRectangle(
        screenWidth - explorerWidth - 1,
        topBarHeight,
        1,
        screenHeight - topBarHeight - bottomPanelHeight,
        DARKGRAY
    );

    /* Separador de consola */
    DrawRectangle(
        0,
        screenHeight - bottomPanelHeight - 1,
        screenWidth,
        1,
        DARKGRAY
    );

    /* Nombre de Lix-L */
    DrawText(
        "Lix-L",
        15,
        16,
        20,
        BLACK
    );

    /* Menús */
    DrawMenuButton("Archivo", 80, 7, 80);
    DrawMenuButton("Editar", 160, 7, 75);
    DrawMenuButton("Ver", 235, 7, 55);
    DrawMenuButton("Ayuda", 290, 7, 70);

    /* Título del explorador */
    DrawText(
        "Explorador",
        screenWidth - explorerWidth + 15,
        topBarHeight + 15,
        18,
        BLACK
    );

    /* Título de la consola */
    DrawText(
        "Consola",
        15,
        screenHeight - bottomPanelHeight + 15,
        18,
        BLACK
    );
}
