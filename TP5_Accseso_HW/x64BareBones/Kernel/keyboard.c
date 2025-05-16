#include "keyboard.h"
#include <naiveConsole.h>
// Mapeo de scan-codes (hex) a caracteres ASCII (sin Shift)
static const char keymap[128] = {
    0,    27,  '1',  '2',  '3',  '4',  '5',  '6',  '7',  '8',  '9',  '0',  '-',  '=', '\b', // 0x00 - 0x0E (Backspace)
 '\t',  'q',  'w',  'e',  'r',  't',  'y',  'u',  'i',  'o',  'p',  '[',  ']', '\n', // 0x0F - 0x1C (Enter)
    0,   'a',  's',  'd',  'f',  'g',  'h',  'j',  'k',  'l',  ';', '\'',  '`',    0,   // 0x1D - 0x2A (Left Shift)
 '\\',  'z',  'x',  'c',  'v',  'b',  'n',  'm',  ',',  '.',  '/',    0,    '*',   // 0x2B - 0x37 (Keypad *)
    0,   ' ',    0,                                                                  // 0x38 (Left Alt), 0x39 (Space), 0x3A (Caps Lock)
};


char getKey(){
    char c = 0;
    int scancode = kbFlag(); // Read the scan code from the keyboard controller
    if (scancode < 128) {
        c = keymap[scancode];
    }
    return c;
}

char mapKeyBoard(){// Print the keyboard message
    char c = getKey(); // Get the character from the keyboard
    ncPrintChar(c); // Print the character to the console
    return c;
}