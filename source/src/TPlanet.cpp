#pragma once
#include "../inc/TStar.h"
#include "../inc/TPlanet.h"

namespace TPlanetM 
{
    DLLEXPORT
    const wchar_t* PlanetCustomFaction(TPlanet* planet)
    {
        return planet->custom_faction;
    }
    DLLEXPORT
    const wchar_t* PlanetOwnerString(TPlanet* planet)
    {
        byte owner = planet->owner;
        byte race = planet->race;
        byte subOwner = planet->star->series;

        if(TPlanetM::PlanetCustomFaction(planet) != L"")
        {
            return TPlanetM::PlanetCustomFaction(planet);
        }

        switch (owner)
        {
            case Kling:
                switch (subOwner)
                {
                    case 0:
                        return L"Blazer";
                    case 1:
                        return L"Keller";
                    case 2:
                        return L"Terron";
                    default:
                        return L"Kling";
                }
                break;
            case PirateClan:
                switch (race)
                {
                    case Maloc:
                        return L"PirateMaloc";
                    case Peleng:
                        return L"PiratePeleng";
                    case People:
                        return L"PiratePeople";
                    case Fei:
                        return L"PirateFei";
                    case Gaal:
                        return L"PirateGaal";
                    default:
                        return L"Pirate";
                }
                return L"Pirate";
            case Maloc:
                return L"Maloc";
            case Peleng:
                return L"Peleng";
            case People:
                return L"People";
            case Fei:
                return L"Fei";
            case Gaal:
                return L"Gaal";
            case None:
                return L"None";
            
            default:
                return L"Empty";
        }
    }
}