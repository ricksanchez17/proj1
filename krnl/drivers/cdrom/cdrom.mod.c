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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6a449c4f, "register_sysctl_table" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2ffc18cd, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x797b7d3e, "invalidate_bdev" },
	{ 0xdcb764ad, "memset" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x319d493d, "proc_dostring" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd691c6a9, "unregister_sysctl_table" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");

