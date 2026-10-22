__declspec(naked) void __cdecl sub_000155A0(void)
{
    __asm {
        mov edx, dword ptr [esp + 4]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 0ch]
        mov dword ptr [eax + 8], ecx
        xor ecx, ecx
        mov dword ptr [eax + 0ch], ecx
        mov dword ptr [eax + 0d0h], ecx
        mov dword ptr [eax + 0dch], ecx
        mov dword ptr [eax + 50h], ecx
        mov dword ptr [eax + 0f0h], ecx
        mov dword ptr [eax + 0f8h], ecx
        mov dword ptr [eax + 14h], ecx
        mov dword ptr [eax + 0e8h], ecx
        movaps xmm0, xmmword ptr [edx]
        mov edx, dword ptr [esp + 10h]
        movaps xmmword ptr [eax + 20h], xmm0
        movaps xmm0, xmmword ptr [edx]
        movaps xmmword ptr [eax + 30h], xmm0
        mov edx, dword ptr [eax + 1ch]
        // Preserve the target's absolute float load without a relocation.
        __emit 0f3h
        __emit 00fh
        __emit 010h
        __emit 005h
        __emit 074h
        __emit 05ch
        __emit 029h
        __emit 000h
        movss dword ptr [eax + 0fch], xmm0
        mov dword ptr [eax + 100h], ecx
        mov dword ptr [eax + 18h], edx
        mov dword ptr [eax + 104h], ecx
        mov byte ptr [eax + 108h], cl
        ret 10h
    }
}
