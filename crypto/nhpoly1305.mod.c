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
	{ 0xdcb764ad, "memset" },
	{ 0x7d37efc2, "crypto_unregister_shash" },
	{ 0x654898cc, "crypto_register_shash" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xbcb90cb3, "poly1305_core_emit" },
	{ 0x4829a47e, "memcpy" },
	{ 0x21f3700, "poly1305_core_blocks" },
	{ 0xd45b9cf4, "poly1305_core_setkey" },
};

MODULE_INFO(depends, "libpoly1305");


MODULE_INFO(srcversion, "54F35292825464DE31AB053");
