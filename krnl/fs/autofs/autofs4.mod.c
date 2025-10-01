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
	{ 0xcc95cdc3, "drop_nlink" },
	{ 0x3ce47894, "put_pid" },
	{ 0x349cba85, "strchr" },
	{ 0xfefbdc17, "get_task_pid" },
	{ 0x98cf60b3, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xd6f45983, "path_is_mountpoint" },
	{ 0x8fd63c20, "from_kuid_munged" },
	{ 0x7cac8c19, "pid_vnr" },
	{ 0x4ef7da35, "seq_puts" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xb14e8e2, "dput" },
	{ 0x99d6570d, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x44e9a829, "match_token" },
	{ 0xd653dcee, "inc_nlink" },
	{ 0x41332c6f, "dentry_open" },
	{ 0x9c6bcf1, "init_user_ns" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x64d16f64, "d_add" },
	{ 0x26d7d5bf, "generic_read_dir" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xec179369, "mount_nodev" },
	{ 0x96b0afe5, "path_get" },
	{ 0x2d8ecb8d, "may_umount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe4aeff60, "from_kgid_munged" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x423fc047, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x51b9b638, "dcache_dir_lseek" },
	{ 0x1082edb3, "misc_register" },
	{ 0x853ca3af, "kern_path" },
	{ 0xdcb764ad, "memset" },
	{ 0x2a9ba784, "kill_litter_super" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1355cbbe, "set_nlink" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8038358e, "noop_llseek" },
	{ 0xb1e4bd4c, "dentry_path_raw" },
	{ 0xa07a37f0, "memchr" },
	{ 0x4e3567f7, "match_int" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf7be2a63, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb6fde909, "close_fd" },
	{ 0x30acae76, "__task_pid_nr_ns" },
	{ 0x800473f, "__cond_resched" },
	{ 0xd6e3fe5e, "path_has_submounts" },
	{ 0xc6cbbc89, "capable" },
	{ 0x835b0991, "make_kuid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x92997ed8, "_printk" },
	{ 0x6ec17570, "d_drop" },
	{ 0x347eb770, "may_umount_tree" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb4bee017, "path_put" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x206cdb71, "simple_empty" },
	{ 0x3b18df78, "dcache_readdir" },
	{ 0xbf97be4e, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x21bfa1e1, "d_lookup" },
	{ 0xbb1577dc, "init_pid_ns" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x9eeea833, "find_get_pid" },
	{ 0xa73af866, "dcache_dir_open" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x3fe30050, "dcache_dir_close" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x1644b3ee, "follow_up" },
	{ 0x4829a47e, "memcpy" },
	{ 0x66f5f396, "current_time" },
	{ 0x95a22d33, "fd_install" },
	{ 0xc6065305, "fget" },
	{ 0x8d55fd30, "d_make_root" },
	{ 0x53af39ed, "__kernel_write" },
	{ 0xa25e5f, "simple_statfs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4857773a, "unregister_filesystem" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x383611b2, "new_inode" },
	{ 0x94614288, "follow_down_one" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3bb639b6, "clear_inode" },
	{ 0x40f3f56f, "misc_deregister" },
	{ 0xf9a94fb0, "clear_nlink" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

