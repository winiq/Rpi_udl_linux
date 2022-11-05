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
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0x815588a6, "clk_enable" },
	{ 0x24a741fd, "__pm_runtime_use_autosuspend" },
	{ 0xd90bb8ee, "snd_soc_dapm_get_enum_double" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x70e69b22, "snd_soc_dapm_get_volsw" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xfd925cd7, "dapm_regulator_event" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0xcbc26637, "snd_soc_put_volsw" },
	{ 0xf3362132, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x63fff561, "device_property_read_string" },
	{ 0x799c125a, "snd_soc_dapm_put_volsw" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x54ab7bec, "snd_soc_get_enum_double" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x1e2a8440, "devm_snd_soc_register_component" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0xf05f5869, "snd_soc_component_write" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xb39b68f7, "regcache_mark_dirty" },
	{ 0xcdc95bde, "snd_soc_put_enum_double" },
	{ 0xc20cc8d8, "pm_runtime_set_autosuspend_delay" },
	{ 0xcdfcd18e, "snd_soc_component_read" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x81e362e8, "regcache_sync" },
	{ 0xd07c71eb, "regcache_cache_only" },
	{ 0x89df9ed6, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("acpi*:DLGS7212:*");
MODULE_ALIAS("acpi*:DLGS7213:*");
MODULE_ALIAS("of:N*T*Cdlg,da7212");
MODULE_ALIAS("of:N*T*Cdlg,da7212C*");
MODULE_ALIAS("of:N*T*Cdlg,da7213");
MODULE_ALIAS("of:N*T*Cdlg,da7213C*");
MODULE_ALIAS("i2c:da7213");

MODULE_INFO(srcversion, "A29EF09C6B92A0C87EB0EAB");
