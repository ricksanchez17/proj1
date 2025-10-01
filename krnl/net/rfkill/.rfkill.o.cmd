cmd_net/rfkill/rfkill.o := ld -EL  -maarch64elf -z noexecstack   -r -o net/rfkill/rfkill.o net/rfkill/core.o net/rfkill/input.o
