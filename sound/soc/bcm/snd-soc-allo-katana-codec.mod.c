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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x5b7371e3, "snd_soc_register_component" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0xdcb764ad, "memset" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf6d0e8bb, "snd_soc_unregister_component" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x54ab7bec, "snd_soc_get_enum_double" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0xcdc95bde, "snd_soc_put_enum_double" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x45a55acd, "regmap_write" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("i2c:allo-katana-codec");
MODULE_ALIAS("of:N*T*Callo,allo-katana-codec");
MODULE_ALIAS("of:N*T*Callo,allo-katana-codecC*");

MODULE_INFO(srcversion, "73E509B8FF0A4D3F2D92358");
