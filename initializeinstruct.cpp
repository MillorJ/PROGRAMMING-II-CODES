#include <stdio.h>

struct abc{
	int x;
	int y;
	int z;
};

int main(){
	struct abc a = {.x = 15, .y = 20, .z = 5};
	printf("%d %d %d", a.x, a.y, a.z);
	return 0;
	
}
