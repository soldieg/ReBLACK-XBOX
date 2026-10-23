extern unsigned char dat_00295c90;
extern unsigned char dat_00288244;
__declspec(naked) void sub_00013BE0(void)
{
    __asm {
        push ecx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4h]
        push esi
        mov esi, ecx
        sar esi, 10h
        shl ecx, 10h
        add esi, edx
        add ecx, esi
        mov dword ptr [eax], ecx
        add ecx, edx
        mov dword ptr [eax + 4h], ecx
        mov eax, dword ptr [eax]
        test eax, eax
        mov dword ptr [esp + 4h], eax
        fild dword ptr [esp + 4h]
        jge L_13C0E
        fadd float ptr [dat_00295c90]
        L_13C0E:
        fmul float ptr [dat_00288244]
        pop esi
        pop ecx
        ret
    }
}
