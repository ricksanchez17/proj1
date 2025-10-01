cmd_drivers/hid/usbhid/usbhid.o := ld -EL  -maarch64elf -z noexecstack   -r -o drivers/hid/usbhid/usbhid.o drivers/hid/usbhid/hid-core.o drivers/hid/usbhid/hiddev.o drivers/hid/usbhid/hid-pidff.o
