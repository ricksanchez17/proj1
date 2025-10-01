cmd_drivers/xen/xen-privcmd.o := ld -EL  -maarch64elf -z noexecstack   -r -o drivers/xen/xen-privcmd.o drivers/xen/privcmd.o drivers/xen/privcmd-buf.o
