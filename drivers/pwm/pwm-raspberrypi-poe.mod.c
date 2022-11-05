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
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x73053428, "dev_err_probe" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x37736068, "devm_rpi_firmware_get" },
	{ 0x550203cb, "of_get_parent" },
	{ 0x11f36c20, "devm_pwmchip_add" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0x2f515391, "dev_get_regmap" },
	{ 0xc6f3cca5, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Craspberrypi,firmware-poe-pwm");
MODULE_ALIAS("of:N*T*Craspberrypi,firmware-poe-pwmC*");
MODULE_ALIAS("of:N*T*Craspberrypi,poe-pwm");
MODULE_ALIAS("of:N*T*Craspberrypi,poe-pwmC*");

MODULE_INFO(srcversion, "0AC439AB64F49684350FC12");
