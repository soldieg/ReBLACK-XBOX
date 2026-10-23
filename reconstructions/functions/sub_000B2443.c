/* In-place ASCII uppercase-to-lowercase conversion; exact x86 body from REA. */
__declspec(naked) void sub_000B2443(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp byte ptr [eax], 0
        mov edx, eax
        jz L_done
    L_loop:
        mov cl, byte ptr [edx]
        cmp cl, 41h
        jl L_next
        cmp cl, 5Ah
        jg L_next
        add cl, 20h
        mov byte ptr [edx], cl
    L_next:
        inc edx
        cmp byte ptr [edx], 0
        jnz L_loop
    L_done:
        ret
    }
}
