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
	{ 0x45a55acd, "regmap_write" },
	{ 0x8384871a, "power_supply_get_drvdata" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0xfdf39630, "rpi_firmware_get" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0xf176f8cc, "devm_power_supply_register" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0x2f515391, "dev_get_regmap" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xcc932c28, "of_device_is_available" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,rpi-poe-power-supply");
MODULE_ALIAS("of:N*T*Craspberrypi,rpi-poe-power-supplyC*");

MODULE_INFO(srcversion, "133BC102285E19477B75ADB");
