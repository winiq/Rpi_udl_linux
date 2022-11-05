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
	{ 0xde164253, "__platform_driver_register" },
	{ 0x3a760923, "gpiod_get_value_cansleep" },
	{ 0x30511fdf, "devm_gpiod_get_index" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xf5f4da0f, "devm_spi_register_controller" },
	{ 0x3c06d2f5, "spi_bitbang_init" },
	{ 0x720c80af, "spi_bitbang_setup_transfer" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xd5b9bcf9, "__devm_spi_alloc_controller" },
	{ 0xfb0b2445, "spi_bitbang_setup" },
	{ 0xb78bbf63, "spi_bitbang_cleanup" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xa07bbbe8, "gpiod_direction_output" },
	{ 0x19ae336a, "gpiod_direction_input" },
};

MODULE_INFO(depends, "spi-bitbang");

MODULE_ALIAS("of:N*T*Cspi-gpio");
MODULE_ALIAS("of:N*T*Cspi-gpioC*");

MODULE_INFO(srcversion, "ACDAA40525DFCDE2D74E3B0");
