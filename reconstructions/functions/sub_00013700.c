extern void sub_000135C0(void);
__declspec(naked) void sub_00013700(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 84h
        push ebx
        mov ebx, dword ptr [ebp + 8h]
        push esi
        mov esi, eax
        push edi
        lea eax, [esp + 50h]
        mov edx, esi
        call sub_000135C0
        movaps xmm0, xmmword ptr [eax]
        movaps xmmword ptr [esp + 10h], xmm0
        movaps xmm0, xmmword ptr [eax + 10h]
        movaps xmmword ptr [esp + 20h], xmm0
        movaps xmm0, xmmword ptr [eax + 20h]
        movaps xmmword ptr [esp + 30h], xmm0
        movaps xmm0, xmmword ptr [esi + 10h]
        mov edi, ebx
        mov ecx, 10h
        lea esi, [esp + 10h]
        movaps xmmword ptr [esp + 40h], xmm0
        rep movsd
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4h
    }
}
