#pragma once
#include "../../helpers/inc/exports.h"
#include "../../modules/inc/Logger.h"
#include "../inc/TObject.h"
#include "../inc/TShip.h"
#include "../inc/TItem.h"
#include "../inc/TPlanet.h"


using namespace std;

namespace TObjectM {
    byte ShipTypeN(TShip* ship)
    {
        return ship->type;
    }
    int ObjectType(void* obj)
    {
        VMT vmt = ((TShip*)obj)->cls;
        VMT prev_parent = vmt;
        VMT parent = vmt_struct(vmt)->parent;
        while (parent != vmt_TObjectEx && parent != vmt_TObject) 
        {
            prev_parent = parent;
            parent = ((VMT_helper*)parent)->parent;
        }
        vmt = prev_parent;

        if (vmt == vmt_TShip)
        {
            if (((TShip*)obj)->type < t_RC) return t_ObjShip;
            else return t_ObjStation;
        }
        else if (vmt == vmt_TItem) return t_ObjItem;
        else if (vmt == vmt_TPlanet) return t_ObjPlanet;
        else if (vmt == vmt_TStar) return t_ObjStar;
        else if (vmt == vmt_TAsteroid) return t_ObjAsteroid;
        else if (vmt == vmt_TConstellation) return t_ObjSector;
        else return t_ObjNone;
    }
    DLLEXPORT
    const wchar_t* ObjectOwnerString(void* obj)
    {
        int objType = TObjectM::ObjectType(obj);
        wstring customFaction;
        byte owner;
        byte race;
        switch (objType)
        {
            case t_ObjShip:
                TShip* ship = ((TShip*)obj);
                
                customFaction = TShipM::ShipCustomFaction(ship);
                if(customFaction != L"")
                {
                    return customFaction.c_str();
                    break;
                }

                owner = ship->owner;
                race = ship->pilot_race;
                switch (ship->owner)
                {
                    case Kling:
                        switch (TShipM::ShipSubrace(ship))
                        {
                            case 0:
                                return L"Blazer";
                                break;
                            case 1:
                                return L"Keller";
                                break;
                            case 2:
                                return L"Terron";
                                break;
                            default:
                                break;
                        }
                        
                        /* code */
                        break;
                    case None:
                        return L"None";
                        break;
                    case PirateClan:
                        switch (race)
                        {
                            case Maloc:
                                
                                break;
                            case Peleng:
                                
                                break;
                            case People:
                                
                                break;
                            case Fei:
                                
                                break;
                            case Gaal:
                                
                                break;
                            default:
                                break;
                        }
                        break;
                    default:
                        switch (race)
                        {
                            case Maloc:
                                
                                break;
                            case Peleng:
                                
                                break;
                            case People:
                                
                                break;
                            case Fei:
                                
                                break;
                            case Gaal:
                                
                                break;
                            default:
                                break;
                        }
                        return L"None";
                }

                break;
            case t_ObjItem:
                TItem* item = ((TItem*)obj);
                

                break;
            case t_ObjPlanet:
                TPlanet* planet = ((TPlanet*)obj);

                return L"None";
                break;
            default:
                Logger::WriteMessageError(L"Object haven't owner param");
                return L"None";
                break;
        }
        return L"None";
    }
};