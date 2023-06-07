#include <stdio.h>
#include <stdint.h>
#include <plugins.h>
#include <stdbool.h>
#include "darksouls.h"
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
void* spectrengine(void* args){
procrw(0x0411B962,verid1,1,0);
procrw(0x0411B966,verid2,1,0);
procrw(0x0411B968,verid3,1,0);
if(verid1[0]=='1'&&verid2[0]=='1'&&verid3[0]=='1'){
procrw(0x010C634C,DS111A,508,1);
procrw(0x041C7CC7,DS111B,419,1);
procrw(0x0163B715,DS111C,123,1);
procrw(0x01F6B35D,DS111D,31,1);
procrw(0x02111C73,DS111E,7,1);
procrw(0x01F6B28A,DS111F,6,1);
procrw(0x01357E1C,DS111G,3,1);
procrw(0x01358148,DS111H,3,1);
procrw(0x00F94B03,DS111J,2,1);
procrw(0x0159AA1E,DS111J,2,1);
procrw(0x01802936,DS111K,2,1);
procrw(0x02205C4D,DS111L,2,1);
procrw(0x0041F0A5,DS111M,1,1);
procrw(0x004F4DF5,DS111N,1,1);
procrw(0x004F4E05,DS111O,1,1);
procrw(0x00471C4D,DS111P,1,1);
procrw(0x010C5FEC,DS111Q,1,1);
procrw(0x010C62E1,DS111R,1,1);
procrw(0x010C633A,DS111S,1,1);
procrw(0x010C95E4,DS111T,1,1);
procrw(0x01639ED5,DS111U,1,1);
procrw(0x0163B6E9,DS111V,1,1);
procrw(0x01800337,DS111W,1,1);
procrw(0x010C95C9,DS111X,53,1);
procrw(0x00FE3883,DS111Y,669,1);
procrw(0x00FE3B40,DS11ZA,1,1);
procrw(0x00FE3530,DS11ZB,1,1);
procrw(0x00FE353D,DS11ZC,1,1);
procrw(0x00FE360C,DS11ZD,1,1);
procrw(0x00FE3629,DS11ZE,1,1);
procrw(0x00FE363E,DS11ZF,1,1);
procrw(0x00FE34D2,DS11ZG,1,1);
procrw(0x00FE1EEC,DS11ZH,1,1);
procrw(0x00FE341C,DS11ZJ,1,1);
procrw(0x00FE348D,DS11ZK,1,1);
procrw(0x00FE49F7,DS11ZL,1,1);
procrw(0x00FE4A24,DS11ZM,1,1);
procrw(0x00FE4AD4,DS11ZN,1,1);
procrw(0x00FE4AFD,DS11ZO,1,1);
}else{
procrw(0x04121242,verid1,1,0);
procrw(0x04121246,verid2,1,0);
procrw(0x04121248,verid3,1,0);
if(verid1[0]=='1'&&verid2[0]=='1'&&verid3[0]=='5'){
procrw(0x010CA26C,DS115A,508,1);
procrw(0x041CD384,DS115B,419,1);
procrw(0x01643C25,DS115C,123,1);
procrw(0x01F7152D,DS115D,31,1);
procrw(0x021180C3,DS115E,7,1);
procrw(0x01F7145A,DS115F,6,1);
procrw(0x0135C41C,DS115G,3,1);
procrw(0x0135C748,DS115H,3,1);
procrw(0x00F96943,DS115J,2,1);
procrw(0x0159FF6E,DS115J,2,1);
procrw(0x018081D6,DS115K,2,1);
procrw(0x0220C21D,DS115L,2,1);
procrw(0x0041F0A5,DS115M,1,1);
procrw(0x004F4DF5,DS115N,1,1);
procrw(0x004F4E05,DS115O,1,1);
procrw(0x00471C4D,DS115P,1,1);
procrw(0x010C9F0C,DS115Q,1,1);
procrw(0x010CA201,DS115R,1,1);
procrw(0x010CA25A,DS115S,1,1);
procrw(0x010CD514,DS115T,1,1);
procrw(0x016423E5,DS115U,1,1);
procrw(0x01643BF9,DS115V,1,1);
procrw(0x01805BD7,DS115W,1,1);
procrw(0x010CD4F9,DS115X,53,1);
procrw(0x00FE7413,DS115Y,669,1);
procrw(0x00FE76D0,DS15ZA,1,1);
procrw(0x00FE70C0,DS15ZB,1,1);
procrw(0x00FE70CD,DS15ZC,1,1);
procrw(0x00FE719C,DS15ZD,1,1);
procrw(0x00FE71B9,DS15ZE,1,1);
procrw(0x00FE71CE,DS15ZF,1,1);
procrw(0x00FE7062,DS15ZG,1,1);
procrw(0x00FE5A7C,DS15ZH,1,1);
procrw(0x00FE6FAC,DS15ZJ,1,1);
procrw(0x00FE701D,DS15ZK,1,1);
procrw(0x00FE8587,DS15ZL,1,1);
procrw(0x00FE85B4,DS15ZM,1,1);
procrw(0x00FE8664,DS15ZN,1,1);
procrw(0x00FE868D,DS15ZO,1,1);
}else{
procrw(0x0501B2D2,verid1,1,0);
procrw(0x0501B2D6,verid2,1,0);
procrw(0x0501B2D8,verid3,1,0);
if(verid1[0]=='1'&&verid2[0]=='0'&&verid3[0]=='0'){
procrw(0x04F97E88,DS100A,419,1);
procrw(0x0155E235,DS100B,125,1);
procrw(0x00F1C505,DS100C,124,1);
procrw(0x018354A7,DS100D,9,1);
procrw(0x02DBD2C9,DS100E,7,1);
procrw(0x0213CB4A,DS100F,6,1);
procrw(0x0132AD2C,DS100G,3,1);
procrw(0x0132AF42,DS100H,3,1);
procrw(0x00DC0036,DS100J,2,1);
procrw(0x00DC02B6,DS100J,2,1);
procrw(0x02437115,DS100K,2,1);
procrw(0x02F7EE95,DS100L,2,1);
procrw(0x00252C75,DS100M,1,1);
procrw(0x00252C85,DS100N,1,1);
procrw(0x001F2DBD,DS100O,1,1);
procrw(0x00F1CAF6,DS100P,1,1);
procrw(0x00AAC3F0,DS100Q,1,1);
procrw(0x0155DB45,DS100R,1,1);
procrw(0x0155E209,DS100S,1,1);
procrw(0x0180A67F,DS100T,1,1);
procrw(0x00E36AC0,DS100U,7,1);
procrw(0x0213CC0C,DS100V,31,1);
procrw(0x00AAC335,DS100W,313,1);}}}
scePthreadExit(NULL);
return NULL;}
int32_t attr_module_hidden module_start(size_t argc,const void *args){
if (sys_sdk_proc_info(&procInfo)){return 0;}
memcpy(auth, procInfo.titleid, sizeof(auth));
if(auth[4]=='0'&&auth[5]=='1'&&auth[6]=='3'&&auth[7]=='6'&&auth[8]=='8'){
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}
else{if(auth[4]=='0'&&auth[5]=='3'&&auth[6]=='3'&&auth[7]=='6'&&auth[8]=='5'){
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
scePthreadCreate(&engine, NULL, spectrengine, NULL, "spectrengine");}}}}}}}}
return 0;}
int32_t attr_module_hidden module_stop(size_t argc, const void *args){
return 0;}