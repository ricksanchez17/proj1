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
	{ 0xb49a37bc, "bus_register" },
	{ 0x6e1586e1, "driver_register" },
	{ 0x4bdf2874, "of_device_is_compatible" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xf1e046cc, "panic" },
	{ 0xa9f4b3fd, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0xb156b654, "device_add" },
	{ 0xa3ff52a5, "_dev_err" },
	{ 0xb69dc615, "bus_unregister" },
	{ 0x800473f, "__cond_resched" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x77f79aeb, "of_get_next_available_child" },
	{ 0x36358f0f, "device_initialize" },
	{ 0x9aa191b5, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb13a4b1d, "dev_set_name" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");

