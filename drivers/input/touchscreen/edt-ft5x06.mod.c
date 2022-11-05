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
	{ 0x1de95874, "simple_open" },
	{ 0xdd860064, "simple_attr_release" },
	{ 0x8c0bd915, "simple_attr_write" },
	{ 0x6db86096, "simple_attr_read" },
	{ 0x25901b77, "generic_file_llseek" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x10b1e3a8, "input_mt_report_pointer_emulation" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x9e61da5, "touchscreen_report_pos" },
	{ 0x18503203, "input_mt_report_slot_state" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0xa4cab7c0, "debugfs_create_u16" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x4be2b06b, "dev_driver_string" },
	{ 0x40061ad3, "input_register_device" },
	{ 0xb55ffa6f, "devm_device_add_group" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x8c05b83d, "irq_get_irq_data" },
	{ 0x3966fdae, "input_mt_init_slots" },
	{ 0xaac9e1ca, "touchscreen_parse_properties" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0x5792f848, "strlcpy" },
	{ 0x349cba85, "strchr" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x96848186, "scnprintf" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0xc0b4422b, "simple_attr_open" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3967f406, "regulator_disable" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x37a0cba, "kfree" },
	{ 0x85a8f9d1, "debugfs_remove" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5206C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506C*");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236C*");
MODULE_ALIAS("i2c:edt-ft5x06");
MODULE_ALIAS("i2c:edt-ft5506");
MODULE_ALIAS("i2c:ev-ft5726");
MODULE_ALIAS("i2c:ft6236");

MODULE_INFO(srcversion, "3BC1D9323AB6C6B3CD311B8");
