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
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0x24a741fd, "__pm_runtime_use_autosuspend" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x6698e9dd, "iio_read_const_attr" },
	{ 0xd929e5d5, "__pm_runtime_suspend" },
	{ 0x853544de, "iio_trigger_notify_done" },
	{ 0x73053428, "dev_err_probe" },
	{ 0x3967f406, "regulator_disable" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0x5d389380, "regmap_bulk_write" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0x772dec47, "regmap_noinc_read" },
	{ 0x9129b9f, "devm_iio_trigger_alloc" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x461afb72, "devm_iio_device_alloc" },
	{ 0xbcf7423c, "iio_read_mount_matrix" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6ae24660, "__devm_iio_device_register" },
	{ 0x891d073c, "__devm_iio_trigger_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c05b83d, "irq_get_irq_data" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x67d05293, "iio_device_claim_direct_mode" },
	{ 0x9b6d407d, "iio_show_mount_matrix" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9de9e1c6, "devm_kstrdup" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8851bdc9, "iio_device_id" },
	{ 0xadc9aed4, "get_device" },
	{ 0xdd981006, "__module_get" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x5be0559f, "iio_device_release_direct_mode" },
	{ 0x96848186, "scnprintf" },
	{ 0xc4d29330, "iio_push_to_buffers" },
	{ 0xc20cc8d8, "pm_runtime_set_autosuspend_delay" },
	{ 0xd4b28893, "regmap_get_device" },
	{ 0xb2c768b1, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x45a55acd, "regmap_write" },
	{ 0xd769d20f, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "855233172AC42F732FE468E");
