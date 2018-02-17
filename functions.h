//Список функций, используемых через Lua

int IsKeyPress(lua_State *L);

//Формирование списка экспорта
static struct luaL_reg ls_lib[] = {
	{ "IsKeyPress", IsKeyPress },
	{ NULL, NULL }
};