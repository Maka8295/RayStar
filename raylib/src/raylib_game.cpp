/*******************************************************************************************
*
*   raylib game template
*
*   <Game title>
*   <Game description>
*
*   This game has been created using raylib (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2021 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include <iostream>
#include <queue>
#include <vector>
#include <memory>

static const int Width = 800;
static const int Height = 800;


class Square {
  public:
    int row;
    int col;
    int x;
    int y;
    //colour?
    //neighbors
    int width;
    int total_rows;



}

// FUNCTIONS

int h(int p1, int p2)
{
  
}


static void UpdateDrawFrame(void);          // Update and draw one frame

int main(void)
{
    InitWindow(Width, Height, "A* Path Finding Algorithm");


  SetTargetFPS(60);       // Set our game to run at 60 frames-per-second
  //--------------------------------------------------------------------------------------

  // Main game loop
  while (!WindowShouldClose())    // Detect window close button or ESC key
  {
      UpdateDrawFrame();
  }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    // Unload current screen data before closing

    CloseWindow();          // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

static void UpdateDrawFrame(void)
{
  return;
}
