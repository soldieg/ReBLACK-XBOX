/* Byte-level x86 reconstruction, corroborated by fresh REA instructions and XBE/candidate byte checks.
 * The semantic x87 adapter is preserved separately; body consumes ST(0) and returns EDX:EAX. */
#include <stdint.h>
__declspec(naked) int64_t __cdecl sub_000A34D4(void) { __asm {
 /* 000a34d4: push ebp */
 __emit 0x55;
 /* 000a34d5: mov ebp, esp */
 __emit 0x8B;
 __emit 0xEC;
 /* 000a34d7: sub esp, 0x20 */
 __emit 0x83;
 __emit 0xEC;
 __emit 0x20;
 /* 000a34da: and esp, 0xfffffff0 */
 __emit 0x83;
 __emit 0xE4;
 __emit 0xF0;
 /* 000a34dd: fld st(0) */
 __emit 0xD9;
 __emit 0xC0;
 /* 000a34df: fst dword ptr [esp + 0x18] */
 __emit 0xD9;
 __emit 0x54;
 __emit 0x24;
 __emit 0x18;
 /* 000a34e3: fistp qword ptr [esp + 0x10] */
 __emit 0xDF;
 __emit 0x7C;
 __emit 0x24;
 __emit 0x10;
 /* 000a34e7: fild qword ptr [esp + 0x10] */
 __emit 0xDF;
 __emit 0x6C;
 __emit 0x24;
 __emit 0x10;
 /* 000a34eb: mov edx, dword ptr [esp + 0x18] */
 __emit 0x8B;
 __emit 0x54;
 __emit 0x24;
 __emit 0x18;
 /* 000a34ef: mov eax, dword ptr [esp + 0x10] */
 __emit 0x8B;
 __emit 0x44;
 __emit 0x24;
 __emit 0x10;
 /* 000a34f3: test eax, eax */
 __emit 0x85;
 __emit 0xC0;
 /* 000a34f5: je 0xa3533 */
 __emit 0x74;
 __emit 0x3C;
 /* 000a34f7: fsubp st(1) */
 __emit 0xDE;
 __emit 0xE9;
 /* 000a34f9: test edx, edx */
 __emit 0x85;
 __emit 0xD2;
 /* 000a34fb: jns 0xa351b */
 __emit 0x79;
 __emit 0x1E;
 /* 000a34fd: fstp dword ptr [esp] */
 __emit 0xD9;
 __emit 0x1C;
 __emit 0x24;
 /* 000a3500: mov ecx, dword ptr [esp] */
 __emit 0x8B;
 __emit 0x0C;
 __emit 0x24;
 /* 000a3503: xor ecx, 0x80000000 */
 __emit 0x81;
 __emit 0xF1;
 __emit 0x00;
 __emit 0x00;
 __emit 0x00;
 __emit 0x80;
 /* 000a3509: add ecx, 0x7fffffff */
 __emit 0x81;
 __emit 0xC1;
 __emit 0xFF;
 __emit 0xFF;
 __emit 0xFF;
 __emit 0x7F;
 /* 000a350f: adc eax, 0 */
 __emit 0x83;
 __emit 0xD0;
 __emit 0x00;
 /* 000a3512: mov edx, dword ptr [esp + 0x14] */
 __emit 0x8B;
 __emit 0x54;
 __emit 0x24;
 __emit 0x14;
 /* 000a3516: adc edx, 0 */
 __emit 0x83;
 __emit 0xD2;
 __emit 0x00;
 /* 000a3519: jmp 0xa3547 */
 __emit 0xEB;
 __emit 0x2C;
 /* 000a351b: fstp dword ptr [esp] */
 __emit 0xD9;
 __emit 0x1C;
 __emit 0x24;
 /* 000a351e: mov ecx, dword ptr [esp] */
 __emit 0x8B;
 __emit 0x0C;
 __emit 0x24;
 /* 000a3521: add ecx, 0x7fffffff */
 __emit 0x81;
 __emit 0xC1;
 __emit 0xFF;
 __emit 0xFF;
 __emit 0xFF;
 __emit 0x7F;
 /* 000a3527: sbb eax, 0 */
 __emit 0x83;
 __emit 0xD8;
 __emit 0x00;
 /* 000a352a: mov edx, dword ptr [esp + 0x14] */
 __emit 0x8B;
 __emit 0x54;
 __emit 0x24;
 __emit 0x14;
 /* 000a352e: sbb edx, 0 */
 __emit 0x83;
 __emit 0xDA;
 __emit 0x00;
 /* 000a3531: jmp 0xa3547 */
 __emit 0xEB;
 __emit 0x14;
 /* 000a3533: mov edx, dword ptr [esp + 0x14] */
 __emit 0x8B;
 __emit 0x54;
 __emit 0x24;
 __emit 0x14;
 /* 000a3537: test edx, 0x7fffffff */
 __emit 0xF7;
 __emit 0xC2;
 __emit 0xFF;
 __emit 0xFF;
 __emit 0xFF;
 __emit 0x7F;
 /* 000a353d: jne 0xa34f7 */
 __emit 0x75;
 __emit 0xB8;
 /* 000a353f: fstp dword ptr [esp + 0x18] */
 __emit 0xD9;
 __emit 0x5C;
 __emit 0x24;
 __emit 0x18;
 /* 000a3543: fstp dword ptr [esp + 0x18] */
 __emit 0xD9;
 __emit 0x5C;
 __emit 0x24;
 __emit 0x18;
 /* 000a3547: leave */
 __emit 0xC9;
 /* 000a3548: ret */
 __emit 0xC3;
} }
