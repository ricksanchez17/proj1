#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe1dadf26, "module_layout" },
	{ 0xa7767c56, "hid_unregister_driver" },
	{ 0x28193882, "__hid_register_driver" },
	{ 0xb00602fc, "bus_for_each_drv" },
	{ 0x502118ad, "hid_bus_type" },
	{ 0xfb876794, "hid_hw_start" },
	{ 0xb6d764a8, "hid_open_report" },
	{ 0xa9760e4a, "hid_match_device" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b*g*v*p*");
