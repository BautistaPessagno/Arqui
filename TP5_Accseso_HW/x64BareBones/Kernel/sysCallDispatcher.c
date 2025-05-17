#include <time.h>
#include <stdint.h>
#include <naiveConsole.h>

#define STDOUT 1
#define STDERR 2

#define RED 0x04

static void SysCallWrite(char * string, char background, char foreground);
static void SysCallERR(char * string, char background, char foreground);



void sysCallDispatcher(uint64_t call, uint64_t arg1, uint64_t arg2, uint64_t arg3) {
	switch (call) {
		case STDOUT:
			SysCallWrite((char *)arg1, (char)arg2, (char)arg3);
			break;
		case STDERR:
            SysCallERR((char *)arg1, (char)arg2, RED);
			break;
	}
	return;
}
static void SysCallWrite(char * string, char background, char foreground) {
    ncPrintStyledString(string, background, foreground);
    return;
}

static void SysCallERR(char * string, char background, char foreground) {
    ncPrintStyledString(string, background, foreground);
    return;
}
