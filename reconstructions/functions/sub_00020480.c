__declspec(naked) void __cdecl sub_00020480(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 10h
        xorps xmm0, xmm0
        movaps xmmword ptr [esp], xmm0
        movss xmm0, dword ptr [ecx + 0ch]
        movss dword ptr [esp + 04h], xmm0
        movaps xmm0, xmmword ptr [ecx]
        movaps xmmword ptr [eax], xmm0
        movaps xmm0, xmmword ptr [ecx + 10h]
        movaps xmmword ptr [eax + 10h], xmm0
        movaps xmm0, xmmword ptr [ecx + 20h]
        movaps xmmword ptr [eax + 20h], xmm0
        movaps xmm0, xmmword ptr [ecx + 30h]
        movaps xmmword ptr [eax + 30h], xmm0
        movaps xmm1, xmmword ptr [eax]
        movaps xmm0, xmmword ptr [esp]
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
