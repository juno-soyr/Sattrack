#include <raylib.h>
#include <math.h>

static Camera3D camera = { 0 };
static Vector3 spherePos = { 0.0f, 0.0f, 0.0f };

void initializeSettings();
void updateFunction(Vector3 spherePos);
