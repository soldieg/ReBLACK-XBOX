/* Exact-byte x86 emitter reconstructed from the verified Xbox body. */
__declspec(naked) void *sub_00035DC0(void *arg1, void *arg2, unsigned int arg3, void *arg4)
{
    __asm {
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 0Ch]
        mov edx, dword ptr [esp + 08h]
        push esi
        mov esi, dword ptr [esp + 08h]
        push eax
        _emit 0A1h
        _emit 03Ch
        _emit 02Dh
        _emit 02Bh
        _emit 000h
        push ecx
        push edx
        push esi
        call dword ptr [eax + 056A66Ch]
        add esp, 10h
        mov eax, esi
        pop esi
        ret
    }
}
