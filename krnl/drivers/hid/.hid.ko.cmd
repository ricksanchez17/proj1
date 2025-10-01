cmd_drivers/hid/hid.ko := ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/hid/hid.ko drivers/hid/hid.o drivers/hid/hid.mod.o;  true
