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
	{ 0x334a0f5b, "crypto_alloc_skcipher" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0x96d03373, "cryptd_free_skcipher" },
	{ 0xd1a2abc8, "crypto_unregister_skciphers" },
	{ 0xd9606861, "cryptd_free_aead" },
	{ 0x4175f856, "cryptd_skcipher_queued" },
	{ 0x2ad34f50, "crypto_register_skciphers" },
	{ 0x1c1edb6f, "crypto_unregister_skcipher" },
	{ 0x67a1b94, "cryptd_aead_queued" },
	{ 0xae208a83, "crypto_aead_encrypt" },
	{ 0x69c07520, "crypto_register_skcipher" },
	{ 0xb2062a2, "crypto_aead_setkey" },
	{ 0x97352ede, "cryptd_alloc_skcipher" },
	{ 0x969e596a, "crypto_skcipher_decrypt" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5c1c3eb4, "cpu_hwcaps" },
	{ 0x56395284, "cryptd_skcipher_child" },
	{ 0xa5206f23, "crypto_destroy_tfm" },
	{ 0x7541b8f7, "crypto_unregister_aeads" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x9745ec02, "crypto_skcipher_setkey" },
	{ 0x4c706e65, "crypto_aead_decrypt" },
	{ 0x7934a3be, "crypto_aead_setauthsize" },
	{ 0xf36f277e, "crypto_alloc_aead" },
	{ 0x4f47cd48, "crypto_register_aeads" },
	{ 0x37a0cba, "kfree" },
	{ 0x5013e931, "crypto_unregister_aead" },
	{ 0x1695fc4, "crypto_register_aead" },
	{ 0x6c26d5aa, "cryptd_aead_child" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1d3b545d, "cryptd_alloc_aead" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4608ea4, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cryptd");

