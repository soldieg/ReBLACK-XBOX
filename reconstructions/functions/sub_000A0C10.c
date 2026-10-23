/* Exact x86 body from REA; semantic parameter types remain unverified. */
__declspec(naked) void sub_000A0C10(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax]
        xor ecx, ecx
        cmp eax, ecx
        jz L_null
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], ecx
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0Ch], ecx
        mov dword ptr [eax + 10h], ecx
        jmp L_join
    L_null:
        xor eax, eax
    L_join:
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 0Ch]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [eax + 0Ch], ecx
        mov dword ptr [eax + 8], edx
        ret
    }
}
