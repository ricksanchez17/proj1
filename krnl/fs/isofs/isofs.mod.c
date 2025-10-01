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
	{ 0xb4951fa0, "iget_failed" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4c4faf1b, "sb_min_blocksize" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xa52449a9, "unload_nls" },
	{ 0x3285c554, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x334e8227, "iget5_locked" },
	{ 0x8fd63c20, "from_kuid_munged" },
	{ 0x4ef7da35, "seq_puts" },
	{ 0x92bc9dcd, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xec31ccd6, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x99d6570d, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x2a698fb7, "alloc_pages" },
	{ 0x9c6bcf1, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x6728a191, "mpage_readahead" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb8c63215, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xa3a43acb, "page_symlink_inode_operations" },
	{ 0x26d7d5bf, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x6b167e57, "__getblk_gfp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe4aeff60, "from_kgid_munged" },
	{ 0x423fc047, "make_kgid" },
	{ 0xdcb764ad, "memset" },
	{ 0xfcbd93fa, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0x5d004883, "__bread_gfp" },
	{ 0xdc0f89f9, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd0e7de9d, "cdrom_multisession" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0xd44e4013, "kmem_cache_free" },
	{ 0x1355cbbe, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7b8233c0, "__wait_on_buffer" },
	{ 0xa07a37f0, "memchr" },
	{ 0x83d927a, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0x83ba077f, "unlock_page" },
	{ 0x5b38f168, "inode_nohighmem" },
	{ 0x94add10b, "__brelse" },
	{ 0xb30404b1, "cdrom_read_tocentry" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x800473f, "__cond_resched" },
	{ 0x328bf857, "inode_init_once" },
	{ 0x3ebc223e, "kmem_cache_alloc" },
	{ 0x66bba4a8, "__free_pages" },
	{ 0x835b0991, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x55ad2c42, "load_nls" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x92997ed8, "_printk" },
	{ 0x814acf27, "unlock_new_inode" },
	{ 0x48af592, "kill_block_super" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x8cf33ea6, "kmem_cache_create" },
	{ 0xbf97be4e, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x36bf7926, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7b3f818a, "d_splice_alias" },
	{ 0x4e6c465f, "sync_filesystem" },
	{ 0xd02f5212, "sb_set_blocksize" },
	{ 0x8d55fd30, "d_make_root" },
	{ 0x4857773a, "unregister_filesystem" },
	{ 0x4dd9d9b7, "init_special_inode" },
	{ 0xeb9eef52, "match_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa6872212, "flush_dcache_page" },
	{ 0xbff1ab3b, "__put_page" },
	{ 0x70efba0f, "generic_block_bmap" },
};

MODULE_INFO(depends, "cdrom");

