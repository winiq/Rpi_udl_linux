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
	{ 0x3153e77b, "regmap_multi_reg_write" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x69068d6d, "snd_soc_dapm_new_controls" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0x1c48e7da, "snd_soc_dapm_add_routes" },
	{ 0xfac8d605, "snd_pcm_hw_constraint_list" },
	{ 0xa6bc220e, "snd_soc_add_component_controls" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0x54ab7bec, "snd_soc_get_enum_double" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0xdb02c9fb, "snd_soc_dapm_sync" },
	{ 0xcdc95bde, "snd_soc_put_enum_double" },
	{ 0xc6f3cca5, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "AA0ACBCC02C28B3FFFD17EA");
