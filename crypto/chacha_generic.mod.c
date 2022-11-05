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
	{ 0x2e9f361c, "crypto_unregister_skciphers" },
	{ 0x383c44a3, "crypto_register_skciphers" },
	{ 0xaaa4b9bc, "hchacha_block_generic" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6852d6f1, "skcipher_walk_done" },
	{ 0xcec122d7, "chacha_crypt_generic" },
	{ 0xd160095a, "skcipher_walk_virt" },
};

MODULE_INFO(depends, "libchacha");


MODULE_INFO(srcversion, "CA9645E79BB90334E04CEE3");
