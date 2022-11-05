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
	{ 0x52309ee6, "arizona_pm_ops" },
	{ 0x3dc526a9, "arizona_of_match" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x4582d9f8, "arizona_dev_init" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x5166f1c3, "wm5102_i2c_regmap" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0x4979ca02, "arizona_dev_exit" },
};

MODULE_INFO(depends, "arizona");

MODULE_ALIAS("i2c:wm5102");
MODULE_ALIAS("i2c:wm5110");
MODULE_ALIAS("i2c:wm8280");
MODULE_ALIAS("i2c:wm8997");
MODULE_ALIAS("i2c:wm8998");
MODULE_ALIAS("i2c:wm1814");

MODULE_INFO(srcversion, "EEA42C4BCAE6419A12A65C7");
