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
	{ 0x9977c450, "kmem_cache_destroy" },
	{ 0x1dedfa25, "simple_pin_fs" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x53b954a2, "up_read" },
	{ 0x3285c554, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x8954cecf, "inode_permission" },
	{ 0x98cf60b3, "strlen" },
	{ 0xbb763cd3, "get_tree_single" },
	{ 0xde65e05, "simple_release_fs" },
	{ 0xb324a8be, "_copy_from_iter" },
	{ 0xaa458a2b, "generic_delete_inode" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xb14e8e2, "dput" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd653dcee, "inc_nlink" },
	{ 0x9c6bcf1, "init_user_ns" },
	{ 0x364850b1, "down_write_killable" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x64d16f64, "d_add" },
	{ 0x26d7d5bf, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xadff5ecd, "d_delete" },
	{ 0x23b307b2, "ram_aops" },
	{ 0xc34a1b5d, "sysfs_remove_mount_point" },
	{ 0x853ca3af, "kern_path" },
	{ 0xdcb764ad, "memset" },
	{ 0x2a9ba784, "kill_litter_super" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd44e4013, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x587b0954, "kvasprintf" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x15a1dcc0, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3ebc223e, "kmem_cache_alloc" },
	{ 0xcef42ce3, "simple_unlink" },
	{ 0xf4b034e4, "simple_setattr" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0x6ec17570, "d_drop" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xb18b22ad, "simple_get_link" },
	{ 0xb4bee017, "path_put" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x8cf33ea6, "kmem_cache_create" },
	{ 0xbf97be4e, "register_filesystem" },
	{ 0x148653, "vsnprintf" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8e7cf3c7, "sysfs_create_mount_point" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xb78abc5, "kernel_kobj" },
	{ 0x36bf7926, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x55dd6478, "iunique" },
	{ 0x4829a47e, "memcpy" },
	{ 0x66f5f396, "current_time" },
	{ 0x22d380f8, "fsnotify" },
	{ 0x5c0fe4f2, "always_delete_dentry" },
	{ 0x8d55fd30, "d_make_root" },
	{ 0xa25e5f, "simple_statfs" },
	{ 0x7329c81f, "d_alloc_name" },
	{ 0x4857773a, "unregister_filesystem" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x383611b2, "new_inode" },
	{ 0x1d9affa0, "free_inode_nonrcu" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2fac4a63, "_copy_to_iter" },
	{ 0x567f0c5c, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6654f49c, "try_module_get" },
	{ 0x7996f4b8, "simple_rmdir" },
	{ 0xc90a9389, "__d_drop" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC1DB3508C53C477B672C9F");
