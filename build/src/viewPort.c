        
#include "shapeFunctions.c"

void initializeSettings(){
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - 3d camera free");

    // Define the camera to look into our 3d world
    
    camera.position = (Vector3){ 10.0f, 10.0f, 10.0f }; // Camera position
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };      // Camera looking at point
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
    camera.fovy = 45.0f;                                // Camera field-of-view Y
    camera.projection = CAMERA_PERSPECTIVE;             // Camera projection type

    

    DisableCursor();                    // Limit cursor to relative movement inside the window

    SetTargetFPS(60); 
}
void updateFunction(Vector3  spherePos){


    UpdateCamera(&camera, CAMERA_THIRD_PERSON);
    if (IsKeyPressed(KEY_Z)) camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(BLACK);

        
        BeginMode3D(camera);
            DrawEllipseLines3D(spherePos.x, spherePos.y,0, 10.0f, 5.0f, WHITE);
            DrawSphere(spherePos, 2.0f, GRAY);

            DrawCircle3D(spherePos, 4, (Vector3){1,0,0}, 45.0f, WHITE);
            DrawSphereWires(spherePos, 2.0f, 2.0f, 2.0f, MAROON);

            DrawGrid(10, 1.0f);

        EndMode3D();


    EndDrawing();
}