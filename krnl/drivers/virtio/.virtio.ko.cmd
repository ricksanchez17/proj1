cmd_drivers/virtio/virtio.ko := ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/virtio/virtio.ko drivers/virtio/virtio.o drivers/virtio/virtio.mod.o;  true
