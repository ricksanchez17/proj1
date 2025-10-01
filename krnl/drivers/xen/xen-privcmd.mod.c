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
	{ 0x7aa1756e, "kvfree" },
	{ 0xea181680, "vm_map_pages_zero" },
	{ 0x4b931968, "xen_features" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x61a6b3df, "__mmap_lock_do_trace_released" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbd628752, "__tracepoint_mmap_lock_start_locking" },
	{ 0x2a698fb7, "alloc_pages" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe29cb571, "__mmap_lock_do_trace_start_locking" },
	{ 0x1082edb3, "misc_register" },
	{ 0xdcb764ad, "memset" },
	{ 0xd12afb40, "xen_unmap_domain_gfn_range" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x45b61299, "apply_to_page_range" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x69d8837f, "alloc_xenballooned_pages" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcec27bcf, "xen_remap_vma_range" },
	{ 0xb55de460, "HYPERVISOR_dm_op" },
	{ 0x2c536324, "free_xenballooned_pages" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x1ed8ad02, "find_vma" },
	{ 0x66bba4a8, "__free_pages" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x8ba5afe9, "HYPERVISOR_memory_op" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x5efdd68b, "__tracepoint_mmap_lock_released" },
	{ 0xbe118c52, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x37a0cba, "kfree" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x742f0b60, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x8dbf7aaa, "privcmd_call" },
	{ 0x5b8efeed, "param_ops_uint" },
	{ 0xc7dcb00f, "unpin_user_pages_dirty_lock" },
	{ 0x40f3f56f, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x76503824, "xen_xlate_remap_gfn_array" },
	{ 0x3f51b8d5, "pin_user_pages_fast" },
};

MODULE_INFO(depends, "");

