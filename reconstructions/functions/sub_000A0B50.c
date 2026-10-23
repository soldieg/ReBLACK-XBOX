/* Exact x86 body from REA; semantic parameter and output types remain unverified. */
__declspec(naked) void sub_000A0B50(void)
{
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 0Ch]
        lea eax, [eax + eax * 2]
        shl eax, 7
        shl ecx, 8
        lea edx, [eax + ecx + 0Fh]
        mov eax, dword ptr [esp + 4]
        and edx, 0FFFFFFF0h
        xor ecx, ecx
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], 10h
        mov dword ptr [eax + 8], ecx
        mov dword ptr [eax + 0Ch], ecx
        ret
    }
}
