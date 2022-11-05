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
	{ 0x14a1ae26, "__max730x_probe" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0x46f3cf6b, "__max730x_remove" },
};

MODULE_INFO(depends, "gpio-max730x");

MODULE_ALIAS("i2c:max7300");

MODULE_INFO(srcversion, "93C1AE4FFF1C440277E11BC");