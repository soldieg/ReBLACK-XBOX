/*
 * Reconstrucao x86 exata para sub_00082050 (0x00082050).
 * REA: ev_dbbf6f41496b3bcf557c980b7ca7794e88e20cca07033fd0657a9a88d43e3416.
 * O segundo argumento e passado por endereco usando seu slot de entrada na pilha.
 * O rel32 da chamada fixa o layout original: 0x82069 -> 0x81FD0.
 */
#include <stdint.h>
typedef uint32_t XbeAddr32;
__declspec(naked) uint32_t __cdecl sub_00082050(XbeAddr32 object,uint32_t value,uint32_t mode,XbeAddr32 success_out){__asm{
 mov ecx,dword ptr [esp+0Ch]
 mov edx,dword ptr [esp+08h]
 lea eax,dword ptr [esp+08h]
 push eax
 mov eax,dword ptr [esp+08h]
 push ecx
 push edx
 push eax
 __emit 0xE8
 __emit 0x67
 __emit 0xFF
 __emit 0xFF
 __emit 0xFF
 mov ecx,dword ptr [esp+20h]
 add esp,10h
 test ecx,ecx
 jz short no_output
 xor edx,edx
 test eax,eax
 setnz dl
 mov dword ptr [ecx],edx
no_output:
 mov eax,dword ptr [esp+08h]
 ret
}}
