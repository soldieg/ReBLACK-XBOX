/*
 * Reconstruct the observed 186-byte x86 body of sub_00082490. The declared item parameter is an adapter; callers supply the live-in through ESI.
 * ESI is a live-in item pointer. Relative calls/jumps are pinned to the original XBE layout.
 */
__declspec(naked) void __cdecl sub_00082490(void *item_adapter){__asm{
 test byte ptr [esi+62h],1
 __emit 0x0F
 __emit 0x84
 __emit 0xAF
 __emit 0x00
 __emit 0x00
 __emit 0x00
 mov eax,dword ptr [esi+4]
 mov ecx,dword ptr [esi]
 mov dword ptr [eax],ecx
 mov edx,dword ptr [esi]
 mov eax,dword ptr [esi+4]
 push edi
 mov dword ptr [edx+4],eax
 mov edi,dword ptr [esi+38h]
 test edi,edi
 __emit 0x74
 __emit 0x44
 push 0
 push 2
 push 8
 push edi
 __emit 0xE8
 __emit 0x93
 __emit 0xFB
 __emit 0xFF
 __emit 0xFF
 add esp,10h
 test eax,eax
 __emit 0x74
 __emit 0x0F
 push 0
 push 1
 push 8
 push edi
 __emit 0xE8
 __emit 0x30
 __emit 0xFB
 __emit 0xFF
 __emit 0xFF
 add esp,10h
 push 0
 push 1
 push 0Bh
 push edi
 __emit 0xE8
 __emit 0x51
 __emit 0xFB
 __emit 0xFF
 __emit 0xFF
 push 0
 push 1
 push 0Eh
 push edi
 __emit 0xE8
 __emit 0x45
 __emit 0xFB
 __emit 0xFF
 __emit 0xFF
 add esp,20h
 mov dword ptr [esi+38h],0
 __emit 0x8B
 __emit 0x0D
 __emit 0x78
 __emit 0x02
 __emit 0x2C
 __emit 0x00
 mov dword ptr [esi],ecx
 __emit 0x8B
 __emit 0x0D
 __emit 0x9C
 __emit 0x02
 __emit 0x2C
 __emit 0x00
 mov dword ptr [esi+4],02C0278h
 __emit 0x8B
 __emit 0x15
 __emit 0x78
 __emit 0x02
 __emit 0x2C
 __emit 0x00
 mov dword ptr [edx+4],esi
 __emit 0x8B
 __emit 0x15
 __emit 0x98
 __emit 0x02
 __emit 0x2C
 __emit 0x00
 __emit 0x89
 __emit 0x35
 __emit 0x78
 __emit 0x02
 __emit 0x2C
 __emit 0x00
 movzx eax,byte ptr [esi+61h]
 sub ecx,eax
 mov al,byte ptr [esi+62h]
 dec edx
 __emit 0x89
 __emit 0x0D
 __emit 0x9C
 __emit 0x02
 __emit 0x2C
 __emit 0x00
 mov ecx,dword ptr [esi+48h]
 and al,0FCh
 __emit 0x89
 __emit 0x15
 __emit 0x98
 __emit 0x02
 __emit 0x2C
 __emit 0x00
 mov dword ptr [esi+44h],ecx
 mov byte ptr [esi+62h],al
 mov byte ptr [esi+60h],0
 mov byte ptr [esi+61h],0
 pop edi
 ret
}}
