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
	{ 0xac28c00e, "__devm_regmap_init" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xacbb5559, "regmap_async_complete_cb" },
	{ 0xdcb764ad, "memset" },
	{ 0x6903f4f, "spi_async" },
	{ 0xbb629917, "__regmap_init" },
	{ 0x52829b9d, "spi_sync" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x54f59995, "spi_write_then_read" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2964FBCD15473D3E7A2D5FA");
