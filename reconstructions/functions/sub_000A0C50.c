/* Exact x86 body from REA; shared state at 0x002BE380 is not typed. */
__declspec(naked) void sub_000A0C50(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        mov edx, dword ptr [esp + 8]
        mov ecx, dword ptr [edx]
        push esi
        xor esi, esi
        cmp eax, esi
        jz L_null
        mov dword ptr [eax], esi
        mov dword ptr [eax + 54h], esi
        mov dword ptr [eax + 58h], esi
        mov dword ptr [eax + 5Ch], esi
        jmp L_join
    L_null:
        xor eax, eax
    L_join:
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 50h], esi
        lea ecx, [edx + 10h]
        mov dword ptr [eax + 54h], ecx
        lea ecx, [edx + 40h]
        mov dword ptr [eax + 5Ch], ecx
        __emit 8Bh
        __emit 0Dh
        __emit 80h
        __emit 0E3h
        __emit 2Bh
        __emit 00h
        movaps xmm0, xmmword ptr [ecx]
        movaps xmmword ptr [eax + 10h], xmm0
        movaps xmm0, xmmword ptr [ecx + 10h]
        movaps xmmword ptr [eax + 20h], xmm0
        movaps xmm0, xmmword ptr [ecx + 20h]
        movaps xmmword ptr [eax + 30h], xmm0
        movaps xmm0, xmmword ptr [ecx + 30h]
        movaps xmmword ptr [eax + 40h], xmm0
        cmp dword ptr [edx + 90h], esi
        jz L_zero
        lea ecx, [edx + 50h]
        mov dword ptr [eax + 50h], ecx
        pop esi
        ret
    L_zero:
        mov dword ptr [eax + 50h], esi
        pop esi
        ret
    }
}
