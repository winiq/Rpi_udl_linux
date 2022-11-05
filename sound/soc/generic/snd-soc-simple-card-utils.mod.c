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
	{ 0xed2e8dd8, "of_property_read_string_helper" },
	{ 0x815588a6, "clk_enable" },
	{ 0x849019a8, "snd_soc_of_parse_card_name" },
	{ 0x799a998f, "snd_soc_of_parse_audio_simple_widgets" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x3bcecf1c, "snd_soc_dapm_info_pin_switch" },
	{ 0x4adabb50, "snd_soc_dapm_put_pin_switch" },
	{ 0xd064eec7, "snd_soc_runtime_calc_hw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0x7482cb40, "snd_soc_daifmt_parse_format" },
	{ 0xe536ac87, "of_find_property" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x83fea5fd, "devm_get_clk_from_child" },
	{ 0x9b8dbf20, "snd_soc_dapm_get_pin_switch" },
	{ 0x821d891, "snd_soc_daifmt_parse_clock_provider_raw" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb289750f, "of_get_named_gpio_flags" },
	{ 0xd6b5ffb3, "snd_soc_dai_set_sysclk" },
	{ 0x6e059c46, "devm_kvasprintf" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x56df4a9, "snd_soc_of_parse_audio_routing" },
	{ 0x66f5240f, "snd_soc_card_jack_new" },
	{ 0x1d940e1e, "snd_soc_component_set_sysclk" },
	{ 0xf9622dd1, "snd_soc_daifmt_clock_provider_from_bitmap" },
	{ 0xe84e7134, "snd_soc_jack_add_gpios" },
	{ 0xcd2ebf6d, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xc6f3cca5, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "25846B710073FD0E0CF1EAF");
