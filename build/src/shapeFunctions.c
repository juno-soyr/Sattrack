#include "globals.h"

/*void DrawEllipse3D(){

}*/

void DrawEllipseLines3D(int centerX, int centerY, int centerZ, float radiusH, float radiusV, Color color){
    
    for (float i = 0; i < 360; i+=0.001)
    {
        //DrawPoint3D((Vector3){centerX + sinf(DEG2RAD*i)*radiusH, centerY + cosf(DEG2RAD*i)*radiusV, centerZ}, color);
        //DrawPoint3D((Vector3){centerX + sinf(DEG2RAD*(i + 10))*radiusH, centerY + cosf(DEG2RAD*(i + 10))*radiusV, centerZ}, color);
    }
}
