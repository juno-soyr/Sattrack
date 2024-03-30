#include <raylib.h>
#include <math.h>

static Camera3D camera = { 0 };
static Vector3 spherePos = { 0.0f, 0.0f, 0.0f };


void DrawEllipseLines3D(int centerX, int centerY, int centerZ, float radiusH, float radiusV, Color color);
void initializeSettings();
void updateFunction(Vector3 spherePos);
