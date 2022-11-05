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
	{ 0xa8fff377, "regulator_get_bypass_regmap" },
	{ 0x9d1f1977, "regulator_set_bypass_regmap" },
	{ 0xa88615a, "regulator_map_voltage_linear_range" },
	{ 0x43093003, "regulator_list_voltage_linear_range" },
	{ 0xff7f6214, "regulator_map_voltage_linear" },
	{ 0x56dbbae7, "regulator_list_voltage_linear" },
	{ 0xf208f25a, "platform_unregister_drivers" },
	{ 0x24b015ea, "__platform_register_drivers" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xe584169d, "of_get_regulator_init_data" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0xbcb3aa08, "of_get_child_by_name" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x975d6188, "devm_regulator_register" },
	{ 0x931d650b, "gpiod_get_optional" },
	{ 0xad535d33, "regulator_set_voltage_sel_regmap" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x691e55ba, "regulator_get_voltage_sel_regmap" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xaf103fa9, "rdev_get_regmap" },
	{ 0xee45db28, "gpiod_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D1E3CC309AB5BE06AAEF842");
