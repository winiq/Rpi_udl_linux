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
	{ 0x52309ee6, "arizona_pm_ops" },
	{ 0x3dc526a9, "arizona_of_match" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x4582d9f8, "arizona_dev_init" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0x38aa1397, "gpiod_add_lookup_table" },
	{ 0xab0f2cf6, "devm_acpi_dev_add_driver_gpios" },
	{ 0xa81e214c, "is_acpi_device_node" },
	{ 0xbf0ef43d, "__devm_regmap_init_spi" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x125e308f, "wm5102_spi_regmap" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0x9667cc7c, "spi_get_device_id" },
	{ 0xff81487d, "gpiod_remove_lookup_table" },
	{ 0x4979ca02, "arizona_dev_exit" },
};

MODULE_INFO(depends, "arizona,regmap-spi");

MODULE_ALIAS("spi:wm5102");
MODULE_ALIAS("spi:wm5110");
MODULE_ALIAS("spi:wm8280");
MODULE_ALIAS("spi:wm1831");
MODULE_ALIAS("spi:cs47l24");
MODULE_ALIAS("acpi*:WM510204:*");
MODULE_ALIAS("acpi*:WM510205:*");

MODULE_INFO(srcversion, "B704299BABDE0DEDEE3EC66");
