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
	{ 0xb156d5c3, "i2c_smbus_read_word_data" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4c361bcb, "devm_hwmon_device_register_with_info" },
	{ 0xfc0c9a7b, "of_property_read_variable_u8_array" },
	{ 0xe536ac87, "of_find_property" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x299e73ac, "thermal_cooling_device_register" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0xbdf1d0d2, "devm_thermal_of_cooling_device_register" },
	{ 0x3fa09007, "thermal_cooling_device_unregister" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,emc2305");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2305C*");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2301");
MODULE_ALIAS("of:N*T*Cmicrochip,emc2301C*");
MODULE_ALIAS("i2c:emc2305");
MODULE_ALIAS("i2c:emc2303");
MODULE_ALIAS("i2c:emc2302");
MODULE_ALIAS("i2c:emc2301");

MODULE_INFO(srcversion, "F85676B56D93B1E2BD83B9A");
