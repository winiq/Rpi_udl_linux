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
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xb46411ce, "platform_device_alloc" },
	{ 0xcb809a58, "platform_device_add" },
	{ 0xeeb8e6b5, "platform_device_unregister" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xe61ce347, "platform_device_put" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crpi,rpi-sense");
MODULE_ALIAS("of:N*T*Crpi,rpi-senseC*");
MODULE_ALIAS("i2c:rpi-sense");

MODULE_INFO(srcversion, "A7DC91DFB60B9F164003CAC");
