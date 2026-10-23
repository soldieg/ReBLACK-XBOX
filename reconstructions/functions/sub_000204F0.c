__declspec(naked) void __cdecl sub_000204F0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 40h
        movaps xmm1, xmmword ptr [ecx + 10h]
        movaps xmm0, xmmword ptr [ecx]
        subps xmm0, xmm1
        movaps xmmword ptr [esp], xmm0
        xorps xmm0, xmm0
        movaps xmmword ptr [eax], xmm1
        movaps xmmword ptr [esp + 20h], xmm0
        movaps xmmword ptr [esp + 10h], xmm0
        movaps xmmword ptr [esp + 30h], xmm0
        movss xmm0, dword ptr [esp]
        movss dword ptr [esp + 20h], xmm0
        movss xmm0, dword ptr [esp + 04h]
        movss dword ptr [esp + 34h], xmm0
        movss xmm0, dword ptr [esp + 08h]
        movss dword ptr [esp + 18h], xmm0
        movaps xmm0, xmmword ptr [ecx + 10h]
        movaps xmm1, xmmword ptr [esp + 10h]
        addps xmm0, xmm1
        movaps xmm1, xmmword ptr [esp + 20h]
        movaps xmmword ptr [eax + 10h], xmm0
        movaps xmm0, xmmword ptr [ecx + 10h]
        addps xmm0, xmm1
        movaps xmmword ptr [eax + 30h], xmm0
        movaps xmm0, xmmword ptr [eax + 10h]
        addps xmm0, xmm1
        movaps xmmword ptr [eax + 20h], xmm0
        movaps xmm1, xmmword ptr [eax]
        movaps xmm0, xmmword ptr [esp + 30h]
        addps xmm1, xmm0
        movaps xmmword ptr [eax + 40h], xmm1
        movaps xmm1, xmmword ptr [eax + 10h]
        addps xmm1, xmm0
        movaps xmmword ptr [eax + 50h], xmm1
        movaps xmm1, xmmword ptr [eax + 20h]
        addps xmm1, xmm0
        movaps xmmword ptr [eax + 60h], xmm1
        movaps xmm1, xmmword ptr [eax + 30h]
        addps xmm1, xmm0
        movaps xmmword ptr [eax + 70h], xmm1
        mov esp, ebp
        pop ebp
        ret
    }
}
