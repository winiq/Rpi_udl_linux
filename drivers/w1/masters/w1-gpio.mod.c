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
	{ 0xf9a482f9, "msleep" },
	{ 0x54298c33, "gpiod_direction_output_raw" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x44d8ff71, "w1_add_master_device" },
	{ 0xa07bbbe8, "gpiod_direction_output" },
	{ 0xc3a0d9ed, "devm_gpiod_get_index_optional" },
	{ 0x30511fdf, "devm_gpiod_get_index" },
	{ 0xb22f8129, "of_get_property" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xf94fb4a6, "of_root" },
	{ 0x3bd45e34, "gpiod_get_value" },
	{ 0x1cf2bd98, "w1_remove_master_device" },
	{ 0xa55f0824, "gpiod_set_value" },
};

MODULE_INFO(depends, "wire");

MODULE_ALIAS("of:N*T*Cw1-gpio");
MODULE_ALIAS("of:N*T*Cw1-gpioC*");

MODULE_INFO(srcversion, "89D33780A3861BE22B688C6");
