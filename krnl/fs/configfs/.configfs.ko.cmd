cmd_fs/configfs/configfs.ko := ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o fs/configfs/configfs.ko fs/configfs/configfs.o fs/configfs/configfs.mod.o;  true
