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
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xbdfb33d, "desc_to_gpio" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x11387a3f, "i2c_bit_add_numbered_bus" },
	{ 0x5792f848, "strlcpy" },
	{ 0x926387af, "gpiod_cansleep" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x30511fdf, "devm_gpiod_get_index" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x3a760923, "gpiod_get_value_cansleep" },
	{ 0xe37d4b98, "i2c_del_adapter" },
};

MODULE_INFO(depends, "i2c-algo-bit");

MODULE_ALIAS("of:N*T*Ci2c-gpio");
MODULE_ALIAS("of:N*T*Ci2c-gpioC*");

MODULE_INFO(srcversion, "578A412EE16D4AEF4259045");
