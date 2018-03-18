#ifndef __TEST3_H
#define __TEST3_H

#include "keyboard.h"

/** @defgroup test3 test3
 * @{
 *
 * Functions for testing the kbd code
 */

/**
 * @brief To test reading of scancode via KBD interrupts
 *
 * Displays the scancodes received from the keyboard
 * Exits upon release of the ESC key
 *
 * @param asm Which IH to use: if 0, in C, otherwise in assembly
 *
 * @return Return 0 upon success and non-zero otherwise
 */
int kbd_test_scan(unsigned short ass);

/**
 * @brief To test reading of scancodes via polling
 *
 * Displays the scancodes received from the keyboard
 * Exits upon release of the ESC key
 *
 * @return Return 0 upon success and non-zero otherwise
 */
int kbd_test_poll();

/**
 * @brief To test handling of more than one interrupt
 *
 *  Similar to kbd_test_scan() except that it
 *  should terminate also if no scancodes are received for n seconds
 *
 * @param n Number of seconds without scancodes before exiting
 *
 * @return Return 0 upon success and non-zero otherwise
 */
int kbd_test_timed_scan(unsigned short n);

/**
 * @brief Prints scancodes read from keyboard
 *
 * @param scancode new scancode
 * @param doublebyte if previous scancode was a double byte doublebyte = 1, otherwise doublebyte = 0
 *
 * @return Return 0 upon sucess and non-zero otherwise
 */

void printScancode(unsigned long *scancode, int *doublebyte);

#endif /* __TEST3_H */
