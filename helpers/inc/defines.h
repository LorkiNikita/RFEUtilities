#pragma once

#define t_Kling 0
#define t_Ranger 1
#define t_Transport 2
#define t_Pirate 3
#define t_Warrior 4
#define t_Tranclucator 5
#define t_RC 6
#define t_PB 7
#define t_WB 8
#define t_SB 9
#define t_BK 10
#define t_MC 11
#define t_CB 12
#define t_UB 13
#define t_ObjNone 0
#define t_ObjStar 1
#define t_ObjHole 2
#define t_ObjPlanet 3
#define t_ObjStation 4
#define t_ObjShip 5
#define t_ObjItem 6
#define t_ObjMissile 7
#define t_ObjAsteroid 8
#define t_ObjSector 9


#define SET_EXPR(lhs, expr)                   *(uint32_t*)&lhs = (uint32_t)(expr);
#define SET_VAR(lhs, rhs)                     *(int8_t**)&lhs = (int8_t*)rhs;
#define SET_VAR_WITH_OFFSET(lhs, rhs, offset) *(int8_t**)&lhs = (int8_t*)rhs + (offset);

struct _pair_byte;
struct _pair_int;
struct _pair_float;
struct _pair_double;

struct TList;
struct TObjectList;



struct THashEC;
struct TCodeEC;
struct TBufEC;
struct TFileEC;
struct TBlockParEC;
struct TBlockParElEC;
struct TDataElEC;
struct TDataEC;
struct TPackFileEC;
struct TPackCollectionEC;
struct TBlockMemUnitEC;
struct TBlockMemEC;
struct TStringsElEC;
struct TStringsEC;
// enum TVarEC_type;
struct TVarEC;
struct TVarArrayEC;
struct TCodeAnalyzerUnitEC;
struct TCodeAnalyzerEC;
struct TExpressionEC;
struct TExpressionInstrEC;
struct TExpressionVarEC;

struct TPlanetTempl;
struct TStarDist;
struct TShipGoodsItem;
struct TGoodsShopItem;
struct TGoneItem;
struct TDomResearchProgress;
struct TGalaxyEvent;
struct TSetItem;
struct TMessagePlayer;
struct TStorageUnit;
struct TQuestGameContent;
struct TTextField;
struct TQuestParameter;
struct TArrayRectGR;
struct TShopSlot;
struct TStoredItem;
struct TPlayerHoldUnit;
struct TJournalRecord;
struct TPlanetNews;

struct TCCInterface;
struct TCBufEC;
struct TCBufControlEC;
struct TCCInterface_El;

struct TThreadEC;
struct TSaver;

struct TBonus;
struct TBonusSpecial;

struct TScript;
struct TScriptShip;
struct TScriptPlace;
struct TScriptItem;
struct TScriptState;
struct TScriptGroup;
struct TScriptStar;
struct TScriptConstellation;
struct TScriptDialog;
struct TScriptDialogMsg;
struct TScriptDialogAnswer;

struct TObjectSE;

struct TMissile;
struct TCustomMissile;
struct TAsteroid;
struct TGalaxy;
struct TStar;
struct TPlanet;
struct THole;
struct TConstellation;


struct TItem;
struct TGoods;
struct TEquipment;
struct THull;
struct TFuelTanks;
struct TEngine;
struct TRadar;
struct TScaner;
struct TRepairRobot;
struct TCargoHook;
struct TDefGenerator;
struct TWeapon;
struct TCountableItem;
struct TEquipmentWithActCode;
struct TCistern;
struct TSatellite;
struct TTreasureMap;
struct TMicromodule;
struct TArtefact;
struct TUselessItem;
struct TProtoplasm;
struct TArtefactTransmitter;
struct TArtefactTranclucator;
struct TArtefactCustom;
struct TCustomWeapon;

struct TShipIliness;
struct TShip;
struct TRuins;
struct TTranclucator;
struct TKling;
struct TNormalShip;
struct TPirate;
struct TWarrior;
struct TTransport;
struct TRanger;
struct TPlayer;