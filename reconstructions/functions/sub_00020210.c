extern void __cdecl sub_000202C0(void);
__declspec(naked) void __cdecl sub_00020210(void)
{
    __asm {
        mov dword ptr [esi + 4], 00295170h
        mov dword ptr [esi + 20210h], 00295298h
        lea eax, [esi + 20220h]
        mov dword ptr [esi + 2021ch], 0029535ch
        ; Keep the observed local call displacement from the dashboard candidate.
        __emit 0xE8
        __emit 0x8A
        __emit 0x00
        __emit 0x00
        __emit 0x00
        mov dword ptr [esi + 20f78h], 00295338h
        mov dword ptr [esi + 20f90h], 00295268h
        mov dword ptr [esi + 20fa0h], 002952bch
        mov dword ptr [esi + 20fd8h], 00295388h
        mov dword ptr [esi + 21028h], 002953c0h
        mov dword ptr [esi + 21030h], 00295220h
        mov dword ptr [esi + 21034h], 002951a8h
        mov dword ptr [esi + 21038h], 002953e0h
        mov dword ptr [esi + 2103ch], 002952f4h
        mov dword ptr [esi + 21048h], 002953ach
        mov dword ptr [esi + 2104ch], 0029528ch
        mov dword ptr [esi + 21058h], 00295234h
        mov dword ptr [esi + 210a0h], 002951f8h
        mov eax, esi
        ret
    }
}
