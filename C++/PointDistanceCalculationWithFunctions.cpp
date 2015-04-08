#include <math.h>
// You can save point method to another file and include it to the Project as #include "Point.h"
//or you can define it here
struct point 
{
	float x;
	float y;
};
float distance(point a,point b)
{
	float dist_X = a.x - b.x;
	float dist_Y = a.y - b.y;
	return sqrt( dist_X * dist_X + dist_Y * dist_Y );  
}
