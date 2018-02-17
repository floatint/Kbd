// dllmain.cpp: определяет точку входа для приложения DLL.



#include "stdafx.h"


//Эту функцию lua будет искать при подключении dll, её название заканчиваться названием dll, luaopen_ИМЯВАШЕЙDLL
extern "C" LUALIB_API int luaopen_Kbd(lua_State *L) {
	//Регистрация функций
	luaL_openlib(L, "Kbd", ls_lib, 0);
	lua_pushinteger(L, VK_LBUTTON);
	lua_setfield(L, -STACK_TOP + 1, "LMB");
	lua_pushinteger(L, VK_RBUTTON);
	lua_setfield(L, -STACK_TOP + 1, "RMB");
	lua_pushinteger(L, VK_CANCEL);
	lua_setfield(L, -STACK_TOP + 1, "Cancel");
	lua_pushinteger(L, VK_MBUTTON);
	lua_setfield(L, -STACK_TOP + 1, "MMB");
	lua_pushinteger(L, VK_XBUTTON1);
	lua_setfield(L, -STACK_TOP + 1, "X1MB");
	lua_pushinteger(L, VK_XBUTTON2);
	lua_setfield(L, -STACK_TOP + 1, "X2MB");
	lua_pushinteger(L, VK_BACK);
	lua_setfield(L, -STACK_TOP + 1, "Back");
	lua_pushinteger(L, VK_TAB);
	lua_setfield(L, -STACK_TOP + 1, "Tab");
	lua_pushinteger(L, VK_CLEAR);
	lua_setfield(L, -STACK_TOP + 1, "Clear");
	lua_pushinteger(L, VK_RETURN);
	lua_setfield(L, -STACK_TOP + 1, "Enter");
	lua_pushinteger(L, VK_SHIFT);
	lua_setfield(L, -STACK_TOP + 1, "Shift");
	lua_pushinteger(L, VK_CONTROL);
	lua_setfield(L, -STACK_TOP + 1, "Ctrl");
	lua_pushinteger(L, VK_MENU);
	lua_setfield(L, -STACK_TOP + 1, "Alt");
	lua_pushinteger(L, VK_PAUSE);
	lua_setfield(L, -STACK_TOP + 1, "Pause");
	lua_pushinteger(L, VK_CAPITAL);
	lua_setfield(L, -STACK_TOP + 1, "CapsLock");
	lua_pushinteger(L, VK_ESCAPE);
	lua_setfield(L, -STACK_TOP + 1, "Esc");
	lua_pushinteger(L, VK_SPACE);
	lua_setfield(L, -STACK_TOP + 1, "Space");
	lua_pushinteger(L, VK_PRIOR);
	lua_setfield(L, -STACK_TOP + 1, "PageUp");
	lua_pushinteger(L, VK_NEXT);
	lua_setfield(L, -STACK_TOP + 1, "PageDown");
	lua_pushinteger(L, VK_END);
	lua_setfield(L, -STACK_TOP + 1, "End");
	lua_pushinteger(L, VK_HOME);
	lua_setfield(L, -STACK_TOP + 1, "Home");
	lua_pushinteger(L, VK_LEFT);
	lua_setfield(L, -STACK_TOP + 1, "Left");
	lua_pushinteger(L, VK_UP);
	lua_setfield(L, -STACK_TOP + 1, "Up");
	lua_pushinteger(L, VK_RIGHT);
	lua_setfield(L, -STACK_TOP + 1, "Right");
	lua_pushinteger(L, VK_DOWN);
	lua_setfield(L, -STACK_TOP + 1, "Down");
	lua_pushinteger(L, VK_SELECT);
	lua_setfield(L, -STACK_TOP + 1, "Select");
	lua_pushinteger(L, VK_PRINT);
	lua_setfield(L, -STACK_TOP + 1, "Print");
	lua_pushinteger(L, VK_EXECUTE);
	lua_setfield(L, -STACK_TOP + 1, "Execute");
	lua_pushinteger(L, VK_SNAPSHOT);
	lua_setfield(L, -STACK_TOP + 1, "PrntScrn");
	lua_pushinteger(L, VK_INSERT);
	lua_setfield(L, -STACK_TOP + 1, "Insert");
	lua_pushinteger(L, VK_DELETE);
	lua_setfield(L, -STACK_TOP + 1, "Delete");
	lua_pushinteger(L, VK_HELP);
	lua_setfield(L, -STACK_TOP + 1, "Help");
	lua_pushinteger(L, 0x30);
	lua_setfield(L, -STACK_TOP + 1, "Key0");
	lua_pushinteger(L, 0x31);
	lua_setfield(L, -STACK_TOP + 1, "Key1");
	lua_pushinteger(L, 0x32);
	lua_setfield(L, -STACK_TOP + 1, "Key2");
	lua_pushinteger(L, 0x33);
	lua_setfield(L, -STACK_TOP + 1, "Key3");
	lua_pushinteger(L, 0x34);
	lua_setfield(L, -STACK_TOP + 1, "Key4");
	lua_pushinteger(L, 0x35);
	lua_setfield(L, -STACK_TOP + 1, "Key5");
	lua_pushinteger(L, 0x36);
	lua_setfield(L, -STACK_TOP + 1, "Key6");
	lua_pushinteger(L, 0x37);
	lua_setfield(L, -STACK_TOP + 1, "Key7");
	lua_pushinteger(L, 0x38);
	lua_setfield(L, -STACK_TOP + 1, "Key8");
	lua_pushinteger(L, 0x39);
	lua_setfield(L, -STACK_TOP + 1, "Key9");
	lua_pushinteger(L, 0x41);
	lua_setfield(L, -STACK_TOP + 1, "A");
	lua_pushinteger(L, 0x42);
	lua_setfield(L, -STACK_TOP + 1, "B");
	lua_pushinteger(L, 0x43);
	lua_setfield(L, -STACK_TOP + 1, "C");
	lua_pushinteger(L, 0x44);
	lua_setfield(L, -STACK_TOP + 1, "D");
	lua_pushinteger(L, 0x45);
	lua_setfield(L, -STACK_TOP + 1, "E");
	lua_pushinteger(L, 0x46);
	lua_setfield(L, -STACK_TOP + 1, "F");
	lua_pushinteger(L, 0x47);
	lua_setfield(L, -STACK_TOP + 1, "G");
	lua_pushinteger(L, 0x48);
	lua_setfield(L, -STACK_TOP + 1, "H");
	lua_pushinteger(L, 0x49);
	lua_setfield(L, -STACK_TOP + 1, "I");
	lua_pushinteger(L, 0x4A);
	lua_setfield(L, -STACK_TOP + 1, "J");
	lua_pushinteger(L, 0x4B);
	lua_setfield(L, -STACK_TOP + 1, "K");
	lua_pushinteger(L, 0x4C);
	lua_setfield(L, -STACK_TOP + 1, "L");
	lua_pushinteger(L, 0x4D);
	lua_setfield(L, -STACK_TOP + 1, "M");
	lua_pushinteger(L, 0x4E);
	lua_setfield(L, -STACK_TOP + 1, "N");
	lua_pushinteger(L, 0x4F);
	lua_setfield(L, -STACK_TOP + 1, "O");
	lua_pushinteger(L, 0x50);
	lua_setfield(L, -STACK_TOP + 1, "P");
	lua_pushinteger(L, 0x51);
	lua_setfield(L, -STACK_TOP + 1, "Q");
	lua_pushinteger(L, 0x52);
	lua_setfield(L, -STACK_TOP + 1, "R");
	lua_pushinteger(L, 0x53);
	lua_setfield(L, -STACK_TOP + 1, "S");
	lua_pushinteger(L, 0x54);
	lua_setfield(L, -STACK_TOP + 1, "T");
	lua_pushinteger(L, 0x55);
	lua_setfield(L, -STACK_TOP + 1, "U");
	lua_pushinteger(L, 0x56);
	lua_setfield(L, -STACK_TOP + 1, "V");
	lua_pushinteger(L, 0x57);
	lua_setfield(L, -STACK_TOP + 1, "W");
	lua_pushinteger(L, 0x58);
	lua_setfield(L, -STACK_TOP + 1, "X");
	lua_pushinteger(L, 0x59);
	lua_setfield(L, -STACK_TOP + 1, "Y");
	lua_pushinteger(L, 0x5A);
	lua_setfield(L, -STACK_TOP + 1, "Z");
	lua_pushinteger(L, VK_LWIN);
	lua_setfield(L, -STACK_TOP + 1, "LeftWin");
	lua_pushinteger(L, VK_RWIN);
	lua_setfield(L, -STACK_TOP + 1, "RightWin");
	lua_pushinteger(L, VK_APPS);
	lua_setfield(L, -STACK_TOP + 1, "AppKey");
	lua_pushinteger(L, VK_SLEEP);
	lua_setfield(L, -STACK_TOP + 1, "Sleep");
	lua_pushinteger(L, VK_LWIN);
	lua_setfield(L, -STACK_TOP + 1, "LeftWin");
	lua_pushinteger(L, VK_NUMPAD0);
	lua_setfield(L, -STACK_TOP + 1, "Num0");
	lua_pushinteger(L, VK_NUMPAD1);
	lua_setfield(L, -STACK_TOP + 1, "Num1");
	lua_pushinteger(L, VK_NUMPAD2);
	lua_setfield(L, -STACK_TOP + 1, "Num2");
	lua_pushinteger(L, VK_NUMPAD3);
	lua_setfield(L, -STACK_TOP + 1, "Num3");
	lua_pushinteger(L, VK_NUMPAD4);
	lua_setfield(L, -STACK_TOP + 1, "Num4");
	lua_pushinteger(L, VK_NUMPAD5);
	lua_setfield(L, -STACK_TOP + 1, "Num5");
	lua_pushinteger(L, VK_NUMPAD6);
	lua_setfield(L, -STACK_TOP + 1, "Num6");
	lua_pushinteger(L, VK_NUMPAD7);
	lua_setfield(L, -STACK_TOP + 1, "Num7");
	lua_pushinteger(L, VK_NUMPAD8);
	lua_setfield(L, -STACK_TOP + 1, "Num8");
	lua_pushinteger(L, VK_NUMPAD9);
	lua_setfield(L, -STACK_TOP + 1, "Num9");
	lua_pushinteger(L, VK_MULTIPLY);
	lua_setfield(L, -STACK_TOP + 1, "Multiply");
	lua_pushinteger(L, VK_ADD);
	lua_setfield(L, -STACK_TOP + 1, "Add");
	lua_pushinteger(L, VK_SEPARATOR);
	lua_setfield(L, -STACK_TOP + 1, "Separator");
	lua_pushinteger(L, VK_SUBTRACT);
	lua_setfield(L, -STACK_TOP + 1, "Subtract");
	lua_pushinteger(L, VK_DECIMAL);
	lua_setfield(L, -STACK_TOP + 1, "Decimal");
	lua_pushinteger(L, VK_DIVIDE);
	lua_setfield(L, -STACK_TOP + 1, "Divide");
	lua_pushinteger(L, VK_F1);
	lua_setfield(L, -STACK_TOP + 1, "F1");
	lua_pushinteger(L, VK_F2);
	lua_setfield(L, -STACK_TOP + 1, "F2");
	lua_pushinteger(L, VK_F3);
	lua_setfield(L, -STACK_TOP + 1, "F3");
	lua_pushinteger(L, VK_F4);
	lua_setfield(L, -STACK_TOP + 1, "F4");
	lua_pushinteger(L, VK_F5);
	lua_setfield(L, -STACK_TOP + 1, "F5");
	lua_pushinteger(L, VK_F6);
	lua_setfield(L, -STACK_TOP + 1, "F6");
	lua_pushinteger(L, VK_F7);
	lua_setfield(L, -STACK_TOP + 1, "F7");
	lua_pushinteger(L, VK_F8);
	lua_setfield(L, -STACK_TOP + 1, "F8");
	lua_pushinteger(L, VK_F9);
	lua_setfield(L, -STACK_TOP + 1, "F9");
	lua_pushinteger(L, VK_F10);
	lua_setfield(L, -STACK_TOP + 1, "F10");
	lua_pushinteger(L, VK_F11);
	lua_setfield(L, -STACK_TOP + 1, "F11");
	lua_pushinteger(L, VK_F12);
	lua_setfield(L, -STACK_TOP + 1, "F12");
	lua_pushinteger(L, VK_F13);
	lua_setfield(L, -STACK_TOP + 1, "F13");
	lua_pushinteger(L, VK_F14);
	lua_setfield(L, -STACK_TOP + 1, "F14");
	lua_pushinteger(L, VK_F15);
	lua_setfield(L, -STACK_TOP + 1, "F15");
	lua_pushinteger(L, VK_F16);
	lua_setfield(L, -STACK_TOP + 1, "F16");
	lua_pushinteger(L, VK_F17);
	lua_setfield(L, -STACK_TOP + 1, "F17");
	lua_pushinteger(L, VK_F18);
	lua_setfield(L, -STACK_TOP + 1, "F18");
	lua_pushinteger(L, VK_F19);
	lua_setfield(L, -STACK_TOP + 1, "F19");
	lua_pushinteger(L, VK_F20);
	lua_setfield(L, -STACK_TOP + 1, "F20");
	lua_pushinteger(L, VK_F21);
	lua_setfield(L, -STACK_TOP + 1, "F21");
	lua_pushinteger(L, VK_F22);
	lua_setfield(L, -STACK_TOP + 1, "F22");
	lua_pushinteger(L, VK_F23);
	lua_setfield(L, -STACK_TOP + 1, "F23");
	lua_pushinteger(L, VK_F24);
	lua_setfield(L, -STACK_TOP + 1, "F24");
	lua_pushinteger(L, VK_NUMLOCK);
	lua_setfield(L, -STACK_TOP + 1, "NumLock");
	lua_pushinteger(L, VK_SCROLL);
	lua_setfield(L, -STACK_TOP + 1, "ScrollLock");
	lua_pushinteger(L, VK_LSHIFT);
	lua_setfield(L, -STACK_TOP + 1, "LeftShift");
	lua_pushinteger(L, VK_RSHIFT);
	lua_setfield(L, -STACK_TOP + 1, "RightShift");
	lua_pushinteger(L, VK_LCONTROL);
	lua_setfield(L, -STACK_TOP + 1, "LeftCtrl");
	lua_pushinteger(L, VK_RCONTROL);
	lua_setfield(L, -STACK_TOP + 1, "RightCtrl");
	lua_pushinteger(L, VK_LMENU);
	lua_setfield(L, -STACK_TOP + 1, "LeftAlt");
	lua_pushinteger(L, VK_RMENU);
	lua_setfield(L, -STACK_TOP + 1, "RightAlt");
	lua_pushinteger(L, VK_BROWSER_BACK);
	lua_setfield(L, -STACK_TOP + 1, "BrowserBack");
	lua_pushinteger(L, VK_BROWSER_FORWARD);
	lua_setfield(L, -STACK_TOP + 1, "BrowserForward");
	lua_pushinteger(L, VK_BROWSER_REFRESH);
	lua_setfield(L, -STACK_TOP + 1, "BrowserRefresh");
	lua_pushinteger(L, VK_BROWSER_STOP);
	lua_setfield(L, -STACK_TOP + 1, "BrowserStop");
	lua_pushinteger(L, VK_BROWSER_SEARCH);
	lua_setfield(L, -STACK_TOP + 1, "BrowserSearch");
	lua_pushinteger(L, VK_BROWSER_FAVORITES);
	lua_setfield(L, -STACK_TOP + 1, "BrowserFavorites");
	lua_pushinteger(L, VK_BROWSER_HOME);
	lua_setfield(L, -STACK_TOP + 1, "BrowserHome");
	lua_pushinteger(L, VK_VOLUME_MUTE);
	lua_setfield(L, -STACK_TOP + 1, "VolMute");
	lua_pushinteger(L, VK_VOLUME_DOWN);
	lua_setfield(L, -STACK_TOP + 1, "VolDown");
	lua_pushinteger(L, VK_VOLUME_UP);
	lua_setfield(L, -STACK_TOP + 1, "VolUp");
	lua_pushinteger(L, VK_VOLUME_UP);
	lua_setfield(L, -STACK_TOP + 1, "VolUp");
	//Media block
	/**/
	//next

	return 0;
}