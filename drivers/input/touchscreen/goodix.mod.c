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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0xa81e214c, "is_acpi_device_node" },
	{ 0xb98c5300, "request_firmware_nowait" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x19ae336a, "gpiod_direction_input" },
	{ 0xf9a482f9, "msleep" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xdfb45682, "input_mt_sync_frame" },
	{ 0x9e61da5, "touchscreen_report_pos" },
	{ 0x18503203, "input_mt_report_slot_state" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xed5ea3d, "input_alloc_absinfo" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x3966fdae, "input_mt_init_slots" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xaac9e1ca, "touchscreen_parse_properties" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0x54298c33, "gpiod_direction_output_raw" },
	{ 0xa07bbbe8, "gpiod_direction_output" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x3967f406, "regulator_disable" },
	{ 0x25974000, "wait_for_completion" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgoodix,gt1151");
MODULE_ALIAS("of:N*T*Cgoodix,gt1151C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt1158");
MODULE_ALIAS("of:N*T*Cgoodix,gt1158C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt5663");
MODULE_ALIAS("of:N*T*Cgoodix,gt5663C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt5688");
MODULE_ALIAS("of:N*T*Cgoodix,gt5688C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt911");
MODULE_ALIAS("of:N*T*Cgoodix,gt911C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110");
MODULE_ALIAS("of:N*T*Cgoodix,gt9110C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt912");
MODULE_ALIAS("of:N*T*Cgoodix,gt912C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9147");
MODULE_ALIAS("of:N*T*Cgoodix,gt9147C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt917s");
MODULE_ALIAS("of:N*T*Cgoodix,gt917sC*");
MODULE_ALIAS("of:N*T*Cgoodix,gt927");
MODULE_ALIAS("of:N*T*Cgoodix,gt927C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271");
MODULE_ALIAS("of:N*T*Cgoodix,gt9271C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt928");
MODULE_ALIAS("of:N*T*Cgoodix,gt928C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9286");
MODULE_ALIAS("of:N*T*Cgoodix,gt9286C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt967");
MODULE_ALIAS("of:N*T*Cgoodix,gt967C*");
MODULE_ALIAS("acpi*:GDIX1001:*");
MODULE_ALIAS("acpi*:GDIX1002:*");
MODULE_ALIAS("i2c:GDIX1001:00");

MODULE_INFO(srcversion, "F73A4A07E88693FF5205975");
