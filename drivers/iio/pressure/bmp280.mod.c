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
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0x24a741fd, "__pm_runtime_use_autosuspend" },
	{ 0xd929e5d5, "__pm_runtime_suspend" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0x9a61fc7d, "regulator_bulk_set_supply_names" },
	{ 0x461afb72, "devm_iio_device_alloc" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6ae24660, "__devm_iio_device_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c05b83d, "irq_get_irq_data" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd66c8184, "add_device_randomness" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc20cc8d8, "pm_runtime_set_autosuspend_delay" },
	{ 0xa6257a2f, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa55f0824, "gpiod_set_value" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x45a55acd, "regmap_write" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "DFC65EF58E8D0F99D6D747F");
