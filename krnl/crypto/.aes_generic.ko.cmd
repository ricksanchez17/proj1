cmd_crypto/aes_generic.ko := ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o crypto/aes_generic.ko crypto/aes_generic.o crypto/aes_generic.mod.o;  true
