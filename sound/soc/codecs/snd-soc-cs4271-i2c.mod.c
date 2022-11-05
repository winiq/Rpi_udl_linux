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
	{ 0x7d978112, "cs4271_probe" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x7d05786f, "cs4271_dt_ids" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0xac25e138, "cs4271_regmap_config" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "snd-soc-cs4271");

MODULE_ALIAS("i2c:cs4271");

MODULE_INFO(srcversion, "86CF371480C7CCC18C97710");
