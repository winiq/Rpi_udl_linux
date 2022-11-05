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
	{ 0x1a60f786, "pcm179x_common_init" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0xd42afe25, "pcm179x_regmap_config" },
};

MODULE_INFO(depends, "snd-soc-pcm179x-codec");

MODULE_ALIAS("of:N*T*Cti,pcm1792a");
MODULE_ALIAS("of:N*T*Cti,pcm1792aC*");
MODULE_ALIAS("i2c:pcm179x");

MODULE_INFO(srcversion, "EED1290839FA7480E61C643");
