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
	{ 0x705222a4, "kmalloc_caches" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1da7a2c0, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x22f31abb, "add_hwgenerator_randomness" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x1082edb3, "misc_register" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xfc604505, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x9b6fe83b, "__devres_alloc_node" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8038358e, "noop_llseek" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb80ec959, "devres_release" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x92997ed8, "_printk" },
	{ 0xd66c8184, "add_device_randomness" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x47bbfdf3, "wake_up_process" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x128a61d9, "devres_add" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x451c79ec, "param_ops_ushort" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x40f3f56f, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");

