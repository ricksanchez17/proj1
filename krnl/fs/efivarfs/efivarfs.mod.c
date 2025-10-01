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
	{ 0xf9a482f9, "msleep" },
	{ 0xcc95cdc3, "drop_nlink" },
	{ 0x7410aba2, "strreplace" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7673c399, "efivar_entry_delete" },
	{ 0x98cf60b3, "strlen" },
	{ 0xbb763cd3, "get_tree_single" },
	{ 0x465e24ff, "ucs2_utf8size" },
	{ 0x2be1a508, "simple_lookup" },
	{ 0x6ea5323f, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xaa458a2b, "generic_delete_inode" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xb14e8e2, "dput" },
	{ 0xd653dcee, "inc_nlink" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x8caf9305, "uuid_is_valid" },
	{ 0x64d16f64, "d_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xadff5ecd, "d_delete" },
	{ 0x2a9ba784, "kill_litter_super" },
	{ 0x11089ac7, "_ctype" },
	{ 0xffec74e3, "efivar_entry_remove" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcf8ca9e7, "efivar_entry_size" },
	{ 0xad5737fc, "efivar_init" },
	{ 0x7046bdf0, "simple_open" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x38335a81, "efivar_entry_set_get_size" },
	{ 0x6a3c14a4, "simple_dir_operations" },
	{ 0x4f79dbfb, "d_alloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf5a40142, "efivar_entry_get" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd93a5cb1, "efivar_variable_is_removable" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0xbf97be4e, "register_filesystem" },
	{ 0x9c86b9ab, "fileattr_fill_flags" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x36bf7926, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x75132628, "efivar_entry_add" },
	{ 0x66f5f396, "current_time" },
	{ 0x5c0fe4f2, "always_delete_dentry" },
	{ 0x8d55fd30, "d_make_root" },
	{ 0xa25e5f, "simple_statfs" },
	{ 0x54581a40, "inode_set_flags" },
	{ 0x4857773a, "unregister_filesystem" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x383611b2, "new_inode" },
	{ 0xa40e563c, "__efivar_entry_iter" },
	{ 0x3bb639b6, "clear_inode" },
	{ 0x18615d35, "efivar_supports_writes" },
	{ 0x567f0c5c, "d_instantiate" },
	{ 0x424c262f, "efivars_kobject" },
	{ 0x4336fcca, "ucs2_as_utf8" },
};

MODULE_INFO(depends, "");

