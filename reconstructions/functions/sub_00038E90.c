/* Arguments: destination at [ESP+4], packed value at [ESP+8]. */
void __declspec(naked) sub_00038E90(void)
{
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [esp + 4]
        mov edx, eax
        and edx, 0x8000
        neg edx
        sbb dl, dl
        and edx, 0xff
        mov byte ptr [ecx + 3], dl
        mov edx, eax
        shr edx, 7
        and dl, 0xf8
        mov byte ptr [ecx], dl
        mov edx, eax
        shr edx, 2
        and dl, 0xf8
        shl al, 3
        mov byte ptr [ecx + 1], dl
        mov byte ptr [ecx + 2], al
        ret
    }
}
