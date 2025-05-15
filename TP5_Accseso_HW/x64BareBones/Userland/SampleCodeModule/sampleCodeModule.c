/* sampleCodeModule.c */

//este es el screen
char * v = (char*)0xB8000;

static int var1 = 0;
static int var2 = 0;

void printValues(int row, int col, char* str, char color) {
	// Print the string to the screen
	v += (row * 80 + col) * 2; // Calculate the position in the screen buffer
	int j = 0;
	for (int i = 0; str[i] != 0; i++) {
		*(v + j) = str[i];
		*(v + j + 1) = color;
		j += 2;
	}

}


int main() {
	//All the following code may be removed 
	char*str = "Arquitectura de Computadoras";
	char color = 0x72;

	printValues(0, 0, str, color);

	// *v = 'A';
	// *(v+1) = 0x72;
	// *v2 = 'B';
	// *(v2+1) = 0x72;

	//Test if BSS is properly set up
	if (var1 == 0 && var2 == 0)
		return 0xDEADC0DE;

	return 0xDEADBEEF;
}