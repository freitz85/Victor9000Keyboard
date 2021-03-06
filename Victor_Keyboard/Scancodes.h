#ifndef SCANCODES_H
#define SCANCODES_H

byte PS2_Victor_ger[] = {
  /* 00 -- */ 0, /* F9 */ 94, /* -- */ 0, /* F5 */ 5, /* F3 */ 3, /* F1 */ 1, /* F2 */ 2, /* F12 */ 32,
  /* 08 -- */ 0, /* F10 */ 73, /* F8 */ 8, /* F6 */ 6, /* F4 */ 4, /* TAB */ 33, /* ^ */ 12, /* -- */ 0,
  /* 10 -- */ 0, /* L ALT */ 95, /* L SHFT */ 74, /* -- */ 0, /* L CTRL */ 97, /* Q */ 34, /* 1 */ 13, /* -- */ 0,
  /* 18 -- */ 0, /* -- */ 0, /* Z */ 76, /* S */ 56, /* A */ 55, /* W */ 35, /* 2 */ 14, /* -- */ 0,
  /* 20 -- */ 0, /* C */ 78, /* X */ 77, /* D */ 57, /* E */ 36, /* 4 */ 16, /* 3 */ 15, /* -- */ 0,
  /* 28 -- */ 0, /* SPACE */ 96, /* V */ 79, /* F */ 58, /* T */ 38, /* R */ 37, /* 5 */ 17, /* -- */ 0,
  /* 30 -- */ 0, /* N */ 81, /* B */ 80, /* H */ 60, /* G */ 59, /* Y */ 39, /* 6 */ 18, /* -- */ 0,
  /* 38 -- */ 0, /* -- */ 0, /* M */ 82, /* J */ 61, /* U */ 40, /* 7 */ 19, /* 8 */ 20, /* -- */ 0,
  /* 40 -- */ 0, /* , */ 83, /* K */ 62, /* I */ 41, /* O */ 42, /* 0 */ 22, /* 9 */ 21, /* -- */ 0,
  /* 48 -- */ 0, /* . */ 84, /* - */ 85, /* L */ 63, /* Ö */ 64, /* P */ 43, /* ß */ 23, /* -- */ 0,
  /* 50 -- */ 0, /* -- */ 0, /* Ä */ 65, /* -- */ 0, /* Ü */ 44, /* ´ */ 0, /* -- */ 0, /* -- */ 0,
  /* 58 CAPS */ 54, /* R SHFT */ 86, /* ENTER */ 87, /* + */ 45, /* -- */ 0, /* # */ 24, /* -- */ 0, /* -- */ 0,
  /* 60 -- */ 0, /* -- */ 0, /* -- */ 0, /* -- */ 0, /* -- */ 0, /* -- */ 0, /* BKSP */ 25, /* -- */ 0,
  /* 68 -- */ 0, /* KP1 */ 90, /* -- */ 0, /* KP4 */ 69, /* KP7 */ 49, /* -- */ 0, /* -- */ 0, /* -- */ 0,
  /* 70 KP0 */ 100, /* KP. */ 102, /* KP2 */ 91, /* KP5 */ 70, /* KP6 */ 71, /* KP8 */ 50, /* ESC */ 11, /* NUM */ 28,
  /* 78 F11 */ 53, /* KP+ */ 72, /* KP3 */ 92, /* KP- */ 52, /* KP* */ 31, /* KP9 */ 51, /* SCROLL */ 67, /* -- */ 0,
  /* 80 -- */ 0, /* -- */ 0, /* -- */ 0, /* F7 */ 7, /* -- */ 0, /* -- */ 0, /* -- */ 0, /* -- */ 0,
  /* 88 -- */ 0, /* -- */ 0, /* -- */ 0, /* -- */ 0, /* -- */ 0, /* -- */ 0, /* -- */ 0, /* -- */ 0,
};

byte PS2_Victor_extended[] = {
  /* 00 */ 0, 0, 0, 0, 0, 0, 0, 0,
  /* 08 */ 0, 0, 0, 0, 0, 0, 0, 0,
  /* 10 */ 0, /* R ALT */ 95, 0, 0, /*R CTRL */ 97, 0, 0, 0,
  /* 18 */ 0, 0, 0, 0, 0, 0, 0, 0,
  /* 20 */ 0, 0, 0, 0, 0, 0, 0, 0,
  /* 28 */ 0, 0, 0, 0, 0, 0, 0, 0,
  /* 30 */ 0, 0, 0, 0, 0, 0, 0, 0,
  /* 38 */ 0, 0, 0, 0, 0, 0, 0, 0,
  /* 40 */ 0, 0, 0, 0, 0, 0, 0, 0,
  /* 48 */ 0, 0, /* KP/ */ 30, 0, 0, 0, 0, 0, 
  /* 50 */ 0, 0, 0, 0, 0, 0, 0, 0,
  /* 58 */ 0, 0, /* KPEN */ 93, 0, 0, 0, 0, 0, 
  /* 60 */ 0, 0, 0, 0, 0, 0, 0, 0,
  /* 68 */ 0, /* END */ 0, 0, /* ARR L */ 98, /* HOME */ 26, 0, 0, 0, 
  /* 70 */ /* INS */ 47, /* DEL */ 27, /* ARR D */ 89, 0, /* ARR R */ 99, /* ARR U */ 88, 0, 0,
  /* 78 */ 0, 0, /* PGDN */ 0, 0, 0, /* PGUP */ 0, 0, 0, 
};

#endif
