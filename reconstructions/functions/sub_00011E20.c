void __declspec(naked) sub_00011E20(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 1Ch
        push esi
        mov dword ptr [esp + 0Ch], 7FFFFFFFh
        mov esi, dword ptr [ebp + 8]
        movss xmm0, dword ptr [esp + 0Ch]
        shufps xmm0, xmm0, 0
        andps xmm0, xmmword ptr [esi]
        movaps xmmword ptr [esp + 10h], xmm0
        mov edx, dword ptr [esp + 10h]
        mov ecx, eax
        mov dword ptr [ecx], edx
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [ecx + 8], edx
        mov edx, dword ptr [esp + 1Ch]
        mov dword ptr [ecx + 0Ch], edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
