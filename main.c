#include "main.h"
#include <stdio.h>
#include <stdint.h>
#include <plugins.h>
#include <stdbool.h>
#include <orbis/libkernel.h>
#define db 0x003FC000
struct proc_info procInfo;
struct proc_rw datawrite;
OrbisPthread engine;
char auth[16];
unsigned char verid1[1]={0};
unsigned char verid2[1]={0};
unsigned char verid3[1]={0};
void procrw(u64 cd,void *dw,u64 s,u64 flag){
datawrite.address=cd+db;
datawrite.data=dw;
datawrite.length=s;
datawrite.write_flags=flag;
sys_sdk_proc_rw(&datawrite);}
void *spectrengine(void *args){
procrw(0x0411B962,verid1,1,0);
procrw(0x0411B966,verid2,1,0);
procrw(0x0411B968,verid3,1,0);
if(verid1[0]=='1'&&verid2[0]=='1'&&verid3[0]=='1'){
procrw(0x00FE3883,DS111A,669,1);
procrw(0x010C634C,DS111B,508,1);
procrw(0x041C7CC7,DS111C,419,1);
procrw(0x041C7E6B,DS111D,272,1);
procrw(0x010C9567,DS111E,149,1);
procrw(0x0163B715,DS111F,123,1);
procrw(0x01F6B35D,DS111G,31,1);
procrw(0x0102ABAB,DS111H,20,1);
procrw(0x02111C73,DS111I,7,1);
procrw(0x01F6B28A,DS111J,6,1);
procrw(0x01357E1C,DS111K,3,1);
procrw(0x01358148,DS111L,3,1);
procrw(0x01802936,DS111M,2,1);
procrw(0x00F94B03,DS111N,2,1);
procrw(0x0159AA1E,DS111N,2,1);
procrw(0x02205C4D,DS111O,2,1);
procrw(0x00471C4D,DS111P,1,1);
procrw(0x004F4DF5,DS111Q,1,1);
procrw(0x004F4E05,DS111R,1,1);
procrw(0x01800337,DS111S,1,1);
procrw(0x01639ED5,DS111T,1,1);
procrw(0x0163B6E9,DS111U,1,1);
procrw(0x00FE3629,DS111U,1,1);
procrw(0x0041F0A5,DS111V,1,1);
procrw(0x010C5FEC,DS111W,1,1);
procrw(0x010C62E1,DS111X,1,1);
procrw(0x010C633A,DS111Y,1,1);
procrw(0x00FE3B40,DS111Z,1,1);
procrw(0x00FE3530,DS11ZA,1,1);
procrw(0x00FE353D,DS11ZB,1,1);
procrw(0x00FE360C,DS11ZC,1,1);
procrw(0x00FE363E,DS11ZD,1,1);
procrw(0x00FE34D2,DS11ZE,1,1);
procrw(0x00FE1EEC,DS11ZF,1,1);
procrw(0x00FE341C,DS11ZG,1,1);
procrw(0x00FE348D,DS11ZH,1,1);
procrw(0x00FE49F7,DS11ZI,1,1);
procrw(0x00FE4A24,DS11ZJ,1,1);
procrw(0x00FE4AD4,DS11ZK,1,1);
procrw(0x00FE4AFD,DS11ZL,1,1);
}else{
procrw(0x04121242,verid1,1,0);
procrw(0x04121246,verid2,1,0);
procrw(0x04121248,verid3,1,0);
if(verid1[0]=='1'&&verid2[0]=='1'&&verid3[0]=='5'){
procrw(0x00FE7413,DS115A,669,1);
procrw(0x010CA26C,DS115B,508,1);
procrw(0x041CD384,DS115C,419,1);
procrw(0x041CD528,DS115D,272,1);
procrw(0x010CD497,DS115E,149,1);
procrw(0x01643C25,DS115F,123,1);
procrw(0x01F7152D,DS115G,31,1);
procrw(0x0102E8BB,DS115H,20,1);
procrw(0x021180C3,DS115I,7,1);
procrw(0x01F7145A,DS115J,6,1);
procrw(0x0135C41C,DS115K,3,1);
procrw(0x0135C748,DS115L,3,1);
procrw(0x018081D6,DS115M,2,1);
procrw(0x00F96943,DS115N,2,1);
procrw(0x0159FF6E,DS115N,2,1);
procrw(0x0220C21D,DS115O,2,1);
procrw(0x00471C4D,DS115P,1,1);
procrw(0x004F4DF5,DS115Q,1,1);
procrw(0x004F4E05,DS115R,1,1);
procrw(0x01805BD7,DS115S,1,1);
procrw(0x016423E5,DS115T,1,1);
procrw(0x01643BF9,DS115U,1,1);
procrw(0x00FE71B9,DS115U,1,1);
procrw(0x0041F0A5,DS115V,1,1);
procrw(0x010C9F0C,DS115W,1,1);
procrw(0x010CA201,DS115X,1,1);
procrw(0x010CA25A,DS115Y,1,1);
procrw(0x00FE76D0,DS115Z,1,1);
procrw(0x00FE70C0,DS15ZA,1,1);
procrw(0x00FE70CD,DS15ZB,1,1);
procrw(0x00FE719C,DS15ZC,1,1);
procrw(0x00FE71CE,DS15ZD,1,1);
procrw(0x00FE7062,DS15ZE,1,1);
procrw(0x00FE5A7C,DS15ZF,1,1);
procrw(0x00FE6FAC,DS15ZG,1,1);
procrw(0x00FE701D,DS15ZH,1,1);
procrw(0x00FE8587,DS15ZI,1,1);
procrw(0x00FE85B4,DS15ZJ,1,1);
procrw(0x00FE8664,DS15ZK,1,1);
procrw(0x00FE868D,DS15ZL,1,1);
}else{
procrw(0x0501B2D2,verid1,1,0);
procrw(0x0501B2D6,verid2,1,0);
procrw(0x0501B2D8,verid3,1,0);
if(verid1[0]=='1'&&verid2[0]=='0'&&verid3[0]=='0'){
procrw(0x04F97E88,DS100A,419,1);
procrw(0x04F9802C,DS100B,352,1);
procrw(0x00AAC335,DS100C,313,1);
procrw(0x0155E235,DS100D,125,1);
procrw(0x00F1C505,DS100E,124,1);
procrw(0x0213CC0C,DS100F,31,1);
procrw(0x018354A7,DS100G,9,1);
procrw(0x02DBD2C9,DS100H,7,1);
procrw(0x00E36AC0,DS100I,7,1);
procrw(0x0213CB4A,DS100J,6,1);
procrw(0x00E776B2,DS100K,5,1);
procrw(0x0132AD2C,DS100L,3,1);
procrw(0x0132AF42,DS100M,3,1);
procrw(0x00DC0036,DS100N,2,1);
procrw(0x00DC02B6,DS100N,2,1);
procrw(0x02437115,DS100O,2,1);
procrw(0x02F7EE95,DS100P,2,1);
procrw(0x0155DB45,DS100Q,1,1);
procrw(0x0155E209,DS100R,1,1);
procrw(0x001F2DBD,DS100S,1,1);
procrw(0x00252C75,DS100T,1,1);
procrw(0x00252C85,DS100U,1,1);
procrw(0x00F1CAF6,DS100V,1,1);
procrw(0x0180A67F,DS100W,1,1);
}else{
procrw(0x058D880C,verid1,1,0);
procrw(0x058D880D,verid2,1,0);
procrw(0x058D880E,verid3,1,0);
if(verid1[0]=='0'&&verid2[0]=='1'&&verid3[0]=='2'){
procrw(0x01B3CF31,DSTSTA,368,1);
procrw(0x01A66278,DSTSTB,344,1);
procrw(0x04E91D66,DSTSTC,336,1);
procrw(0x016E03B7,DSTSTD,153,1);
procrw(0x01AA3691,DSTSTE,8,1);
//procrw(0x0236F8A5,DSTSTF,6,1);
//procrw(0x0236F8A6,DSTSTG,5,1);
//procrw(0x0236F8E7,DSTSTH,3,1);
//procrw(0x0236F8E7,DSTSTI,3,1);
procrw(0x019F4016,DSTSTJ,2,1);
procrw(0x01B3CF07,DSTSTK,1,1);
procrw(0x01B3CF25,DSTSTL,1,1);
procrw(0x01B3D58F,DSTSTM,1,1);
procrw(0x01B3D6AC,DSTSTN,1,1);
procrw(0x01A663F0,DSTSTO,1,1);
procrw(0x01A67254,DSTSTP,1,1);
procrw(0x01A671B0,DSTSTQ,1,1);
procrw(0x01A67187,DSTSTR,1,1);
procrw(0x01A65F9B,DSTSTS,1,1);
procrw(0x01A66011,DSTSTT,1,1);
procrw(0x01A660DC,DSTSTU,1,1);
procrw(0x01A660EA,DSTSTV,1,1);
procrw(0x05B56D6C,DSTSTW,1,1);}}}}
scePthreadExit(NULL);
return NULL;}
int32_t attr_module_hidden module_start(size_t argc,const void *args){
if(sys_sdk_proc_info(&procInfo)){return 0;}
memcpy(auth, procInfo.titleid, sizeof(auth));
if(auth[4]=='0'&&auth[5]=='1'&&auth[6]=='3'&&auth[7]=='6'&&auth[8]=='8'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='3'&&auth[6]=='3'&&auth[7]=='6'&&auth[8]=='5'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='3'&&auth[6]=='3'&&auth[7]=='8'&&auth[8]=='7'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='3'&&auth[6]=='3'&&auth[7]=='8'&&auth[8]=='8'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='3'&&auth[6]=='4'&&auth[7]=='3'&&auth[8]=='4'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='7'&&auth[6]=='3'&&auth[7]=='3'&&auth[8]=='9'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='7'&&auth[6]=='4'&&auth[7]=='3'&&auth[8]=='9'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='7'&&auth[6]=='4'&&auth[7]=='5'&&auth[8]=='3'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='8'&&auth[6]=='1'&&auth[7]=='5'&&auth[8]=='5'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}}}}}}}}}
return 0;}
int32_t attr_module_hidden module_stop(size_t argc,const void *args){
return 0;}