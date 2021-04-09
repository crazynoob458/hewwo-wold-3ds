/*---------------------------------------------------------------------------------

	Basic template code for starting a DS app

---------------------------------------------------------------------------------*/
#include <3ds.h>
#include <stdio.h>

int main(int argc, char **argv)
{

	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);
	iprintf("hewwo diots who exists");
	while (1) {
		gspWaitForVBlank();
	}
}