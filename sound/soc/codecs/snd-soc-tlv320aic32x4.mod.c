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
	{ 0xf9a482f9, "msleep" },
	{ 0x72b31228, "clk_hw_register_clkdev" },
	{ 0xd90bb8ee, "snd_soc_dapm_get_enum_double" },
	{ 0x70e69b22, "snd_soc_dapm_get_volsw" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0x3967f406, "regulator_disable" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0x328b0815, "of_clk_get_parent_name" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0xaf4b9ca, "devm_clk_register" },
	{ 0xa6bc220e, "snd_soc_add_component_controls" },
	{ 0x2f515391, "dev_get_regmap" },
	{ 0x799c125a, "snd_soc_dapm_put_volsw" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xeaf193c9, "snd_ctl_boolean_mono_info" },
	{ 0x8f03979a, "devm_gpio_request_one" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x54ab7bec, "snd_soc_get_enum_double" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x2d76a5eb, "devm_clk_bulk_get" },
	{ 0x92997ed8, "_printk" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0xb289750f, "of_get_named_gpio_flags" },
	{ 0xf05f5869, "snd_soc_component_write" },
	{ 0xe4afd411, "devm_regulator_get_optional" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xcdc95bde, "snd_soc_put_enum_double" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x59672155, "gpiod_set_raw_value_cansleep" },
	{ 0xcdfcd18e, "snd_soc_component_read" },
	{ 0x5dd87fd0, "of_property_match_string" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x45a55acd, "regmap_write" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0x89df9ed6, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-pcm");


MODULE_INFO(srcversion, "1C7AAE038CC3F961C37FCE1");
