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
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0x9667cc7c, "spi_get_device_id" },
	{ 0xd2ca23ec, "mcp23x08_regmap" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x4323e67b, "mcp23s08_probe_one" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0xac28c00e, "__devm_regmap_init" },
	{ 0x96748047, "devm_kmemdup" },
	{ 0xe2b18703, "mcp23x17_regmap" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0x52829b9d, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x54f59995, "spi_write_then_read" },
};

MODULE_INFO(depends, "pinctrl-mcp23s08");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s18");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s18C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17C*");
MODULE_ALIAS("spi:mcp23s08");
MODULE_ALIAS("spi:mcp23s17");
MODULE_ALIAS("spi:mcp23s18");

MODULE_INFO(srcversion, "74AA0F41885B41A88A495F9");
