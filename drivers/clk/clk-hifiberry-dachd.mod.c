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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfc0c9a7b, "of_property_read_variable_u8_array" },
	{ 0xdcb764ad, "memset" },
	{ 0xaf4b9ca, "devm_clk_register" },
	{ 0xb80bbd8c, "of_clk_add_provider" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xb41610a9, "of_clk_src_simple_get" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x1072816e, "of_clk_del_provider" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Chifiberry,dachd-clk");
MODULE_ALIAS("of:N*T*Chifiberry,dachd-clkC*");
MODULE_ALIAS("i2c:dachd-clk");

MODULE_INFO(srcversion, "6395C584B36A07A280ABE68");
