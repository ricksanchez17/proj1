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
	{ 0x5b8efeed, "param_ops_uint" },
	{ 0x49c1808a, "unregister_virtio_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xc3bb3c7a, "register_virtio_driver" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xe8f00f13, "blk_queue_physical_block_size" },
	{ 0x6415da78, "blk_queue_alignment_offset" },
	{ 0x723542ac, "blk_queue_io_min" },
	{ 0x5d424f66, "blk_queue_io_opt" },
	{ 0x352b1e6c, "blk_queue_flag_set" },
	{ 0x9fc2b9cb, "blk_queue_max_discard_segments" },
	{ 0x631a928e, "blk_queue_max_discard_sectors" },
	{ 0x7b503b65, "blk_queue_max_write_zeroes_sectors" },
	{ 0xea92004b, "set_disk_ro" },
	{ 0xf27a5bdd, "blk_queue_logical_block_size" },
	{ 0xa3ff52a5, "_dev_err" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xc9a24dcd, "device_add_disk" },
	{ 0x2bed770f, "blk_queue_max_segment_size" },
	{ 0xf93c215b, "virtio_max_dma_size" },
	{ 0x3c48ee7f, "blk_queue_max_hw_sectors" },
	{ 0x7e5f55d6, "blk_queue_max_segments" },
	{ 0xbefd6e6, "__blk_mq_alloc_disk" },
	{ 0xf522f0e1, "blk_mq_alloc_tag_set" },
	{ 0xdcb764ad, "memset" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x267ed4f2, "blk_mq_unquiesce_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe9dea959, "blk_mq_stop_hw_queue" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa526e8a9, "virtqueue_kick" },
	{ 0xf7bcaef8, "virtqueue_add_sgs" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xb44a84a2, "__blk_rq_map_sg" },
	{ 0x1bee4974, "sg_alloc_table_chained" },
	{ 0xd5db0230, "blk_mq_start_request" },
	{ 0xb665a995, "virtqueue_notify" },
	{ 0x4fb1f845, "virtqueue_kick_prepare" },
	{ 0x304cab2c, "blk_mq_start_stopped_hw_queues" },
	{ 0xecf9ce5, "virtqueue_enable_cb" },
	{ 0x5863abd6, "virtqueue_is_broken" },
	{ 0x9df1f687, "virtqueue_get_buf" },
	{ 0x4e06666, "blk_mq_complete_request" },
	{ 0x48cfa21d, "virtqueue_disable_cb" },
	{ 0xab244e87, "blk_mq_free_tag_set" },
	{ 0x2c640553, "blk_cleanup_disk" },
	{ 0x8f726400, "del_gendisk" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xffb7c514, "ida_free" },
	{ 0xb9cbee45, "blk_queue_write_cache" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x66b3d1dc, "virtio_check_driver_offered_feature" },
	{ 0x274dd1a3, "sg_free_table_chained" },
	{ 0x401b60a0, "blk_mq_end_request" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3a626118, "set_capacity_and_notify" },
	{ 0xd32d3a36, "_dev_notice" },
	{ 0x48a91171, "string_get_size" },
	{ 0x800473f, "__cond_resched" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0xdfc68d6f, "blk_execute_rq" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4d8ee1a5, "blk_put_request" },
	{ 0xd970ed56, "blk_rq_map_kern" },
	{ 0xf14e2312, "blk_get_request" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4d59d9f9, "blk_mq_virtio_map_queues" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0xf130a447, "blk_mq_quiesce_queue" },
	{ 0x2f2c95c4, "flush_work" },
};

MODULE_INFO(depends, "virtio,virtio_ring");

MODULE_ALIAS("virtio:d00000002v*");
