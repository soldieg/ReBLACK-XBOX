__declspec(naked) void __cdecl sub_00011000(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 1ch
        push esi
        mov dword ptr [esp + 0ch], ecx
        mov dword ptr [esp + 08h], 80000000h
        mov esi, dword ptr [esp + 0ch]
        movss xmm0, dword ptr [esp + 08h]
        shufps xmm0, xmm0, 0
        xorps xmm0, xmmword ptr [esi]
        movaps xmmword ptr [esp + 10h], xmm0
        mov eax, dword ptr [ebp + 08h]
        movaps xmm0, xmmword ptr [esp + 10h]
        movaps xmmword ptr [eax], xmm0
        pop esi
        mov esp, ebp
        pop ebp
        ret 4
    }
}
