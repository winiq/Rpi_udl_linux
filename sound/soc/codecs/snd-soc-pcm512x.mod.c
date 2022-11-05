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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0xea124bd1, "gcd" },
	{ 0xb016a2b, "snd_pcm_hw_constraint_ratnums" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x503bd137, "snd_interval_ranges" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0xfac8d605, "snd_pcm_hw_constraint_list" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xac02f514, "snd_ctl_boolean_stereo_info" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x93840ffa, "snd_pcm_hw_rule_add" },
	{ 0x54ab7bec, "snd_soc_get_enum_double" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xefcb7fa9, "devm_regulator_register_notifier" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb39b68f7, "regcache_mark_dirty" },
	{ 0xcdc95bde, "snd_soc_put_enum_double" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x81e362e8, "regcache_sync" },
	{ 0xd07c71eb, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");


MODULE_INFO(srcversion, "1B91F8AAE661F75C4F89E07");
