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
	{ 0x4fec4e16, "kill_anon_super" },
	{ 0x49c1808a, "unregister_virtio_driver" },
	{ 0xc3bb3c7a, "register_virtio_driver" },
	{ 0x2a698fb7, "alloc_pages" },
	{ 0x99dd730c, "page_reporting_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x244bbaec, "__ClearPageMovable" },
	{ 0x37e3ec9b, "vm_event_states" },
	{ 0xd445f202, "__SetPageMovable" },
	{ 0xc709d2c7, "node_data" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xa3ff52a5, "_dev_err" },
	{ 0x82d3f5ca, "unregister_shrinker" },
	{ 0xc617f82c, "unregister_oom_notifier" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3c69789e, "kern_unmount" },
	{ 0x36bf7926, "iput" },
	{ 0x764ffefa, "page_reporting_register" },
	{ 0x622c7922, "register_oom_notifier" },
	{ 0xec0448a6, "register_shrinker" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x869a00d, "virtqueue_get_vring_size" },
	{ 0x1e45768e, "balloon_aops" },
	{ 0xcaa10045, "alloc_anon_inode" },
	{ 0x8632843a, "kern_mount" },
	{ 0x37a0cba, "kfree" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0xbc97c0f6, "_dev_info" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x9e1a1870, "balloon_page_enqueue" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x83d30518, "balloon_page_alloc" },
	{ 0x2d099083, "adjust_managed_page_count" },
	{ 0xbff1ab3b, "__put_page" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x1ded2be0, "balloon_page_dequeue" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x70e1e8e, "_dev_warn" },
	{ 0xddafdd31, "vm_node_stat" },
	{ 0x785a93b4, "si_mem_available" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x7278d328, "all_vm_events" },
	{ 0x66b3d1dc, "virtio_check_driver_offered_feature" },
	{ 0xfaaa12d0, "_page_poisoning_enabled" },
	{ 0xf6f9d58d, "init_on_free" },
	{ 0xb706153d, "init_pseudo" },
	{ 0xb81dae1a, "virtqueue_add_inbuf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9df1f687, "virtqueue_get_buf" },
	{ 0x800473f, "__cond_resched" },
	{ 0xa526e8a9, "virtqueue_kick" },
	{ 0x32daa1a1, "virtqueue_add_outbuf" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x3eeb2322, "__wake_up" },
};

MODULE_INFO(depends, "virtio,virtio_ring");

MODULE_ALIAS("virtio:d00000005v*");
