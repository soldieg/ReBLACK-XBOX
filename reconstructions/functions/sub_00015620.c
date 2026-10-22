__declspec(naked) void __cdecl sub_00015620(void)
{
    __asm {
        // Preserve the target's absolute scalar load without a relocation.
        __emit 08bh
        __emit 00dh
        __emit 02ch
        __emit 0e6h
        __emit 02bh
        __emit 000h
        xorps xmm0, xmm0
        mov dword ptr [eax + 58h], ecx
        movss dword ptr [eax + 4ch], xmm0
        xor ecx, ecx
        mov dword ptr [eax + 50h], ecx
        mov dword ptr [eax + 54h], ecx
        // Preserve the target's absolute global-pointer load without a relocation.
        __emit 08bh
        __emit 00dh
        __emit 080h
        __emit 0e3h
        __emit 02bh
        __emit 000h
        mov dword ptr [eax + 5ch], 1
        movaps xmm0, xmmword ptr [ecx]
        movaps xmmword ptr [eax], xmm0
        movaps xmm0, xmmword ptr [ecx + 10h]
        movaps xmmword ptr [eax + 10h], xmm0
        movaps xmm0, xmmword ptr [ecx + 20h]
        movaps xmmword ptr [eax + 20h], xmm0
        movaps xmm0, xmmword ptr [ecx + 30h]
        movaps xmmword ptr [eax + 30h], xmm0
        movss xmm0, dword ptr [esp + 4]
        movss dword ptr [eax + 4ch], xmm0
        movss xmm0, dword ptr [esp + 8]
        movss dword ptr [eax + 40h], xmm0
        ret 8
    }
}
