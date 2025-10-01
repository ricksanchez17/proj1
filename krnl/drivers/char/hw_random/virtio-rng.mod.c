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
	{ 0x49c1808a, "unregister_virtio_driver" },
	{ 0xc3bb3c7a, "register_virtio_driver" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xd57fbd31, "hwrng_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb7c514, "ida_free" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa526e8a9, "virtqueue_kick" },
	{ 0xb81dae1a, "virtqueue_add_inbuf" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x20463df4, "wait_for_completion_killable" },
	{ 0xa6257a2f, "complete" },
	{ 0x9df1f687, "virtqueue_get_buf" },
	{ 0x617b026c, "hwrng_register" },
};

MODULE_INFO(depends, "virtio,rng-core,virtio_ring");

MODULE_ALIAS("virtio:d00000004v*");
