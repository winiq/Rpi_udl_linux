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
	{ 0x6698e9dd, "iio_read_const_attr" },
	{ 0xe37c525a, "iio_validate_scan_mask_onehot" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x5be0559f, "iio_device_release_direct_mode" },
	{ 0x67d05293, "iio_device_claim_direct_mode" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd929e5d5, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0xd4b28893, "regmap_get_device" },
	{ 0xc1ae1034, "fwnode_handle_put" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6781e000, "__iio_device_register" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0x24a741fd, "__pm_runtime_use_autosuspend" },
	{ 0xc20cc8d8, "pm_runtime_set_autosuspend_delay" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x8c05b83d, "irq_get_irq_data" },
	{ 0xb2c768b1, "devm_iio_triggered_buffer_setup_ext" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0xd8eb9296, "fwnode_property_read_u32_array" },
	{ 0xb370785c, "device_get_next_child_node" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x461afb72, "devm_iio_device_alloc" },
	{ 0x853544de, "iio_trigger_notify_done" },
	{ 0xc4d29330, "iio_push_to_buffers" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb8a8fd41, "iio_push_event" },
	{ 0x48de6280, "iio_get_time_ns" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0xb6eed1c0, "iio_device_unregister" },
	{ 0x269fdf77, "regmap_update_bits_base" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cti,ads1015");
MODULE_ALIAS("of:N*T*Cti,ads1015C*");
MODULE_ALIAS("of:N*T*Cti,ads1115");
MODULE_ALIAS("of:N*T*Cti,ads1115C*");
MODULE_ALIAS("i2c:ads1015");
MODULE_ALIAS("i2c:ads1115");

MODULE_INFO(srcversion, "8A1C0FB95F9C52A283EEB9A");
