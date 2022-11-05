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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x719251e9, "hid_unregister_driver" },
	{ 0xf9ce2f6b, "__hid_register_driver" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x66405d10, "input_ff_create" },
	{ 0xb2351ad2, "devm_kfree" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xda39556f, "hid_open_report" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xc5933243, "input_free_device" },
	{ 0x40061ad3, "input_register_device" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0xf7131c54, "power_supply_powers" },
	{ 0xf176f8cc, "devm_power_supply_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x96748047, "devm_kmemdup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8b13a8b8, "hid_snto32" },
	{ 0x6546ed0b, "hid_field_extract" },
	{ 0xdfb45682, "input_mt_sync_frame" },
	{ 0x18503203, "input_mt_report_slot_state" },
	{ 0xa7db173d, "input_mt_get_slot_by_key" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2e52f33b, "hid_report_raw_event" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd82eb13c, "power_supply_changed" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0xc310b981, "strnstr" },
	{ 0x3966fdae, "input_mt_init_slots" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0xed5ea3d, "input_alloc_absinfo" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xba1aa9c7, "device_remove_file" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x96848186, "scnprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0x8384871a, "power_supply_get_drvdata" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x92997ed8, "_printk" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5495392, "hid_debug" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2b27adba, "hid_hw_close" },
	{ 0xcc1fe040, "hid_hw_open" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0x195226fb, "sysfs_remove_group" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x8da6585d, "__stack_chk_fail" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g0102v0000046Dp00004011");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004101");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B00C");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00001017");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004010");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004050");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004007");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000402D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000406D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000405E");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000404A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004072");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B013");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B018");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B01F");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000406A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004041");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004060");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004071");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004069");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004082");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004024");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004002");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B305");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B309");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B30B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp*");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000049");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000057");
MODULE_ALIAS("hid:b0003g0104v0000046Dp0000005C");
MODULE_ALIAS("hid:b0003g0104v0000046Dp000000FE");
MODULE_ALIAS("hid:b0003g0104v0000046Dp*");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C082");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C087");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C090");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C081");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C086");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C091");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C262");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C088");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B305");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B309");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B30B");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B008");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B012");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B01D");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B01E");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B023");

MODULE_INFO(srcversion, "C480F782BDEB42D9AC28E4D");
