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
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8733236, "intlog10" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xca58e44a, "i2c_unregister_device" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x45a55acd, "regmap_write" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x4829a47e, "memcpy" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x696f8a06, "i2c_new_dummy_device" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x538ddda2, "of_device_get_match_data" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x269fdf77, "regmap_update_bits_base" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("i2c:mn884433");
MODULE_ALIAS("i2c:mn884434-0");
MODULE_ALIAS("i2c:mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884433");
MODULE_ALIAS("of:N*T*Csocionext,mn884433C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1C*");

MODULE_INFO(srcversion, "24082A730F31F1C823DD8D2");
