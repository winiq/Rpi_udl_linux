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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x70e69b22, "snd_soc_dapm_get_volsw" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x69068d6d, "snd_soc_dapm_new_controls" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0x1c48e7da, "snd_soc_dapm_add_routes" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xa6bc220e, "snd_soc_add_component_controls" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x799c125a, "snd_soc_dapm_put_volsw" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xeaf193c9, "snd_ctl_boolean_mono_info" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x54ab7bec, "snd_soc_get_enum_double" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0xf05f5869, "snd_soc_component_write" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0xcdc95bde, "snd_soc_put_enum_double" },
	{ 0xcdfcd18e, "snd_soc_component_read" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x81e362e8, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");

MODULE_ALIAS("i2c:wm8960");
MODULE_ALIAS("of:N*T*Cwlf,wm8960");
MODULE_ALIAS("of:N*T*Cwlf,wm8960C*");

MODULE_INFO(srcversion, "EB4E69093384E76CF25ABA4");
