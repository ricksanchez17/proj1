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
	{ 0xa77ab0c6, "usb_deregister_device_driver" },
	{ 0x3f426b3c, "usb_register_device_driver" },
	{ 0xa3ff52a5, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf5686e7f, "usb_get_dev" },
	{ 0x916d9df3, "power_supply_register" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xe66f35a, "usb_control_msg" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x235813e7, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xcb97a627, "__pm_runtime_resume" },
	{ 0x59f9a8aa, "__dynamic_dev_dbg" },
	{ 0x6c5c18c7, "power_supply_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x6f411b0a, "usb_put_dev" },
	{ 0x99888dcc, "power_supply_unregister" },
};

MODULE_INFO(depends, "usbcore");

MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*ic*isc*ip*in*");
