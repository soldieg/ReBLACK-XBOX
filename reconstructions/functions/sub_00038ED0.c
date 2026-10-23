/* Arguments: destination at [ESP+4], packed value at [ESP+8]. */
void __declspec(naked) sub_00038ED0(void)
{
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
        mov edx, eax
        shr edx, 8
        and dl, 0xf0
        mov byte ptr [ecx + 3], dl
        mov edx, eax
        shr edx, 4
        and dl, 0xf0
        mov byte ptr [ecx], dl
        mov dl, al
        and dl, 0xf0
        shl al, 4
        mov byte ptr [ecx + 1], dl
        mov byte ptr [ecx + 2], al
        ret
    }
}
