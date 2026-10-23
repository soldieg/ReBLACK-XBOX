/* Exact x86 body from REA; data structure semantics remain unverified. */
__declspec(naked) void sub_000A0B90(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        test eax, eax
        jz L_null
        __emit 0F3h
        __emit 0Fh
        __emit 10h
        __emit 05h
        __emit 74h
        __emit 5Ch
        __emit 29h
        __emit 00h
        __emit 0F3h
        __emit 0Fh
        __emit 10h
        __emit 0Dh
        __emit 0E0h
        __emit 71h
        __emit 28h
        __emit 00h
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [eax], 0
        movss dword ptr [eax + 10h], xmm0
        movss dword ptr [eax + 14h], xmm0
        movss dword ptr [eax + 18h], xmm0
        movss dword ptr [eax + 1Ch], xmm0
        movss dword ptr [eax + 20h], xmm0
        movss dword ptr [eax + 24h], xmm0
        movss dword ptr [eax + 2Ch], xmm0
        xorps xmm0, xmm0
        movss dword ptr [eax + 28h], xmm1
        movss dword ptr [eax + 30h], xmm0
        movss dword ptr [eax + 34h], xmm0
        movss dword ptr [eax + 40h], xmm0
        movss dword ptr [eax + 44h], xmm0
        movss dword ptr [eax + 48h], xmm0
        mov dword ptr [eax + 90h], 0
        mov dword ptr [eax], ecx
        ret
    L_null:
        mov edx, dword ptr [esp + 8]
        xor eax, eax
        mov dword ptr [eax], edx
        ret
    }
}
