#pragma once
#include "TShip.h"
#include "VMT.h"

static TPlayer* Player = nullptr;

struct TPlayer: TRanger {
    _gap _560;
    _gap _561;
    _gap _562;
    _gap _563;
    int _564;
    int _568;
    _gap _56C;
    _gap _56D;
    _gap _56E;
    _gap _56F;
    _gap _570;
    _gap _571;
    _gap _572;
    _gap _573;
    _gap _574;
    _gap _575;
    _gap _576;
    _gap _577;
    _gap _578;
    _gap _579;
    _gap _57A;
    _gap _57B;
    _gap _57C;
    _gap _57D;
    _gap _57E;
    _gap _57F;
    _gap _580;
    _gap _581;
    _gap _582;
    _gap _583;
    _gap _584;
    _gap _585;
    _gap _586;
    _gap _587;
    _gap _588;
    _gap _589;
    _gap _58A;
    _gap _58B;
    TList* script_ships_objects;
    _gap _590;
    _gap _591;
    _gap _592;
    _gap _593;
    _gap _594;
    _gap _595;
    _gap _596;
    _gap _597;
    _gap _598;
    _gap _599;
    _gap _59A;
    _gap _59B;
    TList* global_item_storage;
    UNK debt;
    int debt_date;
    int debt_cnt;
    UNK deposit;
    int deposit_date;
    int deposit_day;
    UNK deposit_percent;
    UNK med_policy;
    _gap _5C0;
    _gap _5C1;
    _gap _5C2;
    _gap _5C3;
    _gap _5C4;
    _gap _5C5;
    _gap _5C6;
    _gap _5C7;
    _gap _5C8;
    _gap _5C9;
    _gap _5CA;
    _gap _5CB;
    TStar* dest_star;
    _gap _5D0;
    _gap _5D1;
    _gap _5D2;
    _gap _5D3;
    _gap _5D4;
    _gap _5D5;
    _gap _5D6;
    _gap _5D7;
    _gap _5D8;
    _gap _5D9;
    _gap _5DA;
    _gap _5DB;
    _gap _5DC;
    _gap _5DD;
    _gap _5DE;
    _gap _5DF;
    _gap _5E0;
    _gap _5E1;
    _gap _5E2;
    _gap _5E3;
    _gap _5E4;
    _gap _5E5;
    _gap _5E6;
    _gap _5E7;
    _gap _5E8;
    _gap _5E9;
    _gap _5EA;
    _gap _5EB;
    _gap _5EC;
    _gap _5ED;
    _gap _5EE;
    _gap _5EF;
    _gap _5F0;
    _gap _5F1;
    _gap _5F2;
    _gap _5F3;
    _gap _5F4;
    _gap _5F5;
    _gap _5F6;
    _gap _5F7;
    _gap _5F8;
    _gap _5F9;
    _gap _5FA;
    _gap _5FB;
    _gap _5FC;
    _gap _5FD;
    _gap _5FE;
    _gap _5FF;
    _gap _600;
    _gap _601;
    _gap _602;
    _gap _603;
    _gap _604;
    _gap _605;
    _gap _606;
    _gap _607;
    _gap _608;
    _gap _609;
    _gap _60A;
    _gap _60B;
    _gap _60C;
    _gap _60D;
    _gap _60E;
    _gap _60F;
    _gap _610;
    _gap _611;
    _gap _612;
    _gap _613;
    _gap _614;
    _gap _615;
    _gap _616;
    _gap _617;
    _gap _618;
    _gap _619;
    _gap _61A;
    _gap _61B;
    _gap _61C;
    _gap _61D;
    _gap _61E;
    _gap _61F;
    _gap _620;
    _gap _621;
    _gap _622;
    _gap _623;
    _gap _624;
    _gap _625;
    _gap _626;
    _gap _627;
    _gap _628;
    _gap _629;
    _gap _62A;
    _gap _62B;
    _gap _62C;
    _gap _62D;
    _gap _62E;
    _gap _62F;
    _gap _630;
    _gap _631;
    _gap _632;
    _gap _633;
    _gap _634;
    _gap _635;
    _gap _636;
    _gap _637;
    _gap _638;
    _gap _639;
    _gap _63A;
    _gap _63B;
    _gap _63C;
    _gap _63D;
    _gap _63E;
    _gap _63F;
    _gap _640;
    _gap _641;
    _gap _642;
    _gap _643;
    _gap _644;
    _gap _645;
    _gap _646;
    _gap _647;
    _gap _648;
    _gap _649;
    _gap _64A;
    _gap _64B;
    _gap _64C;
    _gap _64D;
    _gap _64E;
    _gap _64F;
    _gap _650;
    _gap _651;
    _gap _652;
    _gap _653;
    _gap _654;
    _gap _655;
    _gap _656;
    _gap _657;
    _gap _658;
    _gap _659;
    _gap _65A;
    _gap _65B;
    _gap _65C;
    _gap _65D;
    _gap _65E;
    _gap _65F;
    _gap _660;
    _gap _661;
    _gap _662;
    _gap _663;
    _gap _664;
    _gap _665;
    _gap _666;
    _gap _667;
    _gap _668;
    _gap _669;
    _gap _66A;
    _gap _66B;
    _gap _66C;
    _gap _66D;
    _gap _66E;
    _gap _66F;
    _gap _670;
    _gap _671;
    _gap _672;
    _gap _673;
    _gap _674;
    _gap _675;
    _gap _676;
    _gap _677;
    _gap _678;
    _gap _679;
    _gap _67A;
    _gap _67B;
    _gap _67C;
    _gap _67D;
    _gap _67E;
    _gap _67F;
    _gap _680;
    _gap _681;
    _gap _682;
    _gap _683;
    _gap _684;
    _gap _685;
    _gap _686;
    _gap _687;
    _gap _688;
    _gap _689;
    _gap _68A;
    _gap _68B;
    _gap _68C;
    _gap _68D;
    _gap _68E;
    _gap _68F;
    _gap _690;
    _gap _691;
    _gap _692;
    _gap _693;
    _gap _694;
    _gap _695;
    _gap _696;
    _gap _697;
    _gap _698;
    _gap _699;
    _gap _69A;
    _gap _69B;
    TList* satellites;
    _gap _6A0;
    _gap _6A1;
    _gap _6A2;
    _gap _6A3;
    _gap _6A4;
    _gap _6A5;
    _gap _6A6;
    _gap _6A7;
    _gap _6A8;
    _gap _6A9;
    _gap _6AA;
    _gap _6AB;
    bool reject_PB;
    _gap _6AD;
    _gap _6AE;
    _gap _6AF;
    _gap _6B0;
    _gap _6B1;
    _gap _6B2;
    _gap _6B3;
    _gap _6B4;
    _gap _6B5;
    _gap _6B6;
    _gap _6B7;
    _gap _6B8;
    _gap _6B9;
    _gap _6BA;
    _gap _6BB;
    _gap _6BC;
    _gap _6BD;
    _gap _6BE;
    _gap _6BF;
    _gap _6C0;
    _gap _6C1;
    _gap _6C2;
    _gap _6C3;
    _gap _6C4;
    _gap _6C5;
    _gap _6C6;
    _gap _6C7;
    _gap _6C8;
    _gap _6C9;
    _gap _6CA;
    _gap _6CB;
    _gap _6CC;
    _gap _6CD;
    _gap _6CE;
    _gap _6CF;
    _gap _6D0;
    _gap _6D1;
    _gap _6D2;
    _gap _6D3;
    _gap _6D4;
    _gap _6D5;
    _gap _6D6;
    _gap _6D7;
    _gap _6D8;
    _gap _6D9;
    _gap _6DA;
    _gap _6DB;
    _gap _6DC;
    _gap _6DD;
    _gap _6DE;
    _gap _6DF;
    _gap _6E0;
    _gap _6E1;
    _gap _6E2;
    _gap _6E3;
    _gap _6E4;
    _gap _6E5;
    _gap _6E6;
    _gap _6E7;
    _gap _6E8;
    _gap _6E9;
    _gap _6EA;
    _gap _6EB;
    _gap _6EC;
    _gap _6ED;
    _gap _6EE;
    _gap _6EF;
    _gap _6F0;
    _gap _6F1;
    _gap _6F2;
    _gap _6F3;
    _gap _6F4;
    _gap _6F5;
    _gap _6F6;
    _gap _6F7;
    _gap _6F8;
    _gap _6F9;
    _gap _6FA;
    _gap _6FB;
    _gap _6FC;
    _gap _6FD;
    _gap _6FE;
    _gap _6FF;
    _gap _700;
    _gap _701;
    _gap _702;
    _gap _703;
    _gap _704;
    _gap _705;
    _gap _706;
    _gap _707;
    _gap _708;
    _gap _709;
    _gap _70A;
    _gap _70B;
    _gap _70C;
    _gap _70D;
    _gap _70E;
    _gap _70F;
    _gap _710;
    _gap _711;
    _gap _712;
    _gap _713;
    _gap _714;
    _gap _715;
    _gap _716;
    _gap _717;
    _gap _718;
    _gap _719;
    _gap _71A;
    _gap _71B;
    _gap _71C;
    _gap _71D;
    _gap _71E;
    _gap _71F;
    _gap _720;
    _gap _721;
    _gap _722;
    _gap _723;
    _gap _724;
    _gap _725;
    _gap _726;
    _gap _727;
    _gap _728;
    _gap _729;
    _gap _72A;
    _gap _72B;
    _gap _72C;
    _gap _72D;
    _gap _72E;
    _gap _72F;
    _gap _730;
    _gap _731;
    _gap _732;
    _gap _733;
    _gap _734;
    _gap _735;
    _gap _736;
    _gap _737;
    _gap _738;
    _gap _739;
    _gap _73A;
    _gap _73B;
    _gap _73C;
    _gap _73D;
    _gap _73E;
    _gap _73F;
    _gap _740;
    _gap _741;
    _gap _742;
    _gap _743;
    _gap _744;
    _gap _745;
    _gap _746;
    _gap _747;
    _gap _748;
    _gap _749;
    _gap _74A;
    _gap _74B;
    _gap _74C;
    _gap _74D;
    _gap _74E;
    _gap _74F;
    _gap _750;
    _gap _751;
    _gap _752;
    _gap _753;
    _gap _754;
    _gap _755;
    _gap _756;
    _gap _757;
    _gap _758;
    _gap _759;
    _gap _75A;
    _gap _75B;
    _gap _75C;
    _gap _75D;
    _gap _75E;
    _gap _75F;
    _gap _760;
    _gap _761;
    _gap _762;
    _gap _763;
    _gap _764;
    _gap _765;
    _gap _766;
    _gap _767;
    _gap _768;
    _gap _769;
    _gap _76A;
    _gap _76B;
    _gap _76C;
    _gap _76D;
    _gap _76E;
    _gap _76F;
    _gap _770;
    _gap _771;
    _gap _772;
    _gap _773;
    _gap _774;
    _gap _775;
    _gap _776;
    _gap _777;
    _gap _778;
    _gap _779;
    _gap _77A;
    _gap _77B;
    _gap _77C;
    _gap _77D;
    _gap _77E;
    _gap _77F;
    _gap _780;
    _gap _781;
    _gap _782;
    _gap _783;
    _gap _784;
    _gap _785;
    _gap _786;
    _gap _787;
    _gap _788;
    _gap _789;
    _gap _78A;
    _gap _78B;
    _gap _78C;
    _gap _78D;
    _gap _78E;
    _gap _78F;
    _gap _790;
    _gap _791;
    _gap _792;
    _gap _793;
    _gap _794;
    _gap _795;
    _gap _796;
    _gap _797;
    _gap _798;
    _gap _799;
    _gap _79A;
    _gap _79B;
    _gap _79C;
    _gap _79D;
    _gap _79E;
    _gap _79F;
    _gap _7A0;
    _gap _7A1;
    _gap _7A2;
    _gap _7A3;
    _gap _7A4;
    _gap _7A5;
    _gap _7A6;
    _gap _7A7;
    _gap _7A8;
    _gap _7A9;
    _gap _7AA;
    _gap _7AB;
    _gap _7AC;
    _gap _7AD;
    _gap _7AE;
    _gap _7AF;
    _gap _7B0;
    _gap _7B1;
    _gap _7B2;
    _gap _7B3;
    _gap _7B4;
    _gap _7B5;
    _gap _7B6;
    _gap _7B7;
    _gap _7B8;
    _gap _7B9;
    _gap _7BA;
    _gap _7BB;
    _gap _7BC;
    _gap _7BD;
    _gap _7BE;
    _gap _7BF;
    _gap _7C0;
    _gap _7C1;
    _gap _7C2;
    _gap _7C3;
    _gap _7C4;
    _gap _7C5;
    _gap _7C6;
    _gap _7C7;
    _gap _7C8;
    _gap _7C9;
    _gap _7CA;
    _gap _7CB;
    _gap _7CC;
    _gap _7CD;
    _gap _7CE;
    _gap _7CF;
    _gap _7D0;
    _gap _7D1;
    _gap _7D2;
    _gap _7D3;
    _gap _7D4;
    _gap _7D5;
    _gap _7D6;
    _gap _7D7;
    _gap _7D8;
    _gap _7D9;
    _gap _7DA;
    _gap _7DB;
    _gap _7DC;
    _gap _7DD;
    _gap _7DE;
    _gap _7DF;
    _gap _7E0;
    _gap _7E1;
    _gap _7E2;
    _gap _7E3;
    _gap _7E4;
    _gap _7E5;
    _gap _7E6;
    _gap _7E7;
    _gap _7E8;
    _gap _7E9;
    _gap _7EA;
    _gap _7EB;
    _gap _7EC;
    _gap _7ED;
    _gap _7EE;
    _gap _7EF;
    _gap _7F0;
    _gap _7F1;
    _gap _7F2;
    _gap _7F3;
    _gap _7F4;
    _gap _7F5;
    _gap _7F6;
    _gap _7F7;
    _gap _7F8;
    _gap _7F9;
    _gap _7FA;
    _gap _7FB;
    _gap _7FC;
    _gap _7FD;
    _gap _7FE;
    _gap _7FF;
    _gap _800;
    _gap _801;
    _gap _802;
    _gap _803;
    _gap _804;
    _gap _805;
    _gap _806;
    _gap _807;
    _gap _808;
    _gap _809;
    _gap _80A;
    _gap _80B;
    _gap _80C;
    _gap _80D;
    _gap _80E;
    _gap _80F;
    _gap _810;
    _gap _811;
    _gap _812;
    _gap _813;
    _gap _814;
    _gap _815;
    _gap _816;
    _gap _817;
    _gap _818;
    _gap _819;
    _gap _81A;
    _gap _81B;
    _gap _81C;
    _gap _81D;
    _gap _81E;
    _gap _81F;
    _gap _820;
    _gap _821;
    _gap _822;
    _gap _823;
    _gap _824;
    _gap _825;
    _gap _826;
    _gap _827;
    _gap _828;
    _gap _829;
    _gap _82A;
    _gap _82B;
    _gap _82C;
    _gap _82D;
    _gap _82E;
    _gap _82F;
    _gap _830;
    _gap _831;
    _gap _832;
    _gap _833;
    _gap _834;
    _gap _835;
    _gap _836;
    _gap _837;
    _gap _838;
    _gap _839;
    _gap _83A;
    _gap _83B;
    _gap _83C;
    _gap _83D;
    _gap _83E;
    _gap _83F;
    _gap _840;
    _gap _841;
    _gap _842;
    _gap _843;
    _gap _844;
    _gap _845;
    _gap _846;
    _gap _847;
    _gap _848;
    _gap _849;
    _gap _84A;
    _gap _84B;
    _gap _84C;
    _gap _84D;
    _gap _84E;
    _gap _84F;
    _gap _850;
    _gap _851;
    _gap _852;
    _gap _853;
    _gap _854;
    _gap _855;
    _gap _856;
    _gap _857;
    _gap _858;
    _gap _859;
    _gap _85A;
    _gap _85B;
    _gap _85C;
    _gap _85D;
    _gap _85E;
    _gap _85F;
    _gap _860;
    _gap _861;
    _gap _862;
    _gap _863;
    _gap _864;
    _gap _865;
    _gap _866;
    _gap _867;
    _gap _868;
    _gap _869;
    _gap _86A;
    _gap _86B;
    _gap _86C;
    _gap _86D;
    _gap _86E;
    _gap _86F;
    _gap _870;
    _gap _871;
    _gap _872;
    _gap _873;
    _gap _874;
    _gap _875;
    _gap _876;
    _gap _877;
    _gap _878;
    _gap _879;
    _gap _87A;
    _gap _87B;
    _gap _87C;
    _gap _87D;
    _gap _87E;
    _gap _87F;
    _gap _880;
    _gap _881;
    _gap _882;
    _gap _883;
    _gap _884;
    _gap _885;
    _gap _886;
    _gap _887;
    _gap _888;
    _gap _889;
    _gap _88A;
    _gap _88B;
    _gap _88C;
    _gap _88D;
    _gap _88E;
    _gap _88F;
    _gap _890;
    _gap _891;
    _gap _892;
    _gap _893;
    _gap _894;
    _gap _895;
    _gap _896;
    _gap _897;
    _gap _898;
    _gap _899;
    _gap _89A;
    _gap _89B;
    _gap _89C;
    _gap _89D;
    _gap _89E;
    _gap _89F;
    _gap _8A0;
    _gap _8A1;
    _gap _8A2;
    _gap _8A3;
    _gap _8A4;
    _gap _8A5;
    _gap _8A6;
    _gap _8A7;
    _gap _8A8;
    _gap _8A9;
    _gap _8AA;
    _gap _8AB;
    _gap _8AC;
    _gap _8AD;
    _gap _8AE;
    _gap _8AF;
    _gap _8B0;
    _gap _8B1;
    _gap _8B2;
    _gap _8B3;
    _gap _8B4;
    _gap _8B5;
    _gap _8B6;
    _gap _8B7;
    _gap _8B8;
    _gap _8B9;
    _gap _8BA;
    _gap _8BB;
    _gap _8BC;
    _gap _8BD;
    _gap _8BE;
    _gap _8BF;
    _gap _8C0;
    _gap _8C1;
    _gap _8C2;
    _gap _8C3;
    _gap _8C4;
    _gap _8C5;
    _gap _8C6;
    _gap _8C7;
    _gap _8C8;
    _gap _8C9;
    _gap _8CA;
    _gap _8CB;
    _gap _8CC;
    _gap _8CD;
    _gap _8CE;
    _gap _8CF;
    _gap _8D0;
    _gap _8D1;
    _gap _8D2;
    _gap _8D3;
    _gap _8D4;
    _gap _8D5;
    _gap _8D6;
    _gap _8D7;
    _gap _8D8;
    _gap _8D9;
    _gap _8DA;
    _gap _8DB;
    _gap _8DC;
    _gap _8DD;
    _gap _8DE;
    _gap _8DF;
    _gap _8E0;
    _gap _8E1;
    _gap _8E2;
    _gap _8E3;
    _gap _8E4;
    _gap _8E5;
    _gap _8E6;
    _gap _8E7;
    _gap _8E8;
    _gap _8E9;
    _gap _8EA;
    _gap _8EB;
    _gap _8EC;
    _gap _8ED;
    _gap _8EE;
    _gap _8EF;
    _gap _8F0;
    _gap _8F1;
    _gap _8F2;
    _gap _8F3;
    _gap _8F4;
    _gap _8F5;
    _gap _8F6;
    _gap _8F7;
    _gap _8F8;
    _gap _8F9;
    _gap _8FA;
    _gap _8FB;
    _gap _8FC;
    _gap _8FD;
    _gap _8FE;
    _gap _8FF;
    _gap _900;
    _gap _901;
    _gap _902;
    _gap _903;
    _gap _904;
    _gap _905;
    _gap _906;
    _gap _907;
    _gap _908;
    _gap _909;
    _gap _90A;
    _gap _90B;
    _gap _90C;
    _gap _90D;
    _gap _90E;
    _gap _90F;
    _gap _910;
    _gap _911;
    _gap _912;
    _gap _913;
    _gap _914;
    _gap _915;
    _gap _916;
    _gap _917;
    _gap _918;
    _gap _919;
    _gap _91A;
    _gap _91B;
    _gap _91C;
    _gap _91D;
    _gap _91E;
    _gap _91F;
    _gap _920;
    _gap _921;
    _gap _922;
    _gap _923;
    _gap _924;
    _gap _925;
    _gap _926;
    _gap _927;
    _gap _928;
    _gap _929;
    _gap _92A;
    _gap _92B;
    _gap _92C;
    _gap _92D;
    _gap _92E;
    _gap _92F;
    _gap _930;
    _gap _931;
    _gap _932;
    _gap _933;
    _gap _934;
    _gap _935;
    _gap _936;
    _gap _937;
    _gap _938;
    _gap _939;
    _gap _93A;
    _gap _93B;
    _gap _93C;
    _gap _93D;
    _gap _93E;
    _gap _93F;
    _gap _940;
    _gap _941;
    _gap _942;
    _gap _943;
    TList* pirate_partners;
    _gap _948;
    _gap _949;
    _gap _94A;
    _gap _94B;
    _gap _94C;
    _gap _94D;
    _gap _94E;
    _gap _94F;
    _gap _950;
    _gap _951;
    _gap _952;
    _gap _953;
    _gap _954;
    _gap _955;
    _gap _956;
    _gap _957;
    _gap _958;
    _gap _959;
    bool pirate_clan_real;
    _gap _95B;
    int _95C;
    int exp_points_for_dominator_kills;
    int exp_points_for_pirate_kills;
    int exp_points_for_good_ship_kills;
    int exp_points_for_trade;
    byte bridge_num;  // 0 if not on bridge
    _gap _971;
    _gap _972;
    _gap _973;
    TRuins* bridge;
    TRuins* bridge_cur_ship;
    TPlanet* bridge_cur_planet;
    _gap _980;
    _gap _981;
    _gap _982;
    _gap _983;
    _gap _984;
    _gap _985;
    _gap _986;
    _gap _987;
    _gap_32 _988;
    _gap _98C;
    _gap _98D;
    _gap _98E;
    _gap _98F;
};