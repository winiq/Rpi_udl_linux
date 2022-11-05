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
	{ 0x460c70a6, "module_layout" },
	{ 0x621a4a7c, "crypto_unregister_template" },
	{ 0x53a543d0, "crypto_register_template" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x88b02222, "crypto_aead_encrypt" },
	{ 0xc13a141, "crypto_skcipher_encrypt" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x314cd2d8, "aead_register_instance" },
	{ 0xc7163d49, "aead_init_geniv" },
	{ 0x7a5d8752, "aead_exit_geniv" },
	{ 0xc6d78321, "aead_geniv_alloc" },
	{ 0x893dd312, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7328435C7E080277D139839");
