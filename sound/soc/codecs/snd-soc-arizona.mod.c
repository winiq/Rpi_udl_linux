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
	{ 0x7ccf0af7, "arizona_request_irq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0x2a1af441, "regulator_set_voltage" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc6a6f34b, "snd_soc_dapm_del_routes" },
	{ 0x7e5194c3, "snd_soc_dai_active" },
	{ 0xb973e18e, "regmap_raw_write" },
	{ 0xea124bd1, "gcd" },
	{ 0xd929e5d5, "__pm_runtime_suspend" },
	{ 0x70e69b22, "snd_soc_dapm_get_volsw" },
	{ 0x3153e77b, "regmap_multi_reg_write" },
	{ 0x73053428, "dev_err_probe" },
	{ 0x3967f406, "regulator_disable" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x5058413b, "_dev_crit" },
	{ 0x931d650b, "gpiod_get_optional" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7809c8fa, "snd_soc_component_disable_pin" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69068d6d, "snd_soc_dapm_new_controls" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0x5dbd6b7c, "snd_soc_component_update_bits" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x398a25a9, "of_prop_next_u32" },
	{ 0x3506703, "snd_soc_component_enable_pin" },
	{ 0x37eb4d25, "snd_jack_set_key" },
	{ 0x6d425738, "snd_soc_info_enum_double" },
	{ 0x1c48e7da, "snd_soc_dapm_add_routes" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xfac8d605, "snd_pcm_hw_constraint_list" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x11387ac7, "regulator_allow_bypass" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x799c125a, "snd_soc_dapm_put_volsw" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8f03979a, "devm_gpio_request_one" },
	{ 0x2e8b1826, "arizona_free_irq" },
	{ 0x5d8b460f, "snd_soc_info_volsw" },
	{ 0x6dece8b6, "arizona_set_irq_wake" },
	{ 0xd443bbc2, "arizona_clk32k_enable" },
	{ 0x54ab7bec, "snd_soc_get_enum_double" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x678a2d9b, "arizona_clk32k_disable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdb02c9fb, "snd_soc_dapm_sync" },
	{ 0xf05f5869, "snd_soc_component_write" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xcdc95bde, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x59672155, "gpiod_set_raw_value_cansleep" },
	{ 0xcdfcd18e, "snd_soc_component_read" },
	{ 0xb8566d08, "snd_soc_bytes_put" },
	{ 0xc169750e, "snd_soc_jack_report" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x75a0d40b, "regmap_get_val_bytes" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x4ee7f783, "snd_soc_component_force_enable_pin" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x45a55acd, "regmap_write" },
	{ 0xee45db28, "gpiod_put" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0xd769d20f, "regulator_enable" },
};

MODULE_INFO(depends, "snd-pcm,arizona,snd-soc-core,snd");


MODULE_INFO(srcversion, "2E82770A2268E70717BF9E6");
