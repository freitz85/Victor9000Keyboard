Victor 9000 Keyboard Emulation
===

This project is intended to emulate the keyboard of a Victor 9000 / Sirius 1 computer with the help of an Arduino Nano and a generic PS/2 keyboard. The keypresses are translated to the most appropriate keycodes of the original keyboard. The serial output of the Arduino outputs the keycodes received and what they are translated to for debugging purposes.

Keymap
---

Alpha keys, the numpad and F1-F7 are mapped as usual. Special keys are mapped as follows:

| Victor | PS/2 |
|--------|------|
| ALT | Left/Right ALT |
| CONT | Left/Right Ctrl |
| ESC | ESC |
| RPT    |  F9 |
| UNDL On/Off  | F10 |
| RVS On/Off | F11 |
| INT On/Off | F12 |
| CLR | HOME |
| DEL CHAR | DEL |
| INS Mode/Line | INS |
| DEL EOL/Line | -- |
| SCROL | Scroll Lock |
| LTRL | -- |
| CALC | Num Lock |

Please note that the LEDs won't work, as there is no way for the CPU to talk back to the keyboard (much like an XT keyboard). The original keyboard only has one ALT key on the left and one CONT (control) key on the right of the spacebar. This is why, in contrast to an IBM PC, ALT combinations are used almost everytime a CTRL combination would be used normally. This means that well known combinations such as Ctrl-C and Ctrl-S become ALT-C and ALT-S on the Victor. This emulation copies this behavious, therefore you need to press ALT-C to abort a program and so on.

ALT + Arrow left/right is used to increase/decrease the screen contrast. ALT + Arrow up/down is used to increase/decrease screen brightness. ALT + SCROL and ALT + LTRL controls the volume of the speaker.

Arduino Pins
---

The Arduino scetch uses only five pins. Both Arduino and PS/2 keyboard may be powered by the 5V that is present on the Victor's keyboard connector.
| Function | Pin |
| -------- | --- |
| KBACK | 2 |
| KBRDY | 4 |
| KBDATA | 5 |
| PS2_CLK | 3 |
| PS2_DATA | 6 |
