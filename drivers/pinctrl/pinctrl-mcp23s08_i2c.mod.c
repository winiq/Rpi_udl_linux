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
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x4323e67b, "mcp23s08_probe_one" },
	{ 0xd2ca23ec, "mcp23x08_regmap" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0xe2b18703, "mcp23x17_regmap" },
	{ 0xc6f3cca5, "devm_kmalloc" },
};

MODULE_INFO(depends, "pinctrl-mcp23s08");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23018");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23018C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017C*");
MODULE_ALIAS("i2c:mcp23008");
MODULE_ALIAS("i2c:mcp23017");
MODULE_ALIAS("i2c:mcp23018");

MODULE_INFO(srcversion, "BF2F1AEBB54AB7197AB5A5E");
