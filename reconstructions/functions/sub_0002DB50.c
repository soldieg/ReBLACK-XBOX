__declspec(naked) void __cdecl sub_0002DB50(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [esp + 4], eax
        jmp dword ptr [eax + 18h]
    }
}
