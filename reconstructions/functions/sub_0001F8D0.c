__declspec(naked) void __cdecl sub_0001F8D0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        movaps xmm0, xmmword ptr [eax]
        mov ecx, dword ptr [ebp + 10h]
        movaps xmm1, xmmword ptr [ecx]
        mov eax, dword ptr [ebp + 08h]
        shufps xmm0, xmm0, 0c9h
        shufps xmm1, xmm1, 0d2h
        movaps xmm3, xmm0
        shufps xmm3, xmm0, 0c9h
        movaps xmm2, xmm1
        shufps xmm2, xmm1, 0d2h
        mulps xmm3, xmm2
        mulps xmm0, xmm1
        subps xmm0, xmm3
        and esp, 0fffffff0h
        movaps xmmword ptr [eax], xmm0
        mov esp, ebp
        pop ebp
        ret
    }
}
