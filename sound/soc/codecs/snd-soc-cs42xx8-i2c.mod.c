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
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0xdfbffc86, "cs42xx8_probe" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x927ff27a, "cs42xx8_pm" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x7cac7292, "cs42888_data" },
	{ 0xcd3794c9, "cs42448_data" },
	{ 0x96287ab3, "cs42xx8_regmap_config" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
};

MODULE_INFO(depends, "snd-soc-cs42xx8");

MODULE_ALIAS("of:N*T*Ccirrus,cs42448");
MODULE_ALIAS("of:N*T*Ccirrus,cs42448C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs42888");
MODULE_ALIAS("of:N*T*Ccirrus,cs42888C*");
MODULE_ALIAS("i2c:cs42448");
MODULE_ALIAS("i2c:cs42888");

MODULE_INFO(srcversion, "1B7FBDC8077C03E60E31208");
