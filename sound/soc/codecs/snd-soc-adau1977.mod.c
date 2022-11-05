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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x3967f406, "regulator_disable" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x84dd5ae8, "regcache_cache_bypass" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69068d6d, "snd_soc_dapm_new_controls" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0xaceaea2e, "snd_pcm_hw_constraint_mask64" },
	{ 0xfac8d605, "snd_pcm_hw_constraint_list" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0xe4afd411, "devm_regulator_get_optional" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xb39b68f7, "regcache_mark_dirty" },
	{ 0xa13a7a1e, "snd_pcm_hw_constraint_minmax" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x81e362e8, "regcache_sync" },
	{ 0xd07c71eb, "regcache_cache_only" },
	{ 0xd769d20f, "regulator_enable" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "6651F435ED5D5A3004DCEBB");
