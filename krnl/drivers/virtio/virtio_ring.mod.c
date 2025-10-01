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
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe906b1cb, "dma_free_attrs" },
	{ 0x70e1e8e, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x35932af5, "dma_alloc_attrs" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xa3ff52a5, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9ae2059, "dma_max_mapping_size" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5a2020ab, "dma_map_page_attrs" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x3f0d72f6, "dev_driver_string" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xb9c43c2, "dma_unmap_page_attrs" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
};

MODULE_INFO(depends, "");

