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
	{ 0xa6c96402, "_dev_err" },
	{ 0xf188b48e, "adxl34x_probe" },
	{ 0x7a2d3100, "i2c_smbus_read_i2c_block_data" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0x49a4fcbd, "adxl34x_remove" },
};

MODULE_INFO(depends, "adxl34x");

MODULE_ALIAS("of:N*T*Cadi,adxl345");
MODULE_ALIAS("of:N*T*Cadi,adxl345C*");
MODULE_ALIAS("of:N*T*Cadi,adxl34x");
MODULE_ALIAS("of:N*T*Cadi,adxl34xC*");
MODULE_ALIAS("i2c:adxl34x");

MODULE_INFO(srcversion, "F0591DE9C13F46A4C335D2E");
