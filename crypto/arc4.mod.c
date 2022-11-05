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
	{ 0x80e5a6bf, "crypto_unregister_skcipher" },
	{ 0x1c1f4268, "crypto_register_skcipher" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6852d6f1, "skcipher_walk_done" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0xd160095a, "skcipher_walk_virt" },
};

MODULE_INFO(depends, "libarc4");


MODULE_INFO(srcversion, "15B8815818A02D9CC78C611");
