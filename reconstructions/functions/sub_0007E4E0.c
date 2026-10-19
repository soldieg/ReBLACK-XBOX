/* Byte-level x86 reconstruction backed by fresh REA instruction decode and split/XBE encoding cross-check.
 * The semantic C original is preserved separately; self/helper rel32 calls pin the original XBE layout. */
__declspec(naked) unsigned int __cdecl sub_0007E4E0(void) { __asm {
 /* 0007E4E0: sub esp, 0x1c */
 __emit 0x83
 __emit 0xEC
 __emit 0x1C
 /* 0007E4E3: push ebx */
 __emit 0x53
 /* 0007E4E4: mov ebx, dword ptr [esp + 0x24] */
 __emit 0x8B
 __emit 0x5C
 __emit 0x24
 __emit 0x24
 /* 0007E4E8: mov eax, dword ptr [ebx + 4] */
 __emit 0x8B
 __emit 0x43
 __emit 0x04
 /* 0007E4EB: push 0x286150 */
 __emit 0x68
 __emit 0x50
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E4F0: push eax */
 __emit 0x50
 /* 0007E4F1: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0x7A
 __emit 0x75
 __emit 0x00
 __emit 0x00
 /* 0007E4F6: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E4F9: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E4FB: je 0x7e531 */
 __emit 0x74
 __emit 0x34
 /* 0007E4FD: mov ecx, dword ptr [ebx + 4] */
 __emit 0x8B
 __emit 0x4B
 __emit 0x04
 /* 0007E500: push 0x286140 */
 __emit 0x68
 __emit 0x40
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E505: push ecx */
 __emit 0x51
 /* 0007E506: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0x65
 __emit 0x75
 __emit 0x00
 __emit 0x00
 /* 0007E50B: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E50E: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E510: jne 0x7e51c */
 __emit 0x75
 __emit 0x0A
 /* 0007E512: mov eax, 0x1c */
 __emit 0xB8
 __emit 0x1C
 __emit 0x00
 __emit 0x00
 __emit 0x00
 /* 0007E517: pop ebx */
 __emit 0x5B
 /* 0007E518: add esp, 0x1c */
 __emit 0x83
 __emit 0xC4
 __emit 0x1C
 /* 0007E51B: ret */
 __emit 0xC3
 /* 0007E51C: mov edx, dword ptr [ebx + 4] */
 __emit 0x8B
 __emit 0x53
 __emit 0x04
 /* 0007E51F: push 0x286160 */
 __emit 0x68
 __emit 0x60
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E524: push edx */
 __emit 0x52
 /* 0007E525: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0x46
 __emit 0x75
 __emit 0x00
 __emit 0x00
 /* 0007E52A: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E52D: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E52F: jne 0x7e53b */
 __emit 0x75
 __emit 0x0A
 /* 0007E531: mov eax, 1 */
 __emit 0xB8
 __emit 0x01
 __emit 0x00
 __emit 0x00
 __emit 0x00
 /* 0007E536: pop ebx */
 __emit 0x5B
 /* 0007E537: add esp, 0x1c */
 __emit 0x83
 __emit 0xC4
 __emit 0x1C
 /* 0007E53A: ret */
 __emit 0xC3
 /* 0007E53B: mov eax, dword ptr [ebx + 4] */
 __emit 0x8B
 __emit 0x43
 __emit 0x04
 /* 0007E53E: push 0x2861d0 */
 __emit 0x68
 __emit 0xD0
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E543: push eax */
 __emit 0x50
 /* 0007E544: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0x27
 __emit 0x75
 __emit 0x00
 __emit 0x00
 /* 0007E549: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E54C: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E54E: jne 0x7e55a */
 __emit 0x75
 __emit 0x0A
 /* 0007E550: mov eax, 0x600 */
 __emit 0xB8
 __emit 0x00
 __emit 0x06
 __emit 0x00
 __emit 0x00
 /* 0007E555: pop ebx */
 __emit 0x5B
 /* 0007E556: add esp, 0x1c */
 __emit 0x83
 __emit 0xC4
 __emit 0x1C
 /* 0007E559: ret */
 __emit 0xC3
 /* 0007E55A: mov ecx, dword ptr [ebx + 4] */
 __emit 0x8B
 __emit 0x4B
 __emit 0x04
 /* 0007E55D: push 0x286170 */
 __emit 0x68
 __emit 0x70
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E562: push ecx */
 __emit 0x51
 /* 0007E563: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0x08
 __emit 0x75
 __emit 0x00
 __emit 0x00
 /* 0007E568: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E56B: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E56D: jne 0x7e579 */
 __emit 0x75
 __emit 0x0A
 /* 0007E56F: mov eax, 0xe */
 __emit 0xB8
 __emit 0x0E
 __emit 0x00
 __emit 0x00
 __emit 0x00
 /* 0007E574: pop ebx */
 __emit 0x5B
 /* 0007E575: add esp, 0x1c */
 __emit 0x83
 __emit 0xC4
 __emit 0x1C
 /* 0007E578: ret */
 __emit 0xC3
 /* 0007E579: mov edx, dword ptr [ebx + 4] */
 __emit 0x8B
 __emit 0x53
 __emit 0x04
 /* 0007E57C: push 0x286180 */
 __emit 0x68
 __emit 0x80
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E581: push edx */
 __emit 0x52
 /* 0007E582: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0xE9
 __emit 0x74
 __emit 0x00
 __emit 0x00
 /* 0007E587: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E58A: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E58C: je 0x7e5f6 */
 __emit 0x74
 __emit 0x68
 /* 0007E58E: mov eax, dword ptr [ebx + 4] */
 __emit 0x8B
 __emit 0x43
 __emit 0x04
 /* 0007E591: push 0x2861e0 */
 __emit 0x68
 __emit 0xE0
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E596: push eax */
 __emit 0x50
 /* 0007E597: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0xD4
 __emit 0x74
 __emit 0x00
 __emit 0x00
 /* 0007E59C: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E59F: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E5A1: je 0x7e5f6 */
 __emit 0x74
 __emit 0x53
 /* 0007E5A3: mov ecx, dword ptr [ebx + 4] */
 __emit 0x8B
 __emit 0x4B
 __emit 0x04
 /* 0007E5A6: push 0x2861a0 */
 __emit 0x68
 __emit 0xA0
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E5AB: push ecx */
 __emit 0x51
 /* 0007E5AC: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0xBF
 __emit 0x74
 __emit 0x00
 __emit 0x00
 /* 0007E5B1: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E5B4: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E5B6: je 0x7e5ec */
 __emit 0x74
 __emit 0x34
 /* 0007E5B8: mov edx, dword ptr [ebx + 4] */
 __emit 0x8B
 __emit 0x53
 __emit 0x04
 /* 0007E5BB: push 0x2861b0 */
 __emit 0x68
 __emit 0xB0
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E5C0: push edx */
 __emit 0x52
 /* 0007E5C1: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0xAA
 __emit 0x74
 __emit 0x00
 __emit 0x00
 /* 0007E5C6: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E5C9: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007E5CB: je 0x7e5ec */
 __emit 0x74
 __emit 0x1F
 /* 0007E5CD: mov eax, dword ptr [ebx + 4] */
 __emit 0x8B
 __emit 0x43
 __emit 0x04
 /* 0007E5D0: push 0x2861c0 */
 __emit 0x68
 __emit 0xC0
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007E5D5: push eax */
 __emit 0x50
 /* 0007E5D6: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0x95
 __emit 0x74
 __emit 0x00
 __emit 0x00
 /* 0007E5DB: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007E5DE: neg eax */
 __emit 0xF7
 __emit 0xD8
 /* 0007E5E0: sbb eax, eax */
 __emit 0x1B
 __emit 0xC0
 /* 0007E5E2: and eax, 0x180 */
 __emit 0x25
 __emit 0x80
 __emit 0x01
 __emit 0x00
 __emit 0x00
 /* 0007E5E7: pop ebx */
 __emit 0x5B
 /* 0007E5E8: add esp, 0x1c */
 __emit 0x83
 __emit 0xC4
 __emit 0x1C
 /* 0007E5EB: ret */
 __emit 0xC3
 /* 0007E5EC: mov eax, 0x480 */
 __emit 0xB8
 __emit 0x80
 __emit 0x04
 __emit 0x00
 __emit 0x00
 /* 0007E5F1: pop ebx */
 __emit 0x5B
 /* 0007E5F2: add esp, 0x1c */
 __emit 0x83
 __emit 0xC4
 __emit 0x1C
 /* 0007E5F5: ret */
 __emit 0xC3
 /* 0007E5F6: mov cl, byte ptr [ebx + 0xd] */
 __emit 0x8A
 __emit 0x4B
 __emit 0x0D
 /* 0007E5F9: mov al, 1 */
 __emit 0xB0
 __emit 0x01
 /* 0007E5FB: cmp cl, al */
 __emit 0x3A
 __emit 0xC8
 /* 0007E5FD: jne 0x7e609 */
 __emit 0x75
 __emit 0x0A
 /* 0007E5FF: mov eax, 0x40 */
 __emit 0xB8
 __emit 0x40
 __emit 0x00
 __emit 0x00
 __emit 0x00
 /* 0007E604: pop ebx */
 __emit 0x5B
 /* 0007E605: add esp, 0x1c */
 __emit 0x83
 __emit 0xC4
 __emit 0x1C
 /* 0007E608: ret */
 __emit 0xC3
 /* 0007E609: push esi */
 __emit 0x56
 /* 0007E60A: push edi */
 __emit 0x57
 /* 0007E60B: mov ecx, 7 */
 __emit 0xB9
 __emit 0x07
 __emit 0x00
 __emit 0x00
 __emit 0x00
 /* 0007E610: mov esi, ebx */
 __emit 0x8B
 __emit 0xF3
 /* 0007E612: lea edi, [esp + 0xc] */
 __emit 0x8D
 __emit 0x7C
 __emit 0x24
 __emit 0x0C
 /* 0007E616: rep movsd dword ptr es:[edi], dword ptr [esi] */
 __emit 0xF3
 __emit 0xA5
 /* 0007E618: push ebx */
 __emit 0x53
 /* 0007E619: mov byte ptr [esp + 0x1d], al */
 __emit 0x88
 __emit 0x44
 __emit 0x24
 __emit 0x1D
 /* 0007E61D: call 0x7e0e0   -> sub_0007E0E0 */
 __emit 0xE8
 __emit 0xBE
 __emit 0xFA
 __emit 0xFF
 __emit 0xFF
 /* 0007E622: lea ecx, [esp + 0x10] */
 __emit 0x8D
 __emit 0x4C
 __emit 0x24
 __emit 0x10
 /* 0007E626: push ecx */
 __emit 0x51
 /* 0007E627: mov esi, eax */
 __emit 0x8B
 __emit 0xF0
 /* 0007E629: call 0x7e0e0   -> sub_0007E0E0 */
 __emit 0xE8
 __emit 0xB2
 __emit 0xFA
 __emit 0xFF
 __emit 0xFF
 /* 0007E62E: xor edx, edx */
 __emit 0x33
 __emit 0xD2
 /* 0007E630: div esi */
 __emit 0xF7
 __emit 0xF6
 /* 0007E632: lea edx, [esp + 0x14] */
 __emit 0x8D
 __emit 0x54
 __emit 0x24
 __emit 0x14
 /* 0007E636: push edx */
 __emit 0x52
 /* 0007E637: mov esi, eax */
 __emit 0x8B
 __emit 0xF0
 /* 0007E639: call 0x7e4e0   -> sub_0007E4E0 */
 __emit 0xE8
 __emit 0xA2
 __emit 0xFE
 __emit 0xFF
 __emit 0xFF
 /* 0007E63E: add esp, 0xc */
 __emit 0x83
 __emit 0xC4
 __emit 0x0C
 /* 0007E641: xor edx, edx */
 __emit 0x33
 __emit 0xD2
 /* 0007E643: pop edi */
 __emit 0x5F
 /* 0007E644: div esi */
 __emit 0xF7
 __emit 0xF6
 /* 0007E646: pop esi */
 __emit 0x5E
 /* 0007E647: pop ebx */
 __emit 0x5B
 /* 0007E648: add esp, 0x1c */
 __emit 0x83
 __emit 0xC4
 __emit 0x1C
 /* 0007E64B: ret */
 __emit 0xC3
 } }
