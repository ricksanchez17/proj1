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
	{ 0x2ffc18cd, "param_ops_bool" },
	{ 0x4abd93b, "pstore_unregister" },
	{ 0x51dd3de6, "pstore_register" },
	{ 0x18615d35, "efivar_supports_writes" },
	{ 0x424c262f, "efivars_kobject" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x75132628, "efivar_entry_add" },
	{ 0xad5737fc, "efivar_init" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0x2d971199, "__efivar_entry_get" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x15a1dcc0, "module_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6654f49c, "try_module_get" },
	{ 0x81b03377, "efivar_entry_set_safe" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe9514c75, "__efivar_entry_delete" },
	{ 0x9d61e994, "ucs2_strncmp" },
	{ 0x702946da, "ucs2_strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xd7399d2a, "efivar_entry_iter_end" },
	{ 0xa40e563c, "__efivar_entry_iter" },
	{ 0x968f9a23, "efivar_entry_iter_begin" },
	{ 0x4829a47e, "memcpy" },
	{ 0xed546236, "efivar_entry_find" },
};

MODULE_INFO(depends, "");

