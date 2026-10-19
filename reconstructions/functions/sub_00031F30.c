/* Isolated exact-emission probe; canonical semantic source is untouched. */
__declspec(naked) double sub_00031F30(const float *matrix)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        fld dword ptr [eax + 14h]
        fmul dword ptr [eax + 24h]
        fld dword ptr [eax + 20h]
        fmul dword ptr [eax + 10h]
        faddp st(1), st(0)
        fld dword ptr [eax + 18h]
        fmul dword ptr [eax + 28h]
        faddp st(1), st(0)
        fld dword ptr [eax + 20h]
        fmul dword ptr [eax]
        fld dword ptr [eax + 24h]
        fmul dword ptr [eax + 4]
        faddp st(1), st(0)
        fld dword ptr [eax + 28h]
        fmul dword ptr [eax + 8]
        faddp st(1), st(0)
        fld dword ptr [eax + 14h]
        fmul dword ptr [eax + 4]
        fld dword ptr [eax + 10h]
        fmul dword ptr [eax]
        faddp st(1), st(0)
        fld dword ptr [eax + 18h]
        fmul dword ptr [eax + 8]
        faddp st(1), st(0)
        fld st(1)
        fmul st(0), st(2)
        fld st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fld st(1)
        fmul st(0), st(2)
        faddp st(1), st(0)
        fstp st(3)
        fstp st(0)
        fstp st(0)
        ret
    }
}
