#pragma once
#include "VMT.h"

struct TMessageLoopGI {
    VMT cls;

    STR _04;
    int _08;
    TMessageLoopGI* child_form;
    int _10;
    int _14;
    int _18;
    int _1C;
    int _20;
    _gap_32 _24;
    int _28;
    int _2C;
    _gap_32 _30;
    _gap_32 _34;
    _gap_32 _38;
    _gap_32 _3C;
    _gap_32 _40;
    STR _44;
    int _48;
    int _4C;
    int _50;
    int _54;
    byte _58;
    _gap _59[3];
    int _5C;
    int _60;
    byte _64;
    _gap _65[3];
    int _68;
    int _6C;
    int _70;
    int _74;
    _gap_32 _78;
    int _7C;
    int _80;
    int _84;
    int _88;
    int _8C;
    int _90;
    int _94;
    int _98;
    _gap _9C;
    byte _9D;
    _gap _9E[2];
    int _A0;
    byte _A4;
    _gap _A5[3];
    STR _A8;
    STR _AC;
    int _B0;
    int _B4;
    int _B8;
    int _BC;
    byte _C0;
    _gap _C1[3];
    PTR _C4;
    int _C8;
    byte _CC;
    _gap _CD[3];
};

struct TMessageLoopGIWithMainPanel: TMessageLoopGI {
    int _D0;
};

struct TfScoreUnit {
    VMT cls;

    byte _04;
    bool _05; // bad flag?
    byte diff[8];
    _gap _0E[2];
    int level;
    STR name;
    int _18;
    byte race;
    _gap _1D;
    _gap _1E;
    _gap _1F;
    int date;
    byte rank;
    byte _25;
    _gap _26;
    _gap _27;
    int _28;
    int _2C;
    int _30;
    int liberation_system;
    int _38;
    int _3C;
    int _40;
    int _44;
    int rewards;
    PTR _4C;  // dyn array
    int _50;
    byte skills[6];
    _gap _5A;
    _gap _5B;
    int _5C;
    TBufEC* _60;
    PTR _64;  // dyn array
    int _68;
    PTR _6C;  // dyn array
    byte _70;
    byte _71;
    byte _72;
    byte _73;
    int score;
    int _78;
};


struct TfAB: TMessageLoopGI {
    _gap_32 _0D0;
    _gap_32 _0D4;
    _gap_32 _0D8;
    _gap_32 _0DC;
    _gap_32 _0E0;
    _gap_32 _0E4;
    _gap_32 _0E8;
    _gap_32 _0EC;
    _gap_32 _0F0;
    _gap_32 _0F4;
    _gap_32 _0F8;
    _gap_32 _0FC;
    _gap_32 _100;  // ObjSE
    _gap_32 _104;
    _gap_32 _108;
    _gap_32 _10C;
    TList* _110;
    _gap_32 _114;
    _gap_32 _118;
    _gap_32 _11C;
    _gap_32 _120;
    STR _124;
    _gap_32 _128;
    _gap_32 _12C;
    _gap_32 _130;
    _gap_32 _134;
    _gap_32 _138;
    _gap_32 _13C;
    _gap_32 _140;
    _gap_32 _144;
    _gap_32 _148;
    _gap_32 _14C;
    _gap_32 _150;
    _gap_32 _154;
    _gap_32 _158;
    _gap_32 _15C;
    _gap_32 _160;
    _gap_32 _164;
    _gap_32 _168;
    _gap_32 _16C;
    _gap_32 _170;
    _gap_32 _174;
    _gap_32 _178;
    _gap_32 _17C;
    _gap_32 _180;
    _gap_32 _184;
    _gap_32 _188;
    _gap_32 _18C;
    _gap_32 _190;
    _gap_32 _194;
    _gap_32 _198;  // TPolyLineGI
    _gap_32 _19C;
    _gap_32 _1A0;
    _gap_32 _1A4;
    _gap_32 _1A8;
    _gap_32 _1AC;
    _gap_32 _1B0;
    _gap_32 _1B4;
    _gap_32 _1B8;
    _gap_32 _1BC;
    _gap_32 _1C0;
    _gap_32 _1C4;
    _gap_32 _1C8;
    _gap_32 _1CC;
    _gap_32 _1D0;
    _gap_32 _1D4;
    _gap_32 _1D8;
    _gap_32 _1DC;
    _gap_32 _1E0;
    _gap_32 _1E4;
    _gap_32 _1E8;
    _gap_32 _1EC;
    _gap_32 _1F0;
    _gap_32 _1F4;
    _gap_32 _1F8;
    _gap_32 _1FC;
    _gap_32 _200;
    _gap_32 _204;
    _gap_32 _208;
    _gap_32 _20C;
    _gap_32 _210;
    _gap_32 _214;
    _gap_32 _218;
    _gap_32 _21C;
    _gap_32 _220;
    _gap_32 _224;
    _gap_32 _228;
    _gap_32 _22C;
    _gap_32 _230;
    _gap_32 _234;
    _gap_32 _238;
    _gap_32 _23C;
    _gap_32 _240;
    _gap_32 _244;
    _gap_32 _248;
    _gap_32 _24C;
    _gap_32 _250;
    _gap_32 _254;
    _gap_32 _258;
    _gap_32 _25C;
    _gap_32 _260;
    _gap_32 _264;
    _gap_32 _268;
    _gap_32 _26C;
    _gap_32 _270;
    _gap_32 _274;
    _gap_32 _278;
    _gap_32 _27C;
    _gap_32 _280;
    _gap_32 _284;
    _gap_32 _288;
    _gap_32 _28C;
    _gap_32 _290;
    _gap_32 _294;
    _gap_32 _298;
    _gap_32 _29C;
    _gap_32 _2A0;
    _gap_32 _2A4;
    _gap_32 _2A8[5];
    _gap _2BC;
    _gap _2BD;
    _gap _2BE;
    _gap _2BF;
    _gap _2C0;
    _gap _2C1;
    _gap _2C2;
    _gap _2C3;
    _gap_32 _2C4;
    _gap_32 _2C8;
    _gap_32 _2CC;
    _gap_32 _2D0;
    _gap_32 _2D4;
    _gap_32 _2D8;
    _gap_32 _2DC;
    _gap_32 _2E0;
    _gap_32 _2E4;
    _gap_32 _2E8;
    _gap_32 _2EC;
    _gap_32 _2F0;
    _gap_32 _2F4;
    _gap_32 _2F8;
    _gap_32 _2FC;
    _gap_32 _300;
    _gap_32 _304;
    _gap_32 _308;
    _gap_32 _30C;
    _gap_32 _310;
    _gap_32 _314;
    _gap _318;
    _gap _319;
    _gap _31A;
    _gap _31B;
    TThreadEC* _31C;
    _gap_32 _320;
    _gap_32 _324;
    _gap_32 _328;
    _gap_32 _32C;
    _gap_32 _330;
    _gap_32 _334;
    _gap_32 _338;
    _gap_32 _33C;  // rnd
    _gap_32 _340;  // rnd
    _gap_32 _344;
    _gap_32 _348;
    _gap_32 _34C;
    _gap_32 _350;
    _gap_32 _354;
};
