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
	{ 0xa84ce9e0, "crypto_aes_inv_sbox" },
	{ 0x1a10c32b, "crypto_ft_tab" },
	{ 0xfacc1a86, "crypto_register_alg" },
	{ 0x7a177362, "crypto_aes_set_key" },
	{ 0x56054c05, "crypto_it_tab" },
	{ 0xd6f7eb89, "crypto_unregister_alg" },
};

MODULE_INFO(depends, "libaes,aes_generic");

