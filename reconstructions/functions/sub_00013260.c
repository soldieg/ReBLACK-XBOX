extern void sub_00013120(void);
__declspec(naked) void sub_00013260(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff0h
        sub esp, 20h
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4h]
        mov dword ptr [esp], ecx
        mov ecx, dword ptr [eax + 8h]
        mov dword ptr [esp + 4h], edx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esp + 8h], ecx
        mov dword ptr [esp + 0ch], edx
        mov edx, dword ptr [ebp + 8h]
        lea eax, [esp + 10h]
        lea ecx, [esp]
        call sub_00013120
        mov ecx, dword ptr [esp]
        mov edx, dword ptr [esp + 4h]
        mov eax, esi
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 8h]
        mov dword ptr [eax + 4h], edx
        mov edx, dword ptr [esp + 0ch]
        mov dword ptr [eax + 8h], ecx
        mov dword ptr [eax + 0ch], edx
        mov esp, ebp
        pop ebp
        ret 4h
    }
}
