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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x3332974e, "spi_register_controller" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd30dfa9, "spi_unregister_controller" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x81822a88, "put_device" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x53ef1071, "spi_finalize_current_transfer" },
	{ 0xadc9aed4, "get_device" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E276299F0B5C87A133D950C");
