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
	{ 0x2d3385d3, "system_wq" },
	{ 0x9977c450, "kmem_cache_destroy" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd44e4013, "kmem_cache_free" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x800473f, "__cond_resched" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x3ebc223e, "kmem_cache_alloc" },
	{ 0x82d3f5ca, "unregister_shrinker" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x8cf33ea6, "kmem_cache_create" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xec0448a6, "register_shrinker" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");

