cmd_lib/crypto/libaes.ko := ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o lib/crypto/libaes.ko lib/crypto/libaes.o lib/crypto/libaes.mod.o;  true
