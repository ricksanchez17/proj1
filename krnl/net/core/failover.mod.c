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
	{ 0x34327463, "netdev_info" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0x7f54a822, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x30118d04, "netdev_master_upper_dev_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc3cf24bc, "netdev_upper_dev_unlink" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x94779adc, "netdev_rx_handler_unregister" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xccc5d777, "netdev_err" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "");

