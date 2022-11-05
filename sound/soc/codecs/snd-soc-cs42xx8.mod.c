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
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x69068d6d, "snd_soc_dapm_new_controls" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0x1c48e7da, "snd_soc_dapm_add_routes" },
	{ 0xa6bc220e, "snd_soc_add_component_controls" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6ad73e27, "of_match_device" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x54ab7bec, "snd_soc_get_enum_double" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xb39b68f7, "regcache_mark_dirty" },
	{ 0xcdc95bde, "snd_soc_put_enum_double" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x81e362e8, "regcache_sync" },
	{ 0xd07c71eb, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "C3E455727BF0C902FD85071");
