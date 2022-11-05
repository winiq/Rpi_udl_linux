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
	{ 0x37a0cba, "kfree" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xdfb45682, "input_mt_sync_frame" },
	{ 0x9e61da5, "touchscreen_report_pos" },
	{ 0x18503203, "input_mt_report_slot_state" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x40061ad3, "input_register_device" },
	{ 0xb55ffa6f, "devm_device_add_group" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xb85da197, "devm_input_allocate_device" },
	{ 0x3966fdae, "input_mt_init_slots" },
	{ 0xaac9e1ca, "touchscreen_parse_properties" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x4829a47e, "memcpy" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x96848186, "scnprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cazoteq,iqs550");
MODULE_ALIAS("of:N*T*Cazoteq,iqs550C*");
MODULE_ALIAS("of:N*T*Cazoteq,iqs572");
MODULE_ALIAS("of:N*T*Cazoteq,iqs572C*");
MODULE_ALIAS("of:N*T*Cazoteq,iqs525");
MODULE_ALIAS("of:N*T*Cazoteq,iqs525C*");
MODULE_ALIAS("i2c:iqs550");
MODULE_ALIAS("i2c:iqs572");
MODULE_ALIAS("i2c:iqs525");

MODULE_INFO(srcversion, "B7C99D890EBBBA8825B5EE6");
