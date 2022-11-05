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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0x2a1af441, "regulator_set_voltage" },
	{ 0x815588a6, "clk_enable" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0x24a741fd, "__pm_runtime_use_autosuspend" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xd929e5d5, "__pm_runtime_suspend" },
	{ 0x3967f406, "regulator_disable" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xb151bf9b, "mfd_remove_devices" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe3c3ccfc, "gpio_to_desc" },
	{ 0x3d204d55, "irq_create_mapping_affinity" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdcb4af72, "devm_gpiod_get" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x8233c638, "__irq_domain_add" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x2dca9a, "__irq_resolve_mapping" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7ce84d57, "mfd_add_devices" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c05b83d, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf19fdd3b, "regmap_multi_reg_write_bypassed" },
	{ 0x8f03979a, "devm_gpio_request_one" },
	{ 0x71d691f4, "gpiod_get_raw_value_cansleep" },
	{ 0x367863e9, "regmap_add_irq_chip" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xd0a227b9, "handle_simple_irq" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0xb903e84c, "irq_set_chip_and_handler_name" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xb39b68f7, "regcache_mark_dirty" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc47fa31d, "gpiod_to_irq" },
	{ 0x5b325ed6, "regulator_put" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xa33ebc0, "irq_domain_remove" },
	{ 0xc20cc8d8, "pm_runtime_set_autosuspend_delay" },
	{ 0x59672155, "gpiod_set_raw_value_cansleep" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xfaf760d9, "regulator_get" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x81e362e8, "regcache_sync" },
	{ 0xd07c71eb, "regcache_cache_only" },
	{ 0xbd921607, "irq_domain_xlate_twocell" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd769d20f, "regulator_enable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B323A5D33E8EA507C6DE1AC");
