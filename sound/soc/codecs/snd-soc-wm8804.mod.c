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
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0xd90bb8ee, "snd_soc_dapm_get_enum_double" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0x6d28402b, "snd_soc_dapm_kcontrol_dapm" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xefcb7fa9, "devm_regulator_register_notifier" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0xf05f5869, "snd_soc_component_write" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xb39b68f7, "regcache_mark_dirty" },
	{ 0x892a17eb, "snd_soc_component_test_bits" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xcdfcd18e, "snd_soc_component_read" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x81e362e8, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "187E51008098C4CF2E1B827");
