
#include <naiveConsole.h>
#define ZERO_EXCEPTION_ID 0


static void zero_division();

void exceptionDispatcher(int exception) {
	if (exception == ZERO_EXCEPTION_ID)
		zero_division();
}

static void zero_division() {
	ncPrint("[Zero Division Exception]");
	ncNewline();
	ncPrint("  Division by zero is not allowed.");
	ncNewline();
	ncPrint("  Please check your code and try again.");
	ncNewline();
	ncPrint("[Finished]");
}