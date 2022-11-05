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
	{ 0xda1a0029, "_dev_warn" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4be2b06b, "dev_driver_string" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0x6de3bb9a, "matrix_keypad_build_keymap" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xf3f3df4c, "matrix_keypad_parse_properties" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("of:N*T*Cti,tca8418");
MODULE_ALIAS("of:N*T*Cti,tca8418C*");
MODULE_ALIAS("i2c:tca8418");

MODULE_INFO(srcversion, "345505E234584CA55D4CD29");
