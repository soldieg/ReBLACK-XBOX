__declspec(naked) void sub_00014D80(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 20h
        fld float ptr [ebp + 8h]
        fsin
        fstp float ptr [esp + 0Ch]
        movss xmm0, dword ptr [esp + 0Ch]
        movss dword ptr [esp + 10h], xmm0
        fld float ptr [ebp + 8h]
        fcos
        fstp float ptr [esp + 0Ch]
        mov edx, dword ptr [esp + 10h]
        movss xmm0, dword ptr [esp + 0Ch]
        mov ecx, eax
        mov dword ptr [ecx], edx
        movss dword ptr [esp + 14h], xmm0
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [ecx + 4h], edx
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [ecx + 8h], edx
        mov edx, dword ptr [esp + 1Ch]
        mov dword ptr [ecx + 0Ch], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
