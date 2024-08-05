#include "../include/utilities.h"
#include "../include/menu.h"

int main(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	return MainMenu();
}
