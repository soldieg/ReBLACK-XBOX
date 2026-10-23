__declspec(naked) void __cdecl sub_0001F910(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 10h
        mov eax, dword ptr [ebp + 8h]
        movss xmm0, dword ptr [eax + 28h]
        addss xmm0, dword ptr [eax + 14h]
        xorps xmm1, xmm1
        movss dword ptr [esp + 0ch], xmm0
        addss xmm0, dword ptr [eax]
        comiss xmm0, xmm1
        movss dword ptr [esp + 8h], xmm0
        jbe l1f9ab
        fld dword ptr [esp + 8h]
        movss xmm0, dword ptr [eax + 18h]
        __emit 0xD8
        __emit 0x05
        __emit 0x74
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        subss xmm0, dword ptr [eax + 24h]
        movss dword ptr [ecx], xmm0
        movss xmm0, dword ptr [eax + 20h]
        fsqrt
        subss xmm0, dword ptr [eax + 8h]
        movss dword ptr [ecx + 4h], xmm0
        movss xmm0, dword ptr [eax + 4h]
        subss xmm0, dword ptr [eax + 10h]
        movss dword ptr [ecx + 8h], xmm0
        movss dword ptr [ecx + 0ch], xmm1
        movaps xmm1, xmmword ptr [ecx]
        lea eax, [esp + 8h]
        __emit 0xD9
        __emit 0x05
        __emit 0x6C
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        fdiv st(0), st(1)
        fstp dword ptr [esp + 8h]
        movss xmm0, dword ptr [eax]
        shufps xmm0, xmm0, 0h
        __emit 0xD8
        __emit 0x0D
        __emit 0x6C
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        mulps xmm1, xmm0
        movaps xmmword ptr [ecx], xmm1
        fstp dword ptr [ecx + 0ch]
        mov esp, ebp
        pop ebp
        ret 4h
L1f9ab:
        movss xmm0, dword ptr [eax + 14h]
        comiss xmm0, dword ptr [eax]
        movss xmm0, dword ptr [eax + 28h]
        jbe l1f9ce
        comiss xmm0, dword ptr [eax + 14h]
        jbe l1f9c7
        mov edx, 2h
        jmp l1f9dc
L1f9c7:
        mov edx, 1h
        jmp l1f9dc
L1f9ce:
        comiss xmm0, dword ptr [eax]
        jbe l1f9da
        mov edx, 2h
        jmp l1f9dc
L1f9da:
        xor edx, edx
L1f9dc:
        sub edx, 0h
        jz l1fac1
        dec edx
        jz l1fa58
        dec edx
        jnz l1fb22
        fld dword ptr [eax]
        __emit 0xF3
        __emit 0x0F
        __emit 0x10
        __emit 0x05
        __emit 0x6C
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        fadd dword ptr [eax + 14h]
        fsubr dword ptr [eax + 28h]
        __emit 0xD8
        __emit 0x05
        __emit 0x74
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        fsqrt
        fst dword ptr [esp + 8h]
        __emit 0xD8
        __emit 0x0D
        __emit 0x6C
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        divss xmm0, dword ptr [esp + 8h]
        fstp dword ptr [ecx + 8h]
        movss xmm1, dword ptr [eax + 4h]
        subss xmm1, dword ptr [eax + 10h]
        mulss xmm1, xmm0
        movss dword ptr [ecx + 0ch], xmm1
        movss xmm1, dword ptr [eax + 20h]
        addss xmm1, dword ptr [eax + 8h]
        mulss xmm1, xmm0
        movss dword ptr [ecx], xmm1
        movss xmm1, dword ptr [eax + 24h]
        addss xmm1, dword ptr [eax + 18h]
        mulss xmm1, xmm0
        movss dword ptr [ecx + 4h], xmm1
        mov esp, ebp
        pop ebp
        ret 4h
L1fa58:
        fld dword ptr [eax]
        __emit 0xF3
        __emit 0x0F
        __emit 0x10
        __emit 0x05
        __emit 0x6C
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        fadd dword ptr [eax + 28h]
        fsubr dword ptr [eax + 14h]
        __emit 0xD8
        __emit 0x05
        __emit 0x74
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        fsqrt
        fst dword ptr [esp + 8h]
        __emit 0xD8
        __emit 0x0D
        __emit 0x6C
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        divss xmm0, dword ptr [esp + 8h]
        fstp dword ptr [ecx + 4h]
        movss xmm1, dword ptr [eax + 20h]
        subss xmm1, dword ptr [eax + 8h]
        mulss xmm1, xmm0
        movss dword ptr [ecx + 0ch], xmm1
        movss xmm1, dword ptr [eax + 24h]
        addss xmm1, dword ptr [eax + 18h]
        mulss xmm1, xmm0
        movss dword ptr [ecx + 8h], xmm1
        movss xmm1, dword ptr [eax + 10h]
        addss xmm1, dword ptr [eax + 4h]
        mulss xmm1, xmm0
        movss dword ptr [ecx], xmm1
        mov esp, ebp
        pop ebp
        ret 4h
L1fac1:
        fld dword ptr [eax]
        __emit 0xF3
        __emit 0x0F
        __emit 0x10
        __emit 0x05
        __emit 0x6C
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        fsub dword ptr [esp + 0ch]
        __emit 0xD8
        __emit 0x05
        __emit 0x74
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        fsqrt
        fst dword ptr [esp + 8h]
        __emit 0xD8
        __emit 0x0D
        __emit 0x6C
        __emit 0x5C
        __emit 0x29
        __emit 0x00
        divss xmm0, dword ptr [esp + 8h]
        fstp dword ptr [ecx]
        movss xmm1, dword ptr [eax + 18h]
        subss xmm1, dword ptr [eax + 24h]
        mulss xmm1, xmm0
        movss dword ptr [ecx + 0ch], xmm1
        movss xmm1, dword ptr [eax + 10h]
        addss xmm1, dword ptr [eax + 4h]
        mulss xmm1, xmm0
        movss dword ptr [ecx + 4h], xmm1
        movss xmm1, dword ptr [eax + 20h]
        addss xmm1, dword ptr [eax + 8h]
        mulss xmm1, xmm0
        movss dword ptr [ecx + 8h], xmm1
L1fb22:
        mov esp, ebp
        pop ebp
        ret 4h
    }
}
