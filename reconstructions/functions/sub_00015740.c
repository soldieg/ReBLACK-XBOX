__declspec(naked) void sub_00015740(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 1Ch
        test edx, edx
        mov ecx, dword ptr [ebp + 8h]
        push esi
        jnz L_15770
        mov esi, dword ptr [ecx]
        mov edx, eax
        mov dword ptr [edx], esi
        mov esi, dword ptr [ecx + 4h]
        mov dword ptr [edx + 4h], esi
        mov esi, dword ptr [ecx + 8h]
        mov dword ptr [edx + 8h], esi
        mov ecx, dword ptr [ecx + 0Ch]
        mov dword ptr [edx + 0Ch], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret 4h
        L_15770:
        cmp edx, 1h
        jnz L_15797
        add ecx, 10h
        mov esi, dword ptr [ecx]
        mov edx, eax
        mov dword ptr [edx], esi
        mov esi, dword ptr [ecx + 4h]
        mov dword ptr [edx + 4h], esi
        mov esi, dword ptr [ecx + 8h]
        mov dword ptr [edx + 8h], esi
        mov ecx, dword ptr [ecx + 0Ch]
        mov dword ptr [edx + 0Ch], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret 4h
        L_15797:
        cmp edx, 2h
        jnz L_157B8
        movss xmm0, dword ptr [ecx + 20h]
        movss xmm1, dword ptr [ecx + 30h]
        movss xmm2, dword ptr [ecx + 40h]
        movss dword ptr [esp + 10h], xmm0
        movss xmm0, dword ptr [ecx + 50h]
        jmp L_15814
        L_157B8:
        cmp edx, 3h
        jnz L_157D9
        movss xmm0, dword ptr [ecx + 24h]
        movss xmm1, dword ptr [ecx + 34h]
        movss xmm2, dword ptr [ecx + 44h]
        movss dword ptr [esp + 10h], xmm0
        movss xmm0, dword ptr [ecx + 54h]
        jmp L_15814
        L_157D9:
        cmp edx, 4h
        jnz L_157FA
        movss xmm0, dword ptr [ecx + 28h]
        movss xmm1, dword ptr [ecx + 38h]
        movss xmm2, dword ptr [ecx + 48h]
        movss dword ptr [esp + 10h], xmm0
        movss xmm0, dword ptr [ecx + 58h]
        jmp L_15814
        L_157FA:
        movss xmm0, dword ptr [ecx + 2Ch]
        movss xmm1, dword ptr [ecx + 3Ch]
        movss xmm2, dword ptr [ecx + 4Ch]
        movss dword ptr [esp + 10h], xmm0
        movss xmm0, dword ptr [ecx + 5Ch]
        L_15814:
        mov ecx, dword ptr [esp + 10h]
        mov edx, eax
        mov dword ptr [edx], ecx
        movss dword ptr [esp + 14h], xmm1
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [edx + 4h], ecx
        movss dword ptr [esp + 18h], xmm2
        mov ecx, dword ptr [esp + 18h]
        mov dword ptr [edx + 8h], ecx
        movss dword ptr [esp + 1Ch], xmm0
        mov ecx, dword ptr [esp + 1Ch]
        mov dword ptr [edx + 0Ch], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret 4h
    }
}
