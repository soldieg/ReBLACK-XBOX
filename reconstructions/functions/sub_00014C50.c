__declspec(naked) int __cdecl sub_00014C50(int left, int right)
{
    __asm {
        push ecx
        movd mm0, dword ptr [esp + 0ch]
        movd mm1, dword ptr [esp + 0ch]
        pcmpgtd mm0, qword ptr [esp + 8]
        pand mm1, mm0
        pandn mm0, qword ptr [esp + 8]
        por mm0, mm1
        movd dword ptr [esp], mm0
        emms
        mov eax, dword ptr [esp]
        pop ecx
        ret
    }
}