/* sampleCodeModule.c */

//este es el screen
char * v = (char*)0xB8000;

static int var1 = 0;
static int var2 = 0;


int main() {
	// *v = 'A';
	// *(v+1) = 0x72;
	// *v2 = 'B';
	// *(v2+1) = 0x72;

	//Test if BSS is properly set up
	if (var1 == 0 && var2 == 0)
		return 0xDEADC0DE;

	return 0xDEADBEEF;
}