# sub_000DD6A0 — lote 82, exatidificação estática

Issue #8575. Ghidra 12.1.3 confirmou 1726 bytes de corpo em duas faixas no span de 1733 bytes; quatro callers, seis callees e cobertura completa, sem calls diretas pendentes. Análise `ev_2be8584d8710c667e3c612e791963af6c97dd80a6f98058e7607a9d6bcc62dcf`; bytes `ev_ae69d5ecdbb54d98993e1b2efa6e8652e2dede600ac57e2b7713f6db47623d33`.

REA, XBE raw offset `0xCD6A0`, PE derivada offset `0xCCA20`, split, candidato e objeto MSVC coincidem 1733/1733 bytes. SHA-256: `1A047604838AF237F160672721B71FB1D319467497CF3BC61AA43713F5946252`. MSVC 19.51.36260 x86, zero relocations; ObjDiff 3.8.2: símbolo e `.text` 100% contra `sub_000DD6A0.obj`.

O split chama a função cdecl; Ghidra descreve __stdcall, e os callsites relatados não limpam os três argumentos de stack. O objeto emitido preserva os bytes, mas não prova a declaração ABI nem C semântico. Xbox link, diff pós-link, runtime e gameplay pendentes. Sem ordinal até reconciliar roster; checkpoint 83/100. Relatório: `F:\REBLACK\XBOX\decompilacao\compilacao\lot82-sub_000DD6A0-recheck-20261027\static-byte-validation.json`.
