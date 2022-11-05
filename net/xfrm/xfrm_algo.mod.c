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
	{ 0x460c70a6, "module_layout" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6199ad5d, "crypto_has_skcipher" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x34407691, "crypto_has_ahash" },
	{ 0x951a2773, "crypto_has_alg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "68DFFD183F4ED147AD4615B");
