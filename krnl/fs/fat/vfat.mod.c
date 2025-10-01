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
	{ 0x31d657b6, "fat_detach" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xcc95cdc3, "drop_nlink" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x31ba9b0, "mark_buffer_dirty_inode" },
	{ 0xb457c6ba, "__mark_inode_dirty" },
	{ 0x7e856801, "fat_truncate_time" },
	{ 0xb14e8e2, "dput" },
	{ 0xd653dcee, "inc_nlink" },
	{ 0xe70b264a, "d_find_alias" },
	{ 0x3096be16, "names_cachep" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb8c63215, "mount_bdev" },
	{ 0x15db09a3, "fat_sync_inode" },
	{ 0x55639f2a, "fat_add_entries" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ce5f92d, "fat_remove_entries" },
	{ 0x7681b653, "fat_alloc_new_dir" },
	{ 0x754ee72, "fat_fill_super" },
	{ 0x9303eafb, "fat_build_inode" },
	{ 0x11089ac7, "_ctype" },
	{ 0xf74289a1, "fat_update_time" },
	{ 0x48a038ee, "fat_attach" },
	{ 0x5448fb8b, "d_move" },
	{ 0x5a921311, "strncmp" },
	{ 0xd44e4013, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1355cbbe, "set_nlink" },
	{ 0x559041b5, "sync_dirty_buffer" },
	{ 0xd6a9cd92, "fat_getattr" },
	{ 0x94add10b, "__brelse" },
	{ 0x3ebc223e, "kmem_cache_alloc" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x48af592, "kill_block_super" },
	{ 0x64782756, "fat_search_long" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0xcc1e382e, "fat_scan" },
	{ 0xbf97be4e, "register_filesystem" },
	{ 0x2255aca2, "__fat_fs_error" },
	{ 0x36bf7926, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x66f5f396, "current_time" },
	{ 0x7b3f818a, "d_splice_alias" },
	{ 0xf365668b, "fat_setattr" },
	{ 0x558fac7b, "fat_free_clusters" },
	{ 0x96a8030a, "fat_get_dotdot_entry" },
	{ 0x4857773a, "unregister_filesystem" },
	{ 0x1ba346ce, "fat_time_unix2fat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x22e48faa, "fat_dir_empty" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x567f0c5c, "d_instantiate" },
	{ 0xf9a94fb0, "clear_nlink" },
};

MODULE_INFO(depends, "fat");

