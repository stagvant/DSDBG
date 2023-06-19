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
void *spectrengine(void *args){
procrw(0x0411B962,verid1,1,0);
procrw(0x0411B966,verid2,1,0);
procrw(0x0411B968,verid3,1,0);
if(verid1[0]=='1'&&verid2[0]=='1'&&verid3[0]=='1'){
procrw(0x00FE3883,DS111A,669,1);
procrw(0x010C634C,DS111B,508,1);
procrw(0x041C7CC7,DS111C,419,1);
procrw(0x010C9567,DS111D,149,1);
procrw(0x0163B715,DS111E,123,1);
procrw(0x01F6B35D,DS111F,31,1);
procrw(0x02111C73,DS111G,7,1);
procrw(0x01F6B28A,DS111H,6,1);
procrw(0x01357E1C,DS111J,3,1);
procrw(0x01358148,DS111K,3,1);
procrw(0x01802936,DS111L,2,1);
procrw(0x00F94B03,DS111M,2,1);
procrw(0x0159AA1E,DS111M,2,1);
procrw(0x02205C4D,DS111N,2,1);
procrw(0x00471C4D,DS111O,1,1);
procrw(0x004F4DF5,DS111P,1,1);
procrw(0x004F4E05,DS111Q,1,1);
procrw(0x01800337,DS111R,1,1);
procrw(0x01639ED5,DS111S,1,1);
procrw(0x0163B6E9,DS111T,1,1);
procrw(0x00FE3629,DS111T,1,1);
procrw(0x0041F0A5,DS111U,1,1);
procrw(0x010C5FEC,DS111V,1,1);
procrw(0x010C62E1,DS111W,1,1);
procrw(0x010C633A,DS111X,1,1);
procrw(0x00FE3B40,DS111Y,1,1);
procrw(0x00FE3530,DS111Z,1,1);
procrw(0x00FE353D,DS11ZA,1,1);
procrw(0x00FE360C,DS11ZB,1,1);
procrw(0x00FE363E,DS11ZC,1,1);
procrw(0x00FE34D2,DS11ZD,1,1);
procrw(0x00FE1EEC,DS11ZE,1,1);
procrw(0x00FE341C,DS11ZF,1,1);
procrw(0x00FE348D,DS11ZG,1,1);
procrw(0x00FE49F7,DS11ZH,1,1);
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
procrw(0x010CD497,DS115D,149,1);
procrw(0x01643C25,DS115E,123,1);
procrw(0x01F7152D,DS115F,31,1);
procrw(0x021180C3,DS115G,7,1);
procrw(0x01F7145A,DS115H,6,1);
procrw(0x0135C41C,DS115J,3,1);
procrw(0x0135C748,DS115K,3,1);
procrw(0x018081D6,DS115L,2,1);
procrw(0x00F96943,DS115M,2,1);
procrw(0x0159FF6E,DS115M,2,1);
procrw(0x0220C21D,DS115N,2,1);
procrw(0x00471C4D,DS115O,1,1);
procrw(0x004F4DF5,DS115P,1,1);
procrw(0x004F4E05,DS115Q,1,1);
procrw(0x01805BD7,DS115R,1,1);
procrw(0x016423E5,DS115S,1,1);
procrw(0x01643BF9,DS115T,1,1);
procrw(0x00FE71B9,DS115T,1,1);
procrw(0x0041F0A5,DS115U,1,1);
procrw(0x010C9F0C,DS115V,1,1);
procrw(0x010CA201,DS115W,1,1);
procrw(0x010CA25A,DS115X,1,1);
procrw(0x00FE76D0,DS115Y,1,1);
procrw(0x00FE70C0,DS115Z,1,1);
procrw(0x00FE70CD,DS15ZA,1,1);
procrw(0x00FE719C,DS15ZB,1,1);
procrw(0x00FE71CE,DS15ZC,1,1);
procrw(0x00FE7062,DS15ZD,1,1);
procrw(0x00FE5A7C,DS15ZE,1,1);
procrw(0x00FE6FAC,DS15ZF,1,1);
procrw(0x00FE701D,DS15ZG,1,1);
procrw(0x00FE8587,DS15ZH,1,1);
procrw(0x00FE85B4,DS15ZJ,1,1);
procrw(0x00FE8664,DS15ZK,1,1);
procrw(0x00FE868D,DS15ZL,1,1);
}else{
procrw(0x0501B2D2,verid1,1,0);
procrw(0x0501B2D6,verid2,1,0);
procrw(0x0501B2D8,verid3,1,0);
if(verid1[0]=='1'&&verid2[0]=='0'&&verid3[0]=='0'){
procrw(0x04F97E88,DS100A,419,1);
procrw(0x00AAC335,DS100B,313,1);
procrw(0x0155E235,DS100C,125,1);
procrw(0x00F1C505,DS100D,124,1);
procrw(0x0213CC0C,DS100E,31,1);
procrw(0x018354A7,DS100F,9,1);
procrw(0x02DBD2C9,DS100G,7,1);
procrw(0x00E36AC0,DS100H,7,1);
procrw(0x0213CB4A,DS100J,6,1);
procrw(0x0132AD2C,DS100K,3,1);
procrw(0x0132AF42,DS100L,3,1);
procrw(0x00DC0036,DS100M,2,1);
procrw(0x00DC02B6,DS100M,2,1);
procrw(0x02437115,DS100N,2,1);
procrw(0x02F7EE95,DS100O,2,1);
procrw(0x0155DB45,DS100P,1,1);
procrw(0x0155E209,DS100Q,1,1);
procrw(0x01F2DBD,DS100R,1,1);
procrw(0x00252C75,DS100S,1,1);
procrw(0x00252C85,DS100T,1,1);
procrw(0x00F1CAF6,DS100U,1,1);
procrw(0x0180A67F,DS100V,1,1);}}}
scePthreadExit(NULL);
return NULL;}
int32_t attr_module_hidden module_start(size_t argc,const void *args){
if(sys_sdk_proc_info(&procInfo)){return 0;}
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
int32_t attr_module_hidden module_stop(size_t argc,const void *args){
return 0;}