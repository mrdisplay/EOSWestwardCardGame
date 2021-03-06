#ifndef TEMPLET_DB_Equip4_H
#define TEMPLET_DB_Equip4_H
#include <map>
#include <tuple>
#include <string>
#include <vector>
#include <eosiolib/eosio.hpp>
using namespace std;
using namespace eosio;
struct DB_Equip4_Data
{
int id;
int Class;
int daoju_id;
int nameber;
int Gold;
};
class DB_Equip4;
static DB_Equip4* DB_Equip4_instanse = nullptr;
class DB_Equip4
{
public:
static DB_Equip4* getInstanse()
{
    if(DB_Equip4_instanse)
        return  DB_Equip4_instanse;
        DB_Equip4_instanse = new DB_Equip4();
    return  DB_Equip4_instanse;
}
int getCount()
{
    return db_data.size();
}
vector<int> getAllIds()
{
    vector<int> ids;
    for(auto &it : db_data)
    {
        ids.push_back(it.first);
    }
    return ids;
}
const DB_Equip4_Data& getDataById(int id)
{
    auto iter = db_data.find(id);
    eosio_assert(iter==db_data.end(),"id is not exist");
    return iter->second;
};
private:
    map<int,DB_Equip4_Data> db_data;
public:
DB_Equip4()
{
    db_data[0] = {0,0,11003,1,3000};
    db_data[1] = {1,1,11003,1,3000};
    db_data[2] = {2,2,11003,1,3000};
    db_data[3] = {3,3,11003,1,3000};
    db_data[4] = {4,4,11003,2,6000};
    db_data[5] = {5,5,11003,3,9000};
    db_data[6] = {6,6,11003,4,12000};
    db_data[7] = {7,7,11003,5,15000};
    db_data[8] = {8,8,11003,6,18000};
    db_data[9] = {9,9,11003,7,21000};
    db_data[10] = {10,10,11003,8,24000};
    db_data[11] = {11,11,11003,9,27000};
    db_data[12] = {12,12,11003,10,30000};
    db_data[13] = {13,13,11003,11,33000};
    db_data[14] = {14,14,11003,24,72000};
    db_data[15] = {15,15,11003,26,78000};
    db_data[16] = {16,16,11003,28,84000};
    db_data[17] = {17,17,11003,30,90000};
    db_data[18] = {18,18,11003,32,96000};
    db_data[19] = {19,19,11003,34,102000};
    db_data[20] = {20,20,11003,36,108000};
    db_data[21] = {21,21,11003,38,114000};
    db_data[22] = {22,22,11003,40,120000};
    db_data[23] = {23,23,11003,42,126000};
    db_data[24] = {24,24,11003,44,132000};
    db_data[25] = {25,25,11003,46,138000};
    db_data[26] = {26,26,11003,48,144000};
    db_data[27] = {27,27,11003,50,150000};
    db_data[28] = {28,28,11003,52,156000};
    db_data[29] = {29,29,11003,54,162000};
    db_data[30] = {30,30,11003,56,168000};
    db_data[31] = {31,31,11003,58,174000};
    db_data[32] = {32,32,11003,60,180000};
    db_data[33] = {33,33,11003,62,186000};
    db_data[34] = {34,34,11003,64,192000};
    db_data[35] = {35,35,11003,66,198000};
    db_data[36] = {36,36,11003,68,204000};
    db_data[37] = {37,37,11003,70,210000};
    db_data[38] = {38,38,11003,72,216000};
    db_data[39] = {39,39,11003,74,222000};
    db_data[40] = {40,40,11003,76,228000};
    db_data[41] = {41,41,11003,78,234000};
    db_data[42] = {42,42,11003,80,240000};
    db_data[43] = {43,43,11003,82,246000};
    db_data[44] = {44,44,11003,84,252000};
    db_data[45] = {45,45,11003,86,258000};
    db_data[46] = {46,46,11003,88,264000};
    db_data[47] = {47,47,11003,90,270000};
    db_data[48] = {48,48,11003,92,276000};
    db_data[49] = {49,49,11003,94,282000};
    db_data[50] = {50,50,11003,96,288000};
    db_data[51] = {51,51,11003,98,294000};
    db_data[52] = {52,52,11003,100,300000};
    db_data[53] = {53,53,11003,102,306000};
    db_data[54] = {54,54,11003,104,312000};
    db_data[55] = {55,55,11003,106,318000};
    db_data[56] = {56,56,11003,108,324000};
    db_data[57] = {57,57,11003,110,330000};
    db_data[58] = {58,58,11003,112,336000};
    db_data[59] = {59,59,11003,114,342000};
    db_data[60] = {60,60,11003,116,348000};
    db_data[61] = {61,61,11003,118,354000};
    db_data[62] = {62,62,11003,120,360000};
    db_data[63] = {63,63,11003,122,366000};
    db_data[64] = {64,64,11003,124,372000};
    db_data[65] = {65,65,11003,126,378000};
    db_data[66] = {66,66,11003,128,384000};
    db_data[67] = {67,67,11003,130,390000};
    db_data[68] = {68,68,11003,132,396000};
    db_data[69] = {69,69,11003,134,402000};
    db_data[70] = {70,70,11003,136,408000};
    db_data[71] = {71,71,11003,138,414000};
    db_data[72] = {72,72,11003,140,420000};
    db_data[73] = {73,73,11003,142,426000};
    db_data[74] = {74,74,11003,144,432000};
    db_data[75] = {75,75,11003,146,438000};
    db_data[76] = {76,76,11003,148,444000};
    db_data[77] = {77,77,11003,150,450000};
    db_data[78] = {78,78,11003,152,456000};
    db_data[79] = {79,79,11003,154,462000};
    db_data[80] = {80,80,11003,156,468000};
    db_data[81] = {81,81,11003,158,474000};
    db_data[82] = {82,82,11003,160,480000};
    db_data[83] = {83,83,11003,162,486000};
    db_data[84] = {84,84,11003,164,492000};
    db_data[85] = {85,85,11003,166,498000};
    db_data[86] = {86,86,11003,168,504000};
    db_data[87] = {87,87,11003,170,510000};
    db_data[88] = {88,88,11003,172,516000};
    db_data[89] = {89,89,11003,174,522000};
    db_data[90] = {90,90,11003,176,528000};
    db_data[91] = {91,91,11003,178,534000};
    db_data[92] = {92,92,11003,180,540000};
    db_data[93] = {93,93,11003,182,546000};
    db_data[94] = {94,94,11003,184,552000};
    db_data[95] = {95,95,11003,186,558000};
    db_data[96] = {96,96,11003,188,564000};
    db_data[97] = {97,97,11003,190,570000};
    db_data[98] = {98,98,11003,192,576000};
    db_data[99] = {99,99,11003,194,582000};
    db_data[100] = {100,100,11003,196,588000};
    db_data[101] = {101,101,11003,232,594000};
    db_data[102] = {102,102,11003,236,600000};
    db_data[103] = {103,103,11003,240,606000};
    db_data[104] = {104,104,11003,244,612000};
    db_data[105] = {105,105,11003,248,618000};
    db_data[106] = {106,106,11003,252,624000};
    db_data[107] = {107,107,11003,256,630000};
    db_data[108] = {108,108,11003,260,636000};
    db_data[109] = {109,109,11003,264,642000};
    db_data[110] = {110,110,11003,268,648000};
    db_data[111] = {111,111,11003,272,654000};
    db_data[112] = {112,112,11003,276,660000};
    db_data[113] = {113,113,11003,280,666000};
    db_data[114] = {114,114,11003,284,672000};
    db_data[115] = {115,115,11003,0,0};
}
};
#endif //TEMPLET_DB_BATTLEAI_H
