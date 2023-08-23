#pragma once
#include "main.h"


using namespace std;

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        setlocale(LC_ALL, "russian");
        srand(time(0));

        Path::InitUtilitiesPath(hModule);
        Path::InitModsPath();
        Path::InitUserDocumentsPath();
        Path::InitLogPath();

        Logger::SFT(L"RFEUtilities(version 0.0.1) has been successfully added to the game");
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}


DLLEXPORT
void InitUtils(TGalaxy* galaxy)
{
    Galaxy = galaxy;
    Player = (TPlayer*)Galaxy->rangers->items[Galaxy->player_index];

    vmt_TPlayer = Player->cls;
    vmt_TShip = vmt_struct(vmt_TPlayer)->parent;
    vmt_TObjectEx = ((VMT_helper*)vmt_TShip)->parent;
    vmt_TObject = ((VMT_helper*)vmt_TObjectEx)->parent;
        
    vmt_TEquipment = vmt_struct(((THull*)Player->items->items[0])->cls)->parent;
    vmt_TItem  = ((VMT_helper*)vmt_TEquipment)->parent;

    TConstellation* sector = (TConstellation*)Galaxy->constellations->items[0];
    vmt_TConstellation = sector->cls;

    TStar* star = (TStar*)Galaxy->stars->items[0];
    vmt_TStar = star->cls;
    vmt_TAsteroid = ((TAsteroid*)(star->asteroids->items[0]))->cls;
    TPlanet* planet = (TPlanet*)Galaxy->planets->items[0];
    vmt_TPlanet = planet->cls;
    vmt_TObjectSE = vmt_struct(vmt_TPlanet)->parent;
    vmt_TRanger = ((TRanger*)(Galaxy->rangers->items[0]))->cls;
    vmt_TScript = ((TScript*)(Galaxy->scripts->items[0]))->cls;

    TScriptShip* first_obj = (TScriptShip*)Player->script_ships_objects->items[0];
    vmt_TScriptShip = (VMT_TScriptShip*)first_obj->cls;

    TListM::Init(Galaxy->scripts);
    *(void**)&TScriptShip_Destroy = *((void**)vmt_TScriptShip - 1);
    *(void**)&TScriptShip_New = *((void**)vmt_TScriptShip - 3);
    SET_VAR_WITH_OFFSET(TScriptShip_Create, TScriptShip_Destroy, 0x52C - 0x570);

    *(void**)&GetMem = (void*)0x402488;
    *(void**)&FreeMem = (void*)0x402B0C;
}