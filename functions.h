//������ �������, ������������ ����� Lua

int IsKeyPress(lua_State *L);

//������������ ������ ��������
static struct luaL_reg ls_lib[] = {
	{ "IsKeyPress", IsKeyPress },
	{ NULL, NULL }
};