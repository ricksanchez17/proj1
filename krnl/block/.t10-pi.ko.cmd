cmd_block/t10-pi.ko := ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o block/t10-pi.ko block/t10-pi.o block/t10-pi.mod.o;  true
