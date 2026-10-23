__declspec(naked) void __cdecl sub_0001F840(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 10h
        movss xmm0, dword ptr [ecx]
        movaps xmm1, xmmword ptr [edx + 30h]
        movaps xmm2, xmmword ptr [edx + 20h]
        movaps xmm3, xmmword ptr [edx + 10h]
        movaps xmm4, xmmword ptr [edx]
        mov eax, dword ptr [ebp + 08h]
        movss dword ptr [esp + 0ch], xmm0
        movss xmm0, dword ptr [ecx + 04h]
        movss dword ptr [esp + 08h], xmm0
        movss xmm0, dword ptr [ecx + 08h]
        movss dword ptr [esp + 04h], xmm0
        movss xmm0, dword ptr [ecx + 0ch]
        movss dword ptr [esp], xmm0
        lea ecx, [esp]
        movss xmm0, dword ptr [ecx]
        shufps xmm0, xmm0, 0
        mulps xmm1, xmm0
        lea ecx, [esp + 04h]
        movss xmm0, dword ptr [ecx]
        shufps xmm0, xmm0, 0
        mulps xmm2, xmm0
        lea ecx, [esp + 08h]
        movss xmm0, dword ptr [ecx]
        shufps xmm0, xmm0, 0
        mulps xmm3, xmm0
        lea ecx, [esp + 0ch]
        movss xmm0, dword ptr [ecx]
        shufps xmm0, xmm0, 0
        mulps xmm4, xmm0
        addps xmm4, xmm3
        addps xmm4, xmm2
        addps xmm4, xmm1
        movaps xmmword ptr [eax], xmm4
        mov esp, ebp
        pop ebp
        ret
    }
}
