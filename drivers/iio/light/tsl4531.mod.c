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
	{ 0x6698e9dd, "iio_read_const_attr" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6781e000, "__iio_device_register" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x461afb72, "devm_iio_device_alloc" },
	{ 0xb156d5c3, "i2c_smbus_read_word_data" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0xb6eed1c0, "iio_device_unregister" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:tsl4531");

MODULE_INFO(srcversion, "9E11332F24947A9012EB996");
