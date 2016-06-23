#include "MadLevelUp.h"
#include <MadCore.h>
#pragma comment(lib, "MadLib.lib")

BOOL APIENTRY DllMain( HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved )
{
	MadCore core(ul_reason_for_call);
	core.Register(&(PVOID&)Server::CIOServer::Start, MadLevelUp::CIOServer::Start);
	core.Register(&(PVOID&)Server::CPlayer::LevelUp, MadLevelUp::LevelUp);
	return core.Run();
}