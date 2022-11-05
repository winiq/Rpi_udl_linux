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
	{ 0xd90bb8ee, "snd_soc_dapm_get_enum_double" },
	{ 0xbdec10fa, "snd_soc_dapm_mixer_update_power" },
	{ 0x8e1f0d6b, "regmap_register_patch" },
	{ 0x70e69b22, "snd_soc_dapm_get_volsw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69068d6d, "snd_soc_dapm_new_controls" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0x6d28402b, "snd_soc_dapm_kcontrol_dapm" },
	{ 0x1c48e7da, "snd_soc_dapm_add_routes" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xa6bc220e, "snd_soc_add_component_controls" },
	{ 0x799c125a, "snd_soc_dapm_put_volsw" },
	{ 0x54298c33, "gpiod_direction_output_raw" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0x54ab7bec, "snd_soc_get_enum_double" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xefcb7fa9, "devm_regulator_register_notifier" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0x187b4545, "regulator_get_voltage" },
	{ 0xb289750f, "of_get_named_gpio_flags" },
	{ 0xf05f5869, "snd_soc_component_write" },
	{ 0xfe990052, "gpio_free" },
	{ 0xb39b68f7, "regcache_mark_dirty" },
	{ 0xcdc95bde, "snd_soc_put_enum_double" },
	{ 0x6968fb56, "gpiod_set_raw_value" },
	{ 0x892a17eb, "snd_soc_component_test_bits" },
	{ 0xcdfcd18e, "snd_soc_component_read" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x81e362e8, "regcache_sync" },
	{ 0xd07c71eb, "regcache_cache_only" },
	{ 0x89df9ed6, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "D681EF95D22DB549DC79D35");
