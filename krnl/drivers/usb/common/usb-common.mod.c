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
	{ 0x52e41417, "debugfs_create_dir" },
	{ 0x81188c30, "match_string" },
	{ 0xe0013e20, "of_parse_phandle" },
	{ 0x366d5fb8, "of_find_node_with_property" },
	{ 0xd69ef6ad, "of_device_is_available" },
	{ 0xfd628c72, "of_find_property" },
	{ 0x9d9bca2e, "of_property_read_string" },
	{ 0x961c9e5c, "debugfs_remove" },
	{ 0x9132e5b8, "device_property_read_string" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x547f0946, "led_trigger_unregister_simple" },
	{ 0x65f07353, "led_trigger_register_simple" },
	{ 0x1fca10d9, "led_trigger_blink_oneshot" },
	{ 0x25b46d03, "of_parse_phandle_with_args" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5aa9a668, "of_find_device_by_node" },
	{ 0x12e316f4, "of_property_read_variable_u32_array" },
};

MODULE_INFO(depends, "");

