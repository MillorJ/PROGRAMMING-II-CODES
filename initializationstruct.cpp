#include <stdio.h>

struct abc{
	int x;
	int y;
	int z;
};

int main(){
	struct abc a = {.y = 20, .x = 15, .z = 10};
	printf("%d %d %d", a.y, a.x, a.z);
	return 0;
}
