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
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0x1f73789a, "wm8804_probe" },
	{ 0x36ff33ce, "wm8804_regmap_config" },
	{ 0x7ed35d82, "wm8804_remove" },
	{ 0x767c1a5, "wm8804_pm" },
};

MODULE_INFO(depends, "snd-soc-wm8804");

MODULE_ALIAS("acpi*:1AEC8804:*");
MODULE_ALIAS("acpi*:10138804:*");
MODULE_ALIAS("of:N*T*Cwlf,wm8804");
MODULE_ALIAS("of:N*T*Cwlf,wm8804C*");
MODULE_ALIAS("i2c:wm8804");

MODULE_INFO(srcversion, "5DA88AA7319EA7ED3E92D60");
