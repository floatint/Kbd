#include "stdafx.h"

int IsKeyPress(lua_State *L)
{
	int paramCnt = PARAM_COUNT;
	if ((paramCnt < 1) || (paramCnt > 1))
	{
		lua_pushboolean(L, false);
		return 1;
	};
	int key = lua_tointeger(L, PARAM(1));
	if ((key < VK_LBUTTON) || (key > VK_OEM_CLEAR))
	{
		lua_pushboolean(L, false);
		return 1;
	};
	unsigned short ret = GetAsyncKeyState(key);
	if ((ret == 32768) /*|| (ret == 1)*/ || (ret == 32769))
	{
		lua_pushboolean(L, true);
		return 1;
	};
	//anyway
	lua_pushboolean(L, false);
	return 1;
};
