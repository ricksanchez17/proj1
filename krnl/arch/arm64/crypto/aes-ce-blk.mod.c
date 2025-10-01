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
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0x50a803fc, "crypto_alloc_shash" },
	{ 0xd1a2abc8, "crypto_unregister_skciphers" },
	{ 0xefe73979, "simd_skcipher_free" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x88638552, "simd_skcipher_create_compat" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xd671cec8, "skcipher_walk_done" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x2ad34f50, "crypto_register_skciphers" },
	{ 0x3428a169, "crypto_register_shashes" },
	{ 0x2391f725, "irq_stat" },
	{ 0x3f5e9378, "skcipher_walk_virt" },
	{ 0x68f275ad, "ce_aes_expandkey" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5c1c3eb4, "cpu_hwcaps" },
	{ 0xa5206f23, "crypto_destroy_tfm" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x41237f71, "cpu_have_feature" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0xb97f52d2, "crypto_shash_tfm_digest" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0xd16cf399, "crypto_unregister_shashes" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "libaes,crypto_simd,aes-ce-cipher");

MODULE_ALIAS("cpu:type:*:feature:*0003*");
