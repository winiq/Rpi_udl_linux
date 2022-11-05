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
	{ 0xa6c96402, "_dev_err" },
	{ 0x9609ced3, "devm_gpiochip_add_data_with_key" },
	{ 0x77f9973e, "devm_backlight_device_register" },
	{ 0x975d6188, "devm_regulator_register" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x530a9a59, "rdev_get_drvdata" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xffde228, "gpiochip_get_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "backlight");

MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel-regulator");
MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel-regulatorC*");

MODULE_INFO(srcversion, "7300B6D640E811DF173624B");
